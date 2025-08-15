#include<bits/stdc++.h>
using namespace std;
#include<vector>
  int main(){

        int t;
        cin>>t;
         while ( t--){
                int  n , k;
               cin >> n >> k;

               string s;
               cin>>s;
           vector<int> frequency_number( 26 , 0);
               for ( int i =0 ; i < n ; i++){
                      frequency_number[s[i] - 'a']++;

               }

                  int count_odd=0;
                    for ( int  j =0 ; j < 26; j++){
                              count_odd += ( frequency_number[j] % 2);

                    }

                    if ( count_odd > k +1){
                          cout<<"NO"<<endl;
                    }
                    else{
                      cout<<"YES"<<endl;
                    }
         }
         return 0;
  }