#include<iostream>
#include<cmath> 
using namespace std;

int main(){
    int a = pow(2.5,3.6);
    cout << a << "\n";

    double b = pow(2.5,3.6);
    cout << b << "\n";

     // double^double
    double result = pow(2.3, 4.5);
    cout << result << '\n';


    // int^int, but the return type will still be double as pow is a double function
    int x = pow(5, 3);
    cout << x << '\n';

    x = pow(2, 20); // not a good practice, because precision errors "might" occur
    cout << x << '\n';

    x = round(pow(2, 20)); // good practice
    cout << x << '\n';


    return 0; 
}