#include<iostream> 
using namespace std;

int main(){
    int a, b; char s;
    cin >> a >> s >> b;

    bool isRight = false;
    if((int)s == 62){
        isRight = a > b;
    }
    else if ((int)s == 61){
        isRight = a == b;
    }
    else{
        isRight = a < b;
    }
    
    if(isRight) cout << "Right\n";\
    else cout << "Wrong\n";

    return 0; 
}