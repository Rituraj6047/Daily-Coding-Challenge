#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int available_rooms = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            available_rooms++;
        }
    }

    cout << available_rooms << endl;

    return 0;
}