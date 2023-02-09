// problem statement - concatenate two strings and print it.

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[] = "hello";
    char b[] = "world!";

    int len_a = strlen(a);
    int len_b = strlen(b);

    int newArrLength = len_a+len_b; 
    char newArr[newArrLength + 1];

    int count = 0;

    for(int i = 0; i < len_a; i++ ){
        newArr[i] = a[i];
        count++;
    }

    cout << newArr << "\n" ;

    for(int j = 0; j < len_b; j++ ){
        newArr[len_a + j] = b[j];
        count++;
    }

    newArr[newArrLength] = '\0';
    
    cout << newArr << " " << count << "\n" ;

    // char m[3] = {'y','0','\0'};

    // cout << m << strlen(m) << "\n"; 
    
    return 0;
}
