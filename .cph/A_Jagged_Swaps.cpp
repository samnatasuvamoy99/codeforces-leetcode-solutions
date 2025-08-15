#include<bits/stdc++.h>
    using namespace std;
    int main(){
            int t;
            cin >> t;

            while (t--){
                  int  n;
                  cin >> n;
                   vector<int>arr(n);
                   for( int i=0; i < n; i++){
                              cin >>arr[i];

                   }

                      int c = arr[0];
                            
                        if ( c == 1){
                               cout<< "YES"<<endl;
                        }
                        else{
                             cout<<"NO"<<endl;
                        }        
                    
            }
            return 0;

    }