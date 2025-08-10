#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    long long sereja_score = 0;
    long long dima_score = 0;
    bool is_sereja_turn = true;

    while (left <= right) {
        int chosen_card;
        if (cards[left] > cards[right]) {
            chosen_card = cards[left];
            left++;
        } else {
            chosen_card = cards[right];
            right--;
        }

        if (is_sereja_turn) {
            sereja_score += chosen_card;
        } else {
            dima_score += chosen_card;
        }

        is_sereja_turn = !is_sereja_turn; // Switch turns
    }

    cout << sereja_score << " " << dima_score << endl;

    return 0;
}