#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    long long total_time = 0;
    int current_pos = 1;

    for (int i = 0; i < m; ++i) {
        int target_pos;
        cin >> target_pos;

        if (target_pos >= current_pos) {
            total_time += target_pos - current_pos;
        } else {
            // She has to go around the ring
            total_time += n - current_pos + target_pos;
        }
        
        // Update her current location for the next task
        current_pos = target_pos;
    }

    cout << total_time << endl;

    return 0;
}