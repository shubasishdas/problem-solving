Elements of the array have consecutive addresses. So if age[0] is in location 1000 in memory, then age[1] is at 1004, age[2] is at 1008 as int has 4 bytes!
So age[k] is at 1000 + k x 4.
So that means you can find the address of any element instantly! This is the most powerful feature of an array!.

Take input for array
=> int age[5];
for (int i = 0; i < 5; i++) {
cin >> age[i];
}

C-strings are arrays of type char terminated with a null character, that is, \0 (ASCII value of null character is 0).

If we want to take a string of n characters as input, then we need to declare a char array of size n + 1(+1 for the null character)

We can take input the string easily
=>
chat a[100];
cin >> a;
