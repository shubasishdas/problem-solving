// problem statement
// Input two integers a and b. Then, compute the solution for the equation result = a + b * b - b + (a / b) (a / b is integer division here) and then print the value of result.

// It is guaranteed that 1≤a,b≤100.

// Testing - Take the input 13 3. The output should be 23


#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int result = a + b * b - b + (a / b);
    cout << result << "\n";
    return 0;
}