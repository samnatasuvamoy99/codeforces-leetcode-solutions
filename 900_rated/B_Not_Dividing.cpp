#include<bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       while(t--){
             long long n;
             cin>>n;
             long long arr[n];
             for( int i =0 ; i < n ; i++){
                   cin>>arr[i];
             }

             for( int i =0 ; i < n ; i++){
                   if( arr[i] == 1){
                         arr[i]++;
                   }
             }

             for( int i =0; i <n-1; i++){
                   if( arr[i+1] % arr[i] == 0){
                         arr[i+1]++;
                   }
                 
             }

             for( int i =0 ; i < n; i++){
                   cout<<arr[i]<<" ";
             }
             cout << endl;
       }
       return 0;
}