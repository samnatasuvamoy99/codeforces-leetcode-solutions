#include<bits/stdc++.h>
using namespace std;

// steps is if all element is zero given array then return 0
// second steps is if  you will  find one segment range thats all element is >= 0 and and  affter find the mex the mex(s); then return 1 
// else their are moere then >= 1 segments that time return 2

 // mex is a smallest missing element given range or array  that you find the given range segments to the given array ;


int main (){
       int t;
       cin >>t;
        while( t--){
          int n; 
              cin >> n;
          int arr[n];
               for( int i =0 ; i < n ; i++){
                     cin >> arr[i];
               }
           int count_zero= 0;
                for ( int i =0 ; i < n ; i++){
                   if ( arr[i] == 0){
                        count_zero++;
                   }
                }
                bool check = false;
             int left =0;
              int right = n-1;
                   while(arr[left] == 0)
                   left++;
                    while ( arr[right] == 0)
                    right--;

            for( int k = left ; k <= right ; k++){
                  if ( arr[k] == 0)
                      check = true;
                  
            }
            
            if ( count_zero == n)
               cout<<0<<"\n";
            
             else if ( check == false)
               cout << 1 << "\n";
            
            else
                   cout << 2 << "\n";
            
              
            }
            return 0;    
        }
       
