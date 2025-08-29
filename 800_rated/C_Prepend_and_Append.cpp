#include<bits/stdc++.h>
using namespace std;

int main(){

       long long t;
       cin>>t;
          while(t--){
            long long  n;
            cin>>n;

               string s;
                cin >>s;
               long long ans=n;
            long long i=0;
            long long j=n-1;

            while(i<=j){
                    if ( s[i] != s[j]){
                        ans= ans-2;
                    }
                    else{
                          break;
                    }
                 
                    i++;
                    j--;
            }
            cout<<ans<<"\n";
}
return 0;
}