#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int firstIndex (int arr[], int size, int key)

{
    
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while (s <= e)
    
    {
        
        if (arr[mid] == key)
        
        {
            
            ans = mid;
            e = mid -1;
            
        }
        
        else if (key > arr[mid])
        
        {
            
            s = mid + 1;
            
        }
        
        else if (key < arr[mid])
        
        {
            
            e = mid -1;
            
        }
        
        mid = s + (e-s)/2;
        
    }
    
    return ans;
    
}

int lastIndex (int arr[], int size, int key)

{
    
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while (s <= e)
    
    {
        
        if (arr[mid] == key)
        
        {
            
            ans = mid;
            s = mid + 1;
            
        }
        
        else if (key > arr[mid])
        
        {
            
            s = mid + 1;
            
        }
        
        else if (key < arr[mid])
        
        {
            
            e = mid -1;
            
        }
        
        mid = s + (e-s)/2;
        
    }
    
    return ans;
    
}

int main ()

{
    
    int arr[7] = {1, 3, 3, 3, 3, 3, 10};
    
    int first = firstIndex(arr, 7, 3);
    
    int last = lastIndex(arr, 7, 3);
    
    cout << first << endl;
    
    cout << last << endl;
    
}