// problem statement - Take a string s of lowercase characters as input. Now delete the first character from s and print it.

// Constraints: 1≤ length of s ≤10 and all characters in s are lowercase and won't have any space.


#include <iostream> 
#include <string.h>
using namespace std;

int main(){
    char s[10+1], outputArr[10];
    cin >> s;

    int len = strlen(s); 

    for(int i = 0; i < len ; i++){
        if(i+1 == '\0'){
            break;
        }
        outputArr[i] = s[i+1];
    }
    outputArr[len] = '\0';

    cout << outputArr;


    
    return 0; 
}