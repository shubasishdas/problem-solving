#include<iostream> 
using namespace std;

int main(){
    int a, b, c; char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == 43){
        if(a + b == c) cout << "Yes\n";
        else cout << a + b << "\n";
    }

    if(s == 45){
        if(a - b == c) cout << "Yes\n";
        else cout << a - b << "\n";
    }    

    if(s == 42){
        if(a * b == c) cout << "Yes\n";
        else cout << a * b << "\n";
    }

    return 0; 
}