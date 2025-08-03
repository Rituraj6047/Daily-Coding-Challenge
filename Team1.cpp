#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int solved_problems_count = 0;
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2) {
            solved_problems_count++;
        }
    }

    std::cout << solved_problems_count << std::endl;

    return 0;
}