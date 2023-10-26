#include <iostream>
#include <math.h>
using namespace std;

int main ()

{
  
    //to find reverse from bits { answer = bit * pow(10,i) + answer }
    
    //to find straigth number from bits { answer = answer * 10 + bit }
    
    int n;
    
    cin >> n;
    
    int ans = 0;
    
    int i = 0;
    
    while ( n!= 0)
    
    {
        
        int bit = n & 1;
        
        ans = (bit * pow (10,i)) + ans;
        
        n = n >> 1;
        
        i++;
        
    }
    
    cout << "Answer is " << ans << endl;
    
}