#include<bits/stdc++.h>
 using namespace std;

 int main(){
        long long  t;
        cin >>t;
         while(t--){
              long long  n , a , b;
              cin >>n>>a>>b;

                  long long  result = a + b + 2;
                 if ( result <= n || (a==b && b == n )){
                  cout <<"Yes"<<"\n";
                   
                 }
                 else{
                    cout <<"No"<<"\n";
                 }      
         }
         return 0;
 }
