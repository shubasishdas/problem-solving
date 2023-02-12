// problem statement - Take an integer n as input and then take n integers as input in an array named a. Now print the maximum number in the array.

// Constraints: 1≤n≤10 and all elements in a are at least -10 and at most 10.

#include <iostream> 
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], max = a[1];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // max = - 10;
    
    // for(int j = 0; j < n ; j++){
    //     if(a[j] > max){
    //         max = a[j];
    //     }
    // }
    cout << "max of array: " << max;

    return 0; 
}