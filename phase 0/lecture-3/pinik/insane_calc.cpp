// problem statement

// Input two integers a and b. Consider another three variables c, d and result. Then

// take the bitwise AND of a and b and store it to c.
// take the bitwise OR of a and b and store it to d.
// take the bitwise XOR of c and d and store it to result. Finally, print the value of result.
// It is guaranteed that 1≤a,b≤1000000.

// Testing - Take the input 144152 176217. The output should be 33601


#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, result;
    cin >> a >> b;
    c = a & b;
    d = a | b;
    result = c ^ d;
    cout << result << "\n";
    return 0;
}