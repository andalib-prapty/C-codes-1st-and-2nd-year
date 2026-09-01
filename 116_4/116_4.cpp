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


    for (int i = 0; i < n; i++) {
        items[i] = {weights[i], profits[i], (double)profits[i] / weights[i]};
    }


    sort(items.begin(), items.end(), compare);

    double totalProfit = 0.0;


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

    vector<int> weights = {2, 4, 5, 3, 9};
    vector<int> profits = {3, 5, 8, 4, 10};
    int capacity = 20;

    double optimalSolution = fractionalKnapsack(weights, profits, capacity);
    cout << "Optimal solution: " << optimalSolution << endl;

    return 0;
}
