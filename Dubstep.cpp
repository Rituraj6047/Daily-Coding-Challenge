
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string result = "";
    bool space_needed = false;

    for (int i = 0; i < s.length(); ) {
        // Check for "WUB"
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            i += 3; // Skip the "WUB"
            if (!result.empty()) {
                space_needed = true; // Mark that a space is needed before the next word
            }
        } else {
            // It's part of a word
            if (space_needed) {
                result += ' '; // Add the pending space
                space_needed = false;
            }
            result += s[i]; // Add the character to the result
            i++;
        }
    }

    cout << result << endl;

    return 0;
}
