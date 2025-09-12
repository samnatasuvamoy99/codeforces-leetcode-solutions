#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main(){
     int t;
     cin >> t;
      while(t--){
            long long n;
            cin>>n;
            long long arr[n];
            for( int i  =0 ; i < n ; i++){
                cin>>arr[i];
            }

            long long answer =arr[n-1] - arr[0];
            for( int i =1; i < n ; i++){
                  answer = max( answer,arr[i]  - arr[0]);

            }
            for( int i = 0 ; i < n-1 ; i++){
               answer = max( answer,arr[n-1] - arr[i]);
            }
            for( int i =0 ; i < n-1 ; i++){
                  answer=max(answer, arr[i] - arr[i+1]);
            }
            cout << answer<<endl;
      }
      return 0;
}