// steps 
//1--->input all array  , queries range,changeing element K,
//2====>change that input vector array  element as given queires ranges element to k 
//3 ===>  after changeing the array calculte the total sum of array element and check odd or even then  cout yes or no!
//4 ===> without update the hole array to update the sum applay {prefix sum}


#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main(){
     int  t;
     cin>>t;
     while(t--){
           long long n, q;
           cin>>n>>q;
             vector<long long>arr(n);
             long long sum =0;
             for( int i =0 ;i < n ; i++){
                  cin>>arr[i];
                  sum +=arr[i];
             }

             vector<long long >prefix_sum(n+1 , 0);
             for( int i =1 ; i <=n ; i++){
                   prefix_sum[i] =prefix_sum[i-1] + arr[i-1];
             }

             while(q--){
                   long long  l , r , k;
                   cin >> l>> r >> k;

                  long long update_sum = ( sum - (prefix_sum[r]  - prefix_sum[l-1]) + ( r-l +1)*k) ;

                  if( update_sum % 2 == 1){
                       cout<<"YES\n";
                  }
                  else{
                       cout<<"NO\n";
                  }
             }
     }
     return 0;
}

