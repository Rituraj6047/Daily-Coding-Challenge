#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Strategy 1: Buy n single-ride tickets
    int cost1 = n * a;

    // Strategy 2: Buy m-ride tickets for the bulk, single for the rest
    int cost2 = (n / m) * b + (n % m) * a;

    // Strategy 3: Buy enough m-ride tickets to cover all n rides
    int cost3 = ((n + m - 1) / m) * b;

    // The answer is the minimum of the three strategies
    int min_cost = min({cost1, cost2, cost3});

    cout << min_cost << endl;

    return 0;
}