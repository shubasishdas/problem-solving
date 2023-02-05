#include <iostream>
using namespace std;

int main() {
    // for (int week = 1; week <= 4; week++) {
    //     cout << "week = " << week << '\n';
    //     for (int day = 1; day <= 7; day++) {
    //         cout << "   day = " << day << '\n';
    //         if (day == 3) {
    //             break;
    //         }
    //     }
    // }


    // for (int week = 1; week <= 4; week++) {
    //     cout << "week = " << week << '\n';
    //     if (week == 3) {
    //         break;
    //     }
    //     for (int day = 1; day <= 7; day++) {
    //         cout << "   day = " << day << '\n';
    //     }
    // }

    for(int month = 1; month <=12 ; month++){
        for (int week = 1; week <= 4; week++) {
            for (int day = 1; day <= 7; day++) {
                cout << "   month = " << month << "   week = " << week << "   day = " << day << '\n';
                if(day ==4){
                    break;
                }

            }
        }
    }

    return 0;
}