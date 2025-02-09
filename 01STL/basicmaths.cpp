#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void countDivisors(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}

void countDivisor2(int n) {
  vector<int> ls;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ls.push_back(i);
      if ((n / i) != i) {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto it : ls)
    cout << it << " ";
}

int gcd(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  if (a == 0)
    return b;
  return a;
}

int main() {
  int n;
  cin >> n;
  int duplicate = n;
  int lastdigit, cnt = 0, reverseNum = 0, sumArmstrong = 0;

  while (n > 0) {
    lastdigit = n % 10;
    cnt += 1;
    sumArmstrong = sumArmstrong + (lastdigit * lastdigit * lastdigit);
    n = n / 10;

    reverseNum = reverseNum * 10 + lastdigit;
  }

  cout << "The number of digits in n: " << cnt << endl;
  cout << "The reverse of n is : " << reverseNum << endl;

  if (duplicate == reverseNum) {
    cout << "True: the number is palindrom" << endl;
  } else {
    cout << "False: the number is not palindrom" << endl;
  }

  if (duplicate == sumArmstrong) {
    cout << "True: the number is an Armstrong " << endl;
  } else {
    cout << "False: The number is not an Armstrong" << endl;
  }

  cout << "All the divisors of n: " << endl;
  countDivisors(36);
  countDivisor2(36);

  cout << "The gcd of the number: " << endl;
  gcd(20, 15);
}
