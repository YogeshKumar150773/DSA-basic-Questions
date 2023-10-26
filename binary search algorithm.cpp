#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int binarySearch (int arr[], int size, int key)

{
    
    int s = 0;
    int e = size - 1;
    
    int mid = s + ( e - s ) / 2;
    
    while ( s <= e )
    
    {
        
        if ( arr[mid] == key )
        
        {
            
            return mid;
            
        }
        
        if( key > arr[mid] )
        
        {
            
            s = mid + 1;
            
        }
        
        else
        
        {
            
            e = mid - 1;
            
        }
       
       mid = s + ( e - s ) / 2;
        
    }
    
    return -1;
    
}

int main ()

{
    
    int even[8] = {2, 4, 8, 13, 20, 21, 23, 100};
    int odd[7] = {1, 5, 9, 13, 17, 69, 96};
    
    int evenIndex = binarySearch(even , 8, 100);
    
    cout << "Index of the key in even array is " << evenIndex << endl;
    
    int oddIndex = binarySearch(odd, 7, 69);
    
    cout << "Index of the key in odd array is  " << oddIndex << endl;
    
}