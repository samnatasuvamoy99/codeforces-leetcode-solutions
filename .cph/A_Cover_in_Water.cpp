#include<bits/stdc++.h>
 using namespace std;
 int main (){
       int t;
        cin >>t;
           while(t--){
            int n;
            cin >> n;
        string s;
        cin >> s;
    
              bool operation_one_is = false;
         int count_empty_cells=0;
         for( int i =0; i < n; i++){
                if ( s[i]== '.' && i + 2 < n && s[i+1]== '.' &&  s[i+2] == '.'){
                    operation_one_is=true;
                    break;
                }
                  if(s[i] == '.'){
                      count_empty_cells++;
                }
         }
        if( operation_one_is){
              cout<< 2 << endl;
         }
         else{
         cout<< count_empty_cells <<endl;
        }
      }
       
         return 0;
         
 }