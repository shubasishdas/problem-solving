#include<iostream> 
using namespace std;

int main(){
    float n;
    cin >> n;

    if(n - int(n) == 0 ){
        cout << "int " << int(n) << "\n";
    }
    else {
        cout << "float " << int(n) << " " << n - int(n) << "\n";
    }

    return 0; 
}