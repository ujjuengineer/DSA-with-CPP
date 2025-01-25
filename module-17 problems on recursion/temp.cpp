#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Function to calculate the minimum possible difference
int findMinDifference(vector<pair<int, int> >& gems) {
    int n = gems.size();
    int minDiff = INT_MAX;

    // Check all combinations of chest values
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int maxChest1 = max(gems[i].first, gems[j].first);
            int maxChest2 = max(gems[i].second, gems[j].second);
            minDiff = min(minDiff, abs(maxChest1 - maxChest2));
        }
    }
    return minDiff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int> > gems(n);

        for (int i = 0; i < n; i++) {
            cin >> gems[i].first >> gems[i].second;
        }

        cout << findMinDifference(gems) << endl;
    }
    return 0;
}
