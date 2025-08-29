#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int present_occurence = 0;

    for (int j = 0; j < n; j++)
    {
      if (arr[j] == k)
      {
        present_occurence = 1;
        break;
      }
      else
      {
        present_occurence = 0;
      }
    }

    if (present_occurence == 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}