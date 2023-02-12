// problem statement - Take an integer nn as input and print the half diamond pattern. For example, for n = 4, the output should be:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


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
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *



#include <iostream> 
using namespace std;

int main(){
    int n, numberOfSpace, numberOfStar; cin >> n;
    int numberOfLine = (2 * n -1); 
    for(int line = 1 ; line <= numberOfLine; line++){
        if(n >= line){
            numberOfSpace = 2 * (n - line);
        }
        else{
            numberOfSpace = 2 * (line - n);
        }
        numberOfStar = (2 * n - 1 )- numberOfSpace;

        for(int j = 1; j <= (numberOfSpace / 2) ; j++){
            cout << " ";
        }
        
        for(int k = 1; k <= numberOfStar ; k++){
            cout << "*";
        }
        cout << "\n";

    }

    return 0; 
}