   #include<bits/stdc++.h>
   using namespace std;
   #include <algorithm> 
   int main(){
         
                     long long n ;
                     cin >> n;
                      long long arr[n];
                      for( int i =0; i < n ; i++)
                         cin >> arr[i];
                      
                      
                  long long  mini =LLONG_MAX;
                  for( int  j =0 ; j < n ; j++)
                         mini=min( mini , llabs(arr[j]));
                  
                  cout << mini << endl;

         
          return 0;
   }