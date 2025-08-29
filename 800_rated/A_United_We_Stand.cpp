#include<bits/stdc++.h>
using namespace std;
#include<vector>
 int main(){
        int t;
        cin>>t;
         while( t--){
            int n;
            cin >>n;
            vector<int>arr(n);
            for( int i=0 ; i < n ; i++){
                    cin>>arr[i];
            }

            vector<long long >b , c;
                int max =*max_element(arr.begin() , arr.end());
            for( int i =0; i < n; i++){
                   if( arr[i] != max){
                       b.push_back(arr[i]);
                   }
                   else{
                       c.push_back(arr[i]);
                   }
            }

            if ( b.size() ==  0){
                   cout <<-1 << endl;
            }
            else{
                 cout<< b.size() << " "  << c.size() << endl;

            for( auto  it : b)
                   cout << it <<" ";
                    cout<<endl;
           
            for( auto it : c)
               cout << it << " ";
                cout<<endl;
            }

            }
            
            return 0;

 }