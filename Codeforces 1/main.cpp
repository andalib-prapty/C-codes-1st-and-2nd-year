#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(vector<int>& weights, vector<int>& profits, int capacity) {
    int n = weights.size();
    vector<Item> items(n);

    // Initialize items with weights, profits, and profit-to-weight ratios
    for (int i = 0; i < n; i++) {
        items[i] = {weights[i], profits[i], (double)profits[i] / weights[i]};
    }

    // Sort items by their profit-to-weight ratio in descending order
    sort(items.begin(), items.end(), compare);

    double totalProfit = 0.0;

    // Calculate the maximum profit
    for (const auto& item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalProfit += item.profit;
        } else {
            totalProfit += item.ratio * capacity;
            break;
        }
    }

    return totalProfit;
}

int main() {
    // Input values
    vector<int> weights = {2, 4, 5, 3, 9};
    vector<int> profits = {3, 5, 8, 4, 10};
    int capacity = 20;

    double optimalSolution = fractionalKnapsack(weights, profits, capacity);
    cout << "Optimal solution: " << optimalSolution << endl;

    return 0;
}
