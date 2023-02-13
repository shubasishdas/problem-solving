#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max(max(a,b),c);
    int mn = min(min(a,b),c);

    int mid = a + b + c - mx - mn; 

    cout << mn << "\n" << mid << "\n" << mx << "\n\n";
    cout << a << "\n" << b << "\n" << c << "\n";

    return 0; 
}