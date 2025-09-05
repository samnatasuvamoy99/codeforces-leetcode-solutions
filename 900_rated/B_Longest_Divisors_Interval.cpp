#include<bits/stdc++.h>
using namespace std;

// if number divisible range 1 ->n-1
// lcm calculate then find the time complexity.............actually your time complexity working or not 
int main (){
         int  t;
         cin>>t;
         while(t--){
              long long n;
              cin >> n;

              long long i=1;
                  while( n % i == 0){
                       i++;
                  }
                  cout << i-1 <<"\n";
         }
         return 0;
}
