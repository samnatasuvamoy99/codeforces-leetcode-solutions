#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
 // applying gcd..
 // apporach ---> when see diff calculation or divisible  term  and divi thing GCD

int main(){
        int t;
        cin>>t;
        while( t--){
                int n;
                cin >>n;
           vector<int>arr(n);
                for( int i =0 ; i < n ; i++){
                       cin>>arr[i];
                }
                
               int k = arr[0] - 1;
                for( int i =1; i < n;i++){
                      k = __gcd(k , abs(arr[i] -( i+1)));
                }
                cout<<k<<endl;

        }
        return 0;
}
