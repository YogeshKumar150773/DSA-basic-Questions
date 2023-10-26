#include <iostream>
using namespace std;

void printArray (int arr[], int n)

{
    
    for (int i = 0; i < n; i++)
    
    {
        
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
}

void reverse (int arr[], int n)

{
    
    int s = 0;
    
    int e = n-1;
    
    while (s <= e)
    
    {
        
        swap(arr[s], arr[e]);
        
        s++;
        
        e--;
        
    }
    
}

int main () 

{
    
    int size;
    
    cin >> size;
    
    int arr[100];
    
    for (int i = 0; i < size; i++)
    
    {
        
        cin >> arr[i];
        
    }
    
    reverse (arr, size);
    
    printArray (arr, size);
    
}