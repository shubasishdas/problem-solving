#include<iostream> 
using namespace std;

int main(){
    int a = 10, b = 20, c = 30;

    swap(a,b);
    
    cout << a << " " << b << "\n"; 

    swap(b,c);

    cout << a << " " << b << " " << c << "\n"; 

    return 0; 
}