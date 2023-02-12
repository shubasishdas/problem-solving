// problem statement - Take an integer n as input and then take n integers as input in an array named a. Now print the number of pairs of integers (i, j) such that 0≤i<j≤n−1 and a_i + a_j = 0 

// Constraints: 1≤n≤10 and all elements in a are at least −10 and at most 10.

#include <iostream> 
using namespace std;

int main(){
    int n,count = 0 ; cin >> n;
    int a[n];

    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    for(int j = 0; j < n ; j++){
        for(int k = j+1; k < n ; k++){
            if(a[j] + a[k] == 0 ){
                count++;
            } 
        }
    } 
    cout << count;

    return 0; 
}