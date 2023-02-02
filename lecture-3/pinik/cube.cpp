// problem statement

// Input an integer n. Output the last two digits of the number n^3
// It is guaranteed that 1≤n≤1234567 and it will be such that the last two digits of n^3 will not contain any 0s.

// For example, if n = 5, then n^3 = 5^3 = 125
// So the last two digits are 25 and you should print it.

#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int output = ((long long int)n * n * n) % 100;
    cout << "the last two digits are: " << output << "\n"; 
    return 0;
}