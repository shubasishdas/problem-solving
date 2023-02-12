// problem statement - Take an integer nn as input and print the pyramid pattern. For example, for n = 4n=4, the output should be:

//    *
//   ***
//  *****
// *******


//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************
//  *****************
// *******************

#include <iostream> 
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n ; i++){
        int numberOfSpace = n - i;
        int numberOfStar = 2 * i - 1;
        for(int j = 1; j <= numberOfSpace; j++){
            cout << " ";
        }
        for(int k = 1; k <= numberOfStar; k++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0; 
}