#include<iostream> 
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    // find out min_max by storing the value in another value
    // int min = a, max = a;

    // if(max < b) max = b;
    // if(max < c) max = c;

    // if(min > b) min = b;
    // if(min > c) min = c;

    // cout << min << " " << max << "\n";

    cout << min(min(a,b),c) << " " << max(max(a,b),c) << "\n";

    return 0; 
}