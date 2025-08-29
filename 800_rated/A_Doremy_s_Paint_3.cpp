#include<bits/stdc++.h>
    using namespace std;
  #include<map>
       int main(){
            int  t;
              cin >> t;
                  while ( t--){
                         int n;
                         cin>>n;
                          long long a[n];
                          for(int i=0; i<n ; i++){
                                 cin >>a[i];
                          }
                         map<long long , long long >frequency_map;
                         for( int i =0 ; i <  n ; i++){
                                   frequency_map[a[i]]++;
                         }

                         if( frequency_map.size() >= 3){
                              cout<<"No"<<endl;
                         }
                         else
                         {
                           long long freq1 = frequency_map.begin()->second;
                           long long freq2 = frequency_map.rbegin()->second;

                           if(freq1 == freq2){
                                cout << "Yes"<<endl;

                           }
                           else if ( n % 2 == 1 && abs(freq1 - freq2) == 1){
                                cout << "Yes"<<endl;
                           }
                              else{
                                 cout <<"No"<<endl;
                              }
                          }
                  }
                  return 0;
       }