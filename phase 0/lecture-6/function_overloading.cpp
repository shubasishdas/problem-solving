#include<iostream>
using namespace std;

int get(int a)
{
   cout << "Inside function 1\n";
   return a;
}

int get(double a)
{
   cout << "Inside function 2\n";
   return a;
}

int get(int a, int b)
{
   cout << "Inside function 3\n";
   return a + b;
}

double get(int a, double b)
{
   cout << "Inside function 4\n";
   return a + b;
}


int main()
{
   cout << get(10) << '\n';
   cout << get(10.5) << '\n';
   cout << get(10, 20) << '\n';
   cout << get(10, 20.5) << '\n';

   return 0;
}