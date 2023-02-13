#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if(s==43) cout << a+b;
    else if(s==45) cout << a-b;
    else if(s==42) cout << a*b;
    else if(s==47) cout << a/b;

    return 0;
}