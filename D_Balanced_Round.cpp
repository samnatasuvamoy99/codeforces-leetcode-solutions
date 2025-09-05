#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main( ){
        int t;
        cin>>t;
        while(t--){
             long long n ,k;
             cin>>n>>k;
             vector<long long>arr(n);
             for( int i =0 ; i< n ; i++){
               cin>>arr[i];
             }
           
             sort(arr.begin(),arr.end());
              long long counter =1;
              long long ans=1;
              for(int  j=1 ; j  < n ; j++){
                    if ( arr[j]-arr[j-1] <= k)
                          counter++;
                    else
                       counter=1;
                    ans=max(ans , counter);
              }
             cout<<n- ans<<"\n";
        }
        return 0;
}