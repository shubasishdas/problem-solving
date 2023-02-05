// problem statement - Reverse an array of size n by taking the array as input.

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    cout << "value pf n : " << n;
    
    // take input of array 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // // reverse the array
    // int rev_arr[n];
    // for(int j = 0; j < n; j++){
    //     rev_arr[j] = arr[n-1-j];
    // }

    //reverse the array
    int rev_arr[n], b = 0;
    for(int j = n-1; j >=0 ;j--){
        rev_arr[b] = arr[j];
        b++;
    }

    for(int k = 0; k < n ; k++){
        // cout << "value of rev_arr: " << rev_arr[k] << " ";
        cout << rev_arr[k] << " ";

    }

    return 0;
}