#include <iostream>
using namespace std;
float add(float a, float b)         //recursion for addition
{
    return a+b;
}
float subtract(float a, float b)        //recursion for subtraction
{
    return a-b;
}
float multiply(float a, float b)        //recursion for Multiplication
{
    return a*b;
}
float divide(float a, float b)      //recurison for divion
{
    return a/b;
}
int main() {
    float i,j;
    char Operation;
    cout << "Enter the value of 'a': ";
    cin>>i;
    cout<<"Enter the value of 'b': ";
    cin>>j;
    cout<<"Choose an Operation(+,-,*,/): ";
    cin>>Operation;
    switch (Operation)
    {
        case '+':
        cout<<"Result: "<<add(i,j)<<endl;
        break;
        case '-':
        cout<<"Result: "<<subtract(i,j)<<endl;
        break;
        case '/':
        cout<<"Result: "<<divide(i,j)<<endl;
        break;
        case '*':
        cout<<"Result: "<<multiply(i,j)<<endl;
        break;
    
    default:
        break;
    }
    return 0;
}