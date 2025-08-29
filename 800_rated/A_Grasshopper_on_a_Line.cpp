#include<bits/stdc++.h>
 using namespace std;
 #include<vector>
  int main (){
        long long t;
        cin >> t;
         while( t--){
                 long long x , k;
                 cin >> x >> k;

                 if( x % k  !=0){
                        cout<<1<<"\n";
                        cout<<x<<endl;
                 }
                    
                 else{
                        cout<< 2 << endl;
                        cout<<(x-1) << " " << 1 << endl;
                 }
         }

         return 0;
  }