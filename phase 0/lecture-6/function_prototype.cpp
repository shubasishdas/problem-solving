#include<iostream>
using namespace std;

int get_sum(int, int); // prototype of the get_sum function

int main()
{
    cout << get_sum(10, 20) << '\n';
    cout << get_sum(5, 7) << '\n';
    return 0;
}

int get_sum(int a, int b)
{
    int sum = a + b;
    return sum;
}