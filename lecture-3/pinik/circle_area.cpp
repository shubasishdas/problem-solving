// problem statement

// Input a real integer radius which denotes the radius of a circle. Output the area of the circle. Assume PI = 3.14.

// It is guaranteed that 1 \le radius \le 101≤radius≤10.

// Testing  - Take the input 2.5. The output should be 19.625.

#include<iostream>
using namespace std;

int main(){
    double radius; cin >> radius;
    double PI = 3.14;
    double area = PI * radius * radius ;
    cout << "area of circle" << " " << area << "\n";
    return 0;
}