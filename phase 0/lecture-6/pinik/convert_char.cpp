#include<iostream> 
using namespace std;

int main(){
    char m, n;
    cin >> m;

    int convertedNum = (int)m;
    if( convertedNum >= 65 && convertedNum <= 90){
        n = convertedNum + 32;
    }
    else if( convertedNum >= 97 && convertedNum <= 122){
        n = convertedNum - 32;
    }
    cout << n << "\n"; 


    return 0; 
}