#include<bits/stdc++.h>
 using namespace std;
 #include<algorithm>
 #include<vector>

    
    int main(){
             long long t;
             cin >>t;
             while(t--){
                    long long n ;
                    cin >> n;
                    vector<int>arr(n);
                    for( int i =0; i < n ; i++){
                           cin>>arr[i];
                    }
               
                    bool hasNegative = false;
              int n = arr.size();
            for (int i = 0; i < n; ++i) {
            if (arr[i] < 0) {
            hasNegative = true;
            break;
        }
      }

      int missingnumber()
         if( hasNegative == false){
              cout <<"NO"<<endl;
         }
         else{
               int j=1;
               while( j <= n){
                    
                        
               }
         }
                     
             }

    }
    
    