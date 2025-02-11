#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    // Pre-compute
    int hash[13] = {0}; // We can only create hash upto 10^7 if defined in main
                        // fn && if we define hash[] in global, it can go upto
                        // 10^8 . For more we use maps
    for (int i = 0; i < n; i++) {
      hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter query: ";
    cin >> q;
    while (q--) {
      int number;
      cin >> number;
      // fetch
      cout << hash[number] << endl;
    }
  }
}
