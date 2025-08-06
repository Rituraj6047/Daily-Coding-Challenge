#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double sum_of_percentages = 0.0;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        sum_of_percentages += p;
    }

    double final_percentage = sum_of_percentages / n;

    cout << fixed << setprecision(12) << final_percentage << endl;

    return 0;
}