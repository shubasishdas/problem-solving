// problem statement - Take an integer n as input and print the number sum pattern. For example, for n = 5, the output should be:

// 1=1
// 1+2=3
// 1+2+3=6
// 1+2+3+4=10
// 1+2+3+4+5=15


#include <iostream> 
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i =1; i <= n ;i++){
        sum += i;
        for (int j = 1 ; j <= i ; j++){
            // cout << j;
            // if(j!=i){
            //     cout << "+";
            // }
            if(j != 1){
                cout << "+";
            }
            cout << j ;
        }
        cout << "=" << sum << "\n";
    }

    return 0; 
}