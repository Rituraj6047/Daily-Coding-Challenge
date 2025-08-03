#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    int lucky_digit_count = 0;
    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            lucky_digit_count++;
        }
    }

    if (lucky_digit_count == 4 || lucky_digit_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}