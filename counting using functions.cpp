#include <iostream>
using namespace std;

void printCounting (int n)                                                       //we use void because this function will not return anything

{
    
    for (int i = 1; i <= n; i++)
    
    {
        
        cout << i << " ";
        
    }
    
    cout << endl;
    
}

int main () 

{
    
    int n;
    
    cin >> n;
    
    printCounting(n);
    
}