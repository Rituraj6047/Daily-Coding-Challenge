#include <iostream>
#include <string>

// Using the standard namespace to avoid prefixing with std::
using namespace std;

void solve() {
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << to_string(word.length() - 2) << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}