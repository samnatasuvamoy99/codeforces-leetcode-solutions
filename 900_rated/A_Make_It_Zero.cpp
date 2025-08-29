#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int totalXor = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalXor ^= arr[i];
        }

        if (totalXor == 0) {
                 cout << 1 << "\n";
            cout << 1 << " " << n << "\n";
        } else {
              cout << 4 << "\n";
            cout << 1 << " " << n << "\n";
                    cout << 1 << " " << 1 << "\n";
                   cout << 2 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
    }
    return 0;
}
