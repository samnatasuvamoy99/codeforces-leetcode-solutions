#include<bits/stdc++.h>
   using namespace std;

   int main(){
           long long t;
          cin>>t;
           while(t--){
                long long n , x;
                cin >> n >> x;
                vector<long long >gass_point;

                   gass_point.push_back(0);
                for( int i =0; i < n; i++){

                     long long point;

                      cin >> point;

                      gass_point.push_back(point);   
                }
                gass_point.push_back(x);

            sort(gass_point.begin(), gass_point.end());

                 long long  m = gass_point.size();

                     long long mini_gass_tank= 0;
                        
                         for ( int j =1; j < m ; j++){

                           long long result = ( gass_point[j] - gass_point[j-1]);

                             if ( j==m-1)
                                   result *=2;

                             mini_gass_tank =max(mini_gass_tank , result);  
                         }
                      cout<<mini_gass_tank <<endl;
           }
           return 0;
           
   }