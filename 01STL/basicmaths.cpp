#include <bits/stdc++.h>
using namespace std;

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
}
