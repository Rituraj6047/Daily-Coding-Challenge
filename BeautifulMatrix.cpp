#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix_val;
    int row_of_one = 0;
    int col_of_one = 0;

    // Find the coordinates of the '1' using 1-based indexing
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> matrix_val;
            if (matrix_val == 1) {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }

    // Calculate the Manhattan distance to the center (3, 3)
    int moves = abs(row_of_one - 3) + abs(col_of_one - 3);

    cout << moves << endl;

    return 0;
}