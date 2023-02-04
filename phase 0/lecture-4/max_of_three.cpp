#include <iostream>
using namespace std;

int main(){
    int a, b, c; cin >>a >> b >> c;
    // if(a >=b && a>=c){
    //     cout << "largest number is " << a << "\n";
    // }
    // else if(b >= a && b >= c){
    //     cout << "largest number is " << b << "\n";
    // }
    // else {
    //     cout << "largest number is " << c << "\n";
    // }

    int largest = a;
    
    if(b > largest){
        largest = b;
    }
    
    if(c > largest){
        largest = c;
    }
    cout << "largest number is " << largest << "\n";
    return 0;
}