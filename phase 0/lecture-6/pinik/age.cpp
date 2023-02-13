#include<iostream> 
using namespace std;

int main(){
    int numberOfDays, years, months, days;
    cin >> numberOfDays;

    years = numberOfDays / 365;
    int restDays = (numberOfDays % 365); 
    months =  restDays / 30;
    days =  restDays % 30;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";

    return 0; 
}