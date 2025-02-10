#include <bits/stdc++.h>
using namespace std;

// Print name n times using recursion
void printName(int i, int n) {
  if (i > n)
    return;
  cout << "Raja" << endl;
  printName(i + 1, n);
}

// Print number linearly 1 to n
void printNum(int i, int n) {
  if (i > n)
    return;
  cout << i << " ";
  printNum(i + 1, n);
}

// Print number linearly n to 1
void printRev(int i, int n) {
  if (i <= 0)
    return;
  cout << i << " ";
  printRev(i - 1, n);
}

// Print number 1 to n (backtrack)
void printBack(int i, int n) {
  if (i < 1)
    return;
  printBack(i - 1, n);
  cout << i << " ";
}

// Print number n to 1 (backtrack)
void p(int i, int n) {
  if (i > n)
    return;
  p(i + 1, n);
  cout << i << " ";
}

//---------------------------------------------------------------------------

// Print sum of n using recursion (there are 2 ways -> parameterized way and
// functional way)
int sumFunc(int n) {
  if (n == 0)
    return 0;
  return n + sumFunc(n - 1);
}

// Factorial
int fact(int n) {
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

// Reverse an array

void f(int i, int arr[], int n) {
  if (i >= n / 2)
    return;
  swap(arr[i], arr[n - i - 1]);
  f(i + 1, arr, n);
}

// check if string is palindrom
bool sp(int i, string &s) {
  if (i >= s.size() / 2)
    return true;
  if (s[i] != s[s.size() - i - 1])
    return false;
  return sp(i + 1, s);
}

// find the nth term of Fibonacci number
int fib(int n) {
  if (n <= 1)
    return n;
  int last = fib(n - 1);
  int slast = fib(n - 2);
  return last + slast;
}
int main() {
  // printName(1, 5);
  // printNum(1, 7);
  // cout << endl;
  // printRev(5, 5);
  // cout << endl;
  // printBack(5, 5);
  // cout << endl;
  // p(1, 8);
  // cout << sumFunc(5) << endl;
  // cout << fact(3) << endl;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  f(0, arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  string s = "madam";
  cout << sp(0, s);

  cout << endl;
  cout << fib(5);
  return 0;
}
