#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Talk {
    double start, ending;
};

bool compare(Talk a, Talk b) {
    return a.ending < b.ending;
}

int main() {
    int n;
    cout << "Number of Talks: ";
    cin >> n;

    vector<Talk> talks(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter Start and Ending Time for Talk " << i + 1 << ": ";
        cin >> talks[i].start >> talks[i].ending;
    }

    sort(talks.begin(), talks.end(), compare);

    cout << "Scheduled Talks using Greedy Algorithm:\n";

    cout << talks[0].start << " " << talks[0].ending << endl;

    double lastEnding = talks[0].ending;

    for(int i = 1; i < n; i++) {
        if(talks[i].start >= lastEnding) {
            cout << talks[i].start << " " << talks[i].ending << endl;
            lastEnding = talks[i].ending;
        }
    }

    return 0;
}
