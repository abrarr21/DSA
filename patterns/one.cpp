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

void printTwelve(int n) {
  int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << num << " ";
      num += 1;
    }
    cout << endl;
  }
}

void printThirteen(int n) {
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void printFourteen(int n) {
  for (int i = 0; i < n; i++) {
    for (char ab = 'A'; ab <= 'A' + (n - i - 1); ab++) {
      cout << ab << " ";
    }
    cout << endl;
  }
}

void printFifteen(int n) {
  for (int i = 0; i < n; i++) {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void printSixteen(int n) {
  for (int i = 0; i < n; i++) {
    // Space
    for (int j = 0; j <= (n - i - 1); j++) {
      cout << " ";
    }
    // Character
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << ch;
      if (j < breakpoint)
        ch++;
      else
        ch--;
    }
    // Space
    for (int j = 0; j <= (n - i - 1); j++) {
      cout << " ";
    }
    cout << endl;
  }
}

void printSeventeen(int n) {
  for (int i = 0; i < n; i++) {
    for (char ch = 'E' - i; ch <= 'E'; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void printEighteen(int n) {
  int initialNumber = 0;
  for (int i = 0; i < n; i++) {
    // Stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    // Space
    for (int j = 0; j < initialNumber; j++) {
      cout << "  ";
    }
    // Stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
    initialNumber = initialNumber + 2;
  }

  initialNumber = 2 * n - 2;
  for (int i = 0; i < n; i++) {
    // Stars
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    // Space
    for (int j = 0; j < initialNumber; j++) {
      cout << "  ";
    }
    // Stars
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    initialNumber = initialNumber - 2;
    cout << endl;
  }
}

int main() {
  int testcases;
  cin >> testcases;
  for (int i = 0; i < testcases; i++) {
    int n;
    cin >> n;
    printEighteen(n);
  }
}
