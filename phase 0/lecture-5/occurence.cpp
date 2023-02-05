// problem statement - Find how many times the numbers from 1 to 10 occur in an array.

#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,3,3,4,8};
    int occur[11];

    for (int i = 1; i <= 10; i++){
        occur[i] = 0;
    }

    for (int j = 0; j < n; j++){
        occur[arr[j]]++;
    }

    for(int k = 1; k <= 10 ; k++){
        cout << "number " << k << " occurs " << occur[k] << " times" << "\n";
    }

    return 0;
}