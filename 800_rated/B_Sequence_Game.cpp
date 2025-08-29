#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main (){
  
        long long t;
        cin>>t;
         while ( t--){
                int n;
                cin>>n;
                   vector<int>b(n) ,a;
                  for( int i =0 ; i < n ; i++ ){
                          cin >>b[i];
                  }
            
                   a.push_back(b[0]);
                 for( int j =1 ; j <n ; j++){

                       if ( b[j] >= b[j-1]){
                           a.push_back(b[j]);
                       }
                       else{
                            a.push_back(b[j]);
                            a.push_back(b[j]);
                       }
                 }

                 cout<<a.size() << "\n";
                 for(auto it : a){
                     cout<<it<<" ";
                    
                 }
               cout<<"\n";
                
                 
         }

         return 0;
}