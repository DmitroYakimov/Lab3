#include <iostream>
using namespace std;

bool isLeap(int);
inline void line();

int main(void) {
  for (int yr = 1995; yr < 2017; yr++) {
    cout << yr;
    line();
    cout << isLeap(yr) << endl;
  }
  return 0;
}

bool isLeap(int year) { 
  if (year % 4 == 0) {
    return 1;
  }
  return 0;
}

inline void line() {
  cout << " -> ";
}