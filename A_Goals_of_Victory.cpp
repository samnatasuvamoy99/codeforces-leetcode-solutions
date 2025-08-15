#include<bits/stdc++.h>
   using namespace std;
   #include<numeric>
   #include<vector>
   int main (){
         int t;
            cin >> t;
                while( t--){
                      long long n;
                      cin >> n;
                         std:: vector<int> arr(n-1);
                      for( int i =0 ; i < n-1 ; i++){
                             cin >>arr[i];
                      }

                      int sum = std::accumulate(arr.begin() , arr.end() , 0);
                      cout<<-(sum)<<endl;

                       
                }
                return 0;
   }