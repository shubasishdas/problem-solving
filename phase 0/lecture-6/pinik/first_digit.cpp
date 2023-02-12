#include<iostream> 
using namespace std;

int main(){
    int x, first_digit;
    cin >> x;

    first_digit = (x / 1000); 
    if(first_digit % 2 == 0) cout << "EVEN\n";
    else cout << "ODD\n";

    return 0; 
}