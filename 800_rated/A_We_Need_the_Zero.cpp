#include<bits/stdc++.h>
using namespace std;
  int main(){
            long long t;
             cin >> t;
              while(t--){
                    long long n;
                    cin>>n;
                    long long arr[n];
                    long long total_xor =0;
                        for( int i =0 ; i < n ; i++){
                                cin  >> arr[i];
                               total_xor ^=arr[i];
                        }

                        if( n % 2 ==1){
                             cout<<total_xor<<"\n";
                        }
                        else{
                               if( total_xor == 0)
                                    cout<< n << "\n";
                               
                               else
                                    cout << -1<<"\n";
                               
                        }
              }
              return 0;
  }