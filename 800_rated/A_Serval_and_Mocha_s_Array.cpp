#include<bits/stdc++.h>
using namespace std;
 int main(){
       long long t;
        cin >>t;
           while(t--){
               long long n;
               cin>>n;
                 long long arr[n];
                 for( int i =0; i < n ; i++){
                        cin >> arr[i];
                 }

                 long long flag =0;
                 for( int i =0; i < n-1 ; i++){
                     for( int j =1; j < n ; j++){

                         if ( __gcd(arr[i],arr[j]) <= 2){
                              flag =1;
                       }
                     }
                       
                 }

                 if ( flag == 1)
                         cout <<"Yes"<<"\n";
                 
                 else
                      cout <<"No"<<"\n";
                 
           }
           return 0;
 }