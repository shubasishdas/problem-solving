#include<iostream>
using namespace std;

void hey(string name, int amount)
{
    cout << "Hey " << name << ". You have " << amount << " Taka." << endl;
}
int main()
{
    hey("Meena", "10"); // this one will cause type error
    hey("Meena", '1'); // this one is okay, '1' will be type casted
    hey("Raju", 20);
    return 0;
}