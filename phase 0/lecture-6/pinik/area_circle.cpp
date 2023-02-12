#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r, area;
    cin >> r;
    area = 3.141592653 * r * r;

    cout << setprecision(9) << fixed;
    cout << area << "\n"; 
}