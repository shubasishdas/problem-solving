#include <iostream> 
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int x = (long long)a * b - (long long)c * d;

    cout << "Difference = " <<  x << "\n";  

    return 0; 
}