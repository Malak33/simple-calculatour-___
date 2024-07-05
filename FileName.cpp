#include <iostream>
using namespace std;
int main ()
{
    char op;
float n1, n2, result;
cout << "Enter an operator (+, -, *, /): " << endl;
cin >> op;
cout << "Enter two operands: " << endl;
cin >> n1 >> n2;
switch (op)
{
case '+':
    cout << "The Selected Case is Addition" << endl;
    result = n1 + n2;
    cout << "The Final Result equals " << result << endl;
    break;
case '-':
    cout << "The Selected Case is Subtraction" << endl;
    result = n1 - n2;
    cout << "The Final Result equals " << result << endl;
    break;
case '*':
    cout << "The Selected Case is Multiplication" << endl;
    result = n1 * n2;
    cout << "The Final Result equals " << result << endl;
    break;
case '/':
    cout << "The Selected Case is Division" << endl;
    result = n1 / n2;
    cout << "The Final Result equals " << result << endl;
    break;
default:
    cout << "Error! operator is not correct";

}
    return 0;

}