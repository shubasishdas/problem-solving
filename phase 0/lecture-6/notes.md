function notation
=>
returnType functionName (parameter1, parameter2, ...) {
// function body
}

prototype define
=>
return_type function_name(data_type)
int get_sum(int, int);

function overload
=>
Different functions can have same name if the number of arguements or type of argument is different
int get(int a);
int get(double a);
int get(int a, int b);

void type
=> When a function doesn't return anything value, it means the return value is void

To print global value explicitly
=>
cout << ::global_value

It's safe to use round function over pow function; cause pow function take and return double value. And sometimes it causes precision error. For that precision error, when we define the variable in int, it'll causes significant error.
int a = pow(2,4)
=> if pow(2,4) returns 15.9999, a will store 15 only. To remove the error, we can use int a = round(pow(2,5))

lcm = (a x b) / gcd;

To select same keyword, click on start of the word and ctrl+D

For debugging, printing the value is the most simple and effective one!

Six verdict is normally shown based on the submission of code
=>
accpeted, wrong answer on test n, compilation error, runtime error on test n, time limit, memory limit

Runtime error on test n
=>
Usually caused by accessing an array index which is out of bounds, division by 0 etc.

Inclusive means the range including those number
=>
5 to 10 inclusive. That mean 5,6,7,8,9,10 are included in that range.
