#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int id, profit, deadline;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

pair<vector<int>, int> jobSequencing(vector<int>& profits, vector<int>& deadlines) {
    int n = profits.size();
    vector<Job> jobs;
    for (int i = 0; i < n; i++) {
        jobs.push_back({i + 1, profits[i], deadlines[i]});
    }

    sort(jobs.begin(), jobs.end(), compare);

    int maxDeadline = *max_element(deadlines.begin(), deadlines.end());
    vector<int> slots(maxDeadline, -1);
    int totalProfit = 0;

    for (auto& job : jobs) {
        for (int j = min(maxDeadline, job.deadline) - 1; j >= 0; j--) {
            if (slots[j] == -1) {
                slots[j] = job.id;
                totalProfit += job.profit;
                break;
            }
        }
    }

    vector<int> scheduledJobs;
    for (int slot : slots) {
        if (slot != -1) {
            scheduledJobs.push_back(slot);
        }
    }

    return {scheduledJobs, totalProfit};
}

int main() {
    vector<int> profits = {100, 10, 15, 27};
    vector<int> deadlines = {2, 1, 2, 1};

    auto [scheduledJobs, optimalProfit] = jobSequencing(profits, deadlines);

    cout << "Optimal solution (Job IDs): ";
    for (int jobId : scheduledJobs) {
        cout << jobId << " ";
    }
    cout << endl;
    cout << "Total Profit: " << optimalProfit << endl;

    return 0;
}
s
