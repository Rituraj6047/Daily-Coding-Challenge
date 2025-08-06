#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int removals_count = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            removals_count++;
        }
    }

    cout << removals_count << endl;

    return 0;
}