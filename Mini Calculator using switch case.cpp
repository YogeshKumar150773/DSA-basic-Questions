#include <iostream>
using namespace std;

int main () 

{
    int a;
    cout << "Input the first number" << endl;
    cin >> a;
    
    int b;
    cout << "Input the second number" << endl;
    cin >> b;
    
    char op;
    cout << "Enter the operation you want to perform" << endl;
    cin >> op;
    
    switch (op)
    
    {
        
        case '+': cout << (a + b) << endl;
                  break;
        
        case '-': cout << (a - b) << endl;
                  break;
        
        case '*': cout << (a * b) << endl;
                  break;
        
        case '/': cout << (a / b) << endl;
                  break;
        
        case '%': cout << (a % b) << endl;
                  break;
        
    }
    
}