// problem statement - Take an integer n as input and print the square pattern. For example, for n=5, the output should be:

// *****
// *   *
// *   *
// *   *
// ***** 

#include <iostream> 
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            // if(i !=1 && i!=n ){
            //     if(j !=1 && j!=n){
            //         cout << " ";
            //     }
            //     else {
            //         cout << "*";
            //     }
            // }
            // else {
            //     cout << "*";
            // }

            // if(i == 1 || i == n){
            //     cout << "*";
            // }
            // else {
            //     if(j == 1 || j ==n){
            //         cout << "*";
            //     }
            //     else {
            //         cout << " ";
            //     }
            // }

            if(i == 1 || i == n || j == 1 || j == n){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0; 
}