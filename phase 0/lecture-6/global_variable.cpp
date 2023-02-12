#include <iostream>
using namespace std;

int x;
void yo()
{
    cout << x << '\n';
}

int main()
{
    x = 10;
    yo();
    return 0;
}