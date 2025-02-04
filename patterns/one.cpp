#include <iostream>
using namespace std;

void printOne(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void printTwo(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void printThree(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void printFour(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void printFive(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void printSix(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void printSeven(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << "  ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "* ";
    }
    for (int j = 0; j < n - i - 1; j++) {
      cout << "  ";
    }
    cout << endl;
  }
}

void printEight(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
      cout << "* ";
    }
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }
    cout << endl;
  }
}

void printNine(int n) {
  for (int i = 1; i < 2 * n - 1; i++) {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void printTen(int n) {
  int star = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      star = 1;
    else
      star = 0;

    for (int j = 0; j <= i; j++) {
      cout << star;
      star = 1 - star;
    }
    cout << endl;
  }
}

void printEleven(int n) {
  int space = 2 * (n - 1);
  for (int i = 1; i <= n; i++) {
    // Numbers
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    // space
    for (int j = 1; j <= space; j++) {
      cout << "  ";
    }
    // Inverted-Number
    for (int j = i; j >= 1; j--) {
      cout << j << " ";
    }
    cout << endl;
    space -= 2;
  }
}
int main() {
  int testcases;
  cin >> testcases;
  for (int i = 0; i < testcases; i++) {
    int n;
    cin >> n;
    printEleven(n);
  }
}
