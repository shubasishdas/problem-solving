#include<iostream>
using namespace std;

void yo()
{
    int x = 10;
}

int main()
{
    yo();
    cout << x << '\n'; // x is not defined in local scope of main function and global scope also has no varible for x 
    return 0;
}