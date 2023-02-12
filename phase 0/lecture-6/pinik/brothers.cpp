#include<iostream> 
#include <string.h>

using namespace std;

int main(){
    // string f1, s1; cin >> f1 >> s1;
    // string f2, s2; cin >> f2 >> s2;

    // if(s1 == s2){
    //     cout << "ARE Brothers" << "\n";
    // }
    // else {
    //     cout << "NOT" << "\n";

    // }

    char f1[20], s1[20]; cin >> f1 >> s1;
    char f2[20], s2[20]; cin >> f2 >> s2;

    int len = strlen(s1);
    bool all_char_same = true;

    for(int i =  0; i < len; i++){
        if(s1[i] != s2[i]){
            all_char_same = false;
            break;
        }
    }

    if(all_char_same) cout << "ARE Brothers" << "\n";
    else cout << "NOT" << "\n";

    return 0; 
}