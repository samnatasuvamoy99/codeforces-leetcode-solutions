#include<bits/stdc++.h>
using namespace std;

int main(){
          int t;
          cin  >>t;
          while(t--){
                  int n;
                  cin>>n;
                string s;
                cin>>s;
                  
                long long counter =1;
                long long ans =1;
                for( int i =1; i <n ; i++){
                         if ( s[i] == s[i-1]){
                                counter +=1;;
                                ans=max(ans , counter);
                         }else{
                                counter=1;
                         }
                }
                cout<<ans+1<<"\n";
          }
          return 0;
}