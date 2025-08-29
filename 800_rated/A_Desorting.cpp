#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include <algorithm>
    int main(){

          long long t;
          cin >> t;
           while(t--){
                   long long n;
                   cin>>n;
                    vector<long long>arr(n);

                    for( int i =0 ; i <n ; i++){
                         cin>>arr[i];
                    }
                       vector<long long>sorted(arr.begin() , arr.end());
                        sort(sorted.begin(), sorted.end());

                       if ( arr != sorted){
                            cout<<0<<endl;
                       }
                       else{

                       long long result = INT_MAX;
                      for( int  i =0; i < n-1 ; i++){
                               long long  dis = arr[i+1] - arr[i];
                                  long long  dis1= (dis / 2) + 1;
                                  
                                  result =min(result , dis1); 
                      }
                      cout << result<<endl;
                    }
                        
           }
           return 0;
    }
    