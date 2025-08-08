#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Use a vector of size n+1 to easily use 1-based indexing for friends.
    vector<int> givers(n + 1);

    // Read the input and build the reverse mapping.
    // 'i' represents the friend giving the gift (the giver).
    for (int i = 1; i <= n; ++i) {
        int receiver;
        cin >> receiver;
        // We now know who gave a gift to 'receiver'. It was 'i'.
        givers[receiver] = i;
    }

    // Print the results.
    for (int j = 1; j <= n; ++j) {
        cout << givers[j] << (j == n ? "" : " ");
    }
    cout << endl;

    return 0;
}