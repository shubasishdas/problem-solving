#include<iostream>
using namespace std;

int main()
{
    int a = 15, b = 20;
    cout << max(a, b) << '\n';
    cout << min(a, b) << '\n';
    int c = 30;
    cout << max(a, max(b, c)) << '\n';
    cout << min(a, min(b, c)) << '\n';
    return 0;
}