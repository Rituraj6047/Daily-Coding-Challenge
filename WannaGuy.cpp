#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<int> passed_levels;
    int p, level;

    // Read Little X's levels
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> level;
        passed_levels.insert(level);
    }

    // Read Little Y's levels
    cin >> p; // Re-using the same variable 'p' for 'q'
    for (int i = 0; i < p; ++i) {
        cin >> level;
        passed_levels.insert(level);
    }

    if (passed_levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}