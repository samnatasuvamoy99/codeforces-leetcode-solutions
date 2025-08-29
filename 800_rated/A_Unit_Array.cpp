// steps simple odd and even count negative number present in the array element 
// then apply arg that code 

  
#include <bits/stdc++.h>
using namespace std;
#include<vector>

int main() {
      long long  t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long non_neg_num = 0, neg_num = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                neg_num++;
            } else {
                non_neg_num++;
            }
        }

             long long opt=0;
             while( non_neg_num  < neg_num || neg_num % 2 == 1){
                non_neg_num++;
                neg_num--;
                opt++;
           
              }

              cout<<opt<<endl;
          }
    return 0;
}

