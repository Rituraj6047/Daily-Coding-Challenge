#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int problems_to_solve = 0;
    while (n--) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2) {
            problems_to_solve++;
        }
    }
    cout << problems_to_solve << endl;
    return 0;
}