#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<set>

int main(){
        long long dx[]={-1 , 1 , -1 , 1};
        long long dy[]={1 , 1, -1 , -1};
      long long t;
      cin>>t;
         
      while( t--){
           
             long long a , b;
              cin >> a >> b;

             long long x_king , y_king;
             cin>>x_king >> y_king;

             long long x_queen , y_queen;
              cin >> x_queen >> y_queen;


              set<pair<long long ,long long>>king_hits , queen_hits;

                for( int j =0 ; j < 4 ; j++){
                        king_hits.insert({x_king + dx[j] * a , y_king + dy[j] * b });
                        king_hits.insert({x_king + dx[j] * b , y_king + dy[j] * a});


                        queen_hits.insert({x_queen +dx[j] * a , y_queen +dy[j] * b });
                        queen_hits.insert({x_queen + dx[j] * b , y_queen + dy[j] * a});



                }
           
                  long long count =0;
                   for( auto  it : king_hits){
                            
                        if( queen_hits.find(it) != queen_hits.end()){
                           count++;
                        }
                   }

            cout<<count<<endl;

      }
    return 0;


}