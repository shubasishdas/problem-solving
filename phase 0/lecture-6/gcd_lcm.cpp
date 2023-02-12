#include <iostream> 
#include <algorithm>
using namespace std;

int main(){
    int a = 15, b = 25;
    int gcd = __gcd(a,b);
    int lcm = a *b / gcd;

    cout << gcd << " " << lcm << "\n" ;

    return 0; 
}