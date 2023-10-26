#include <iostream>
using namespace std;

bool search (int arr[], int n, int key)

{
    
    for (int i = 0; i < n; i++)
    
    {
        
        if (arr[i] == key)
        
        {
            
            return 1;
            
        }
        
    }
    
    return 0;
    
}

int main () 

{
    
    int num[10] = {2, 4, 10, -2, 5, 78, 100, 32, 43, 11};
    
    int key;
    
    cin >> key;
    
    if (search(num, 10, key))
    
    {
        
        cout << "Key is Present" << endl;
        
    }
    
    else
    
    {
        
        cout << "Key is absent" << endl;
        
    }
    
}