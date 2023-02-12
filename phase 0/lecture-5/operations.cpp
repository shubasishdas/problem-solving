#include <iostream>
using namespace std;

int main() {
    // int operations = 0;
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 6; j++) {
    //         operations++;
    //     }
    // }
    // cout << operations << '\n';

    // int operations = 0;
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 6; j++) {
    //         if (j == 3 || j == 5) continue;
    //         operations++;
    //     }
    // }
    // cout << operations << '\n';

    // int operations = 0;
    // for (int i = 1; i <= 5; i++) {
    //     if (i == 4) continue;
    //     for (int j = 1; j <= 6; j++) {
    //         if (j == 4) break;
    //         operations++;
    //     }
    // }
    // cout << operations << '\n';


    for (int i = 1; i <= 2; i++) {
        cout << "i = " << i << '\n';
        for (int j = 1; j <= 2; j++) {
            cout << "   j = " << j << '\n';
            for (int k = 1; k <= 2; k++) {
                cout << "       k = " << k << '\n';
            }
        }
    }

    return 0;
}