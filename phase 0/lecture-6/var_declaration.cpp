#include<iostream>
using namespace std;

void up()
{
    cout << x << '\n'; // will show error cause x is not defined earlier 
}
int x;
void down()
{
    cout << x << '\n';
}

int main()
{
    x = 10;
    up();
    down();
    return 0;
}