#include <iostream> 
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 0){
        cout << n;
    }
    else{
        while (n != 0){
            int digit = n % 10;
            n = n / 10;
            cout << digit << "\n" ;
        }
    }
    return 0; 
}