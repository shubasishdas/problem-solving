#include <iostream> 
using namespace std;

int main(){
    int n ;
    cin >> n;

    // As the time limit is less than 1 sec, we can;t use loop where it exceeds 10^8

    long long int sum = (long long)n*(n+1)/2;
    
    cout << sum << "\n"; 

    return 0; 
}