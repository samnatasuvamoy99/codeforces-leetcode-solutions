#include<bits/stdc++.h>
  using namespace std;
  #include<vector>
   int main(){
             long long t;
             cin>>t;
              while (t--){
                    long long n;
                     cin>>n;
                      vector<long long>arr(n);
                             long long count =0;
                         for( int i =0 ; i < n ; i++){
                                 cin>>arr[i];
                                 if (arr[i] % 2 != 0){
                                          count++;
                                 }   
                         }
                             if ( count % 2 != 0){
                                   cout<<"NO"<<endl;
                             }
                             else
                             cout<<"YES"<<endl;
              }
              return 0;
   }