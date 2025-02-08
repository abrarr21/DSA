#include <bits/stdc++.h>
#include <deque>
#include <queue>
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

void explainVector() {
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2); // emblem is more faster than push_back

  vector<pair<int, int>> vec;
  vec.push_back({1, 3});
  vec.emplace_back(2, 3);

  vector<int> p(5, 100); // a container of size 5 filled with 100 -> {100, 100,
                         // 100, 100, 100}
  vector<int> p1(
      5); // a container vector of size 5 filled with 0 or garbage values.
  vector<int> p2(p); // p2 will contain all the value of p -> basically p2
                     // copied all the value of p.

  // how to access
  vector<int>::iterator t =
      v.begin(); // t will point to the address of v.begin means the first value
                 // address of v container.
  cout << *(t) << endl;
  vector<int>::iterator e =
      v.end(); // e will point to the end+1 value of v container.

  cout << v[0] << endl;    // 1 way of accessing the element of v.
  cout << v.at(0) << endl; // 2 way of accessing the element of v.

  for (vector<int>::iterator m = v.begin(); m != v.end(); m++) {
    cout << *m << " " << endl;
  } // Iterate through whole vector and print the value.

  for (auto m = v.begin(); m != v.end(); m++) {
    cout << *m << " " << endl;
  } // Same loop as above. It just saves us the effort to write
    // vector<int>::iterator over and over.

  for (auto m : v) {
    cout << m << " " << endl;
  }

  vector<int> v3;
  v3.erase(v3.begin() + 1);
  v3.erase(v3.begin() + 2, v3.begin() + 4); //{1,2,3,4,5} -> 3,4 will be deleted

  // Insertion function
  vector<int> n(2, 100);          //{100,100}
  n.insert(n.begin(), 300);       //{300, 100, 100}
  n.insert(n.begin() + 1, 2, 20); //{300, 20, 20, 100, 100}

  cout << "The size of the vector n: " << n.size() << endl;

  n.pop_back();

  n.swap(v); // n->{1,2} v={3,4} will be swap to n->{3,4} v->{1,2}
  n.clear(); // Erases the entire vector
}

void explainList() {
  list<int> ls;
  ls.push_back(2);    //{2}
  ls.emplace_back(3); //{2,3}

  ls.push_front(5); //{5,2,3}

  // All the function of vector is same in list (begin, end, insert, erase,
  // size, swap)
}

void explainDeque() {
  deque<int> dq;
  dq.push_front(1);
  dq.emplace_front(2);

  dq.push_back(3);
  dq.emplace_back(4);

  dq.pop_back();
  dq.pop_front();
}

void explainStack() {
  stack<int> st;
  st.push(1);    //{1}
  st.push(2);    //{2,1}
  st.push(3);    //{3,2,1}
  st.push(4);    //{4,3,2,1}
  st.emplace(5); //{5,4,3,2,1}

  cout << st.top()
       << endl; // 5 is at the top of the stack therefore 5 will be printed.

  cout << st.size() << endl;
  cout << st.empty() << endl;

  stack<int> st1, st2;
  st1.swap(st2);
}

void explainPriorityQue() {
  // In priority que -> the greater value is always at the top and any value
  // inserted will be positioned dynamically. for example 5 in inserted in a
  // que-> {2,3,4,6,7}. the position of the 5 will be between 4,6
  priority_queue<int> pq;
  pq.push(5); //{5}
  pq.push(2); //{5,2}
  pq.push(8); //{5,2,8}
  pq.emplace(10);

  cout << pq.top(); // prints 10
  pq.pop();         // 10 will be popped cuz 10 is greater in the priority que
  cout << pq.top(); // prints 8
}

void explainMap() {
  map<int, int> m;
  map<int, pair<int, int>> m1; // Single key will point to 2 values
  map<pair<int, int>, int> m2; // Two unique key will have same value

  m[1] = 2; //{1,2}
  m.insert({4, 5});

  for (auto it : m) {
    cout << it.first << " " << it.second << endl;
  }
}
int main() {
  explainPair();
  explainVector();
  explainList();
  explainDeque();
  explainStack();
  explainPriorityQue();
}
