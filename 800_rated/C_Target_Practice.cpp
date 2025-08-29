#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      

        vector<vector<char>> arr(11, vector<char>( 11)); 
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                cin >> arr[i][j];
            }
        }

        long long points = 0;

        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
               if ( arr[i][j] == 'X'){
                    int ring = min(min(i, j), min(11 - i, 11 - j));

                     points += ring;
               }
            }
        }

        cout << points << "\n";
    }
    return 0;
}
