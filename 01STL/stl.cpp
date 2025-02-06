#include <bits/stdc++.h>
using namespace std;

void explainPair() {
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;

  pair<int, float> af = {2, 3.5};
  cout << af.second << endl;

  pair<int, pair<int, int>> q = {3, {4, 5}};
  cout << q.second.first << " " << q.second.first << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {7, 8}};
  cout << arr[1].second << endl;
}
int main() { explainPair(); }
