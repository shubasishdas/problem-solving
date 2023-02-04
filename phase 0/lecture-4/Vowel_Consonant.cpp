#include <iostream>
using namespace std;

int main(){
    char lowercase_char; cin >> lowercase_char;
    if(lowercase_char == 'a' || lowercase_char == 'e' || lowercase_char == 'i' || lowercase_char == 'o' || lowercase_char == 'u') {
        
    cout << "Character is vowel" << "\n";
    
    } 
    else {
    cout << "Character is consonant" << "\n";
    } 

    return 0;
}