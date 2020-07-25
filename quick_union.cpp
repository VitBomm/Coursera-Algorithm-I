#include <bits/stdc++.h>
using namespace std;
int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 ,8 ,9 };
int test[9][2] = {{4, 3}, {3, 8}, {6, 5}, {9, 4}, {2, 1}, {8, 9}, {5, 0}, {7, 2}, {6, 1}};


int root(int i) {
  while( i!= arr[i])
    i = arr[i];
  return i;
}

void union_func(int p, int q) {
  int i = root(p);
  int j = root(q);
  arr[i] = j;
}

bool connected(int p, int q) {
  return root(p) == root(q);
}

int main() {
  for (int i = 0; i < 9; i++) {
    if (!connected(test[i][0], test[i][1]))
    {
      union_func(test[i][0], test[i][1]);
    }
  }
  for (int i=0; i< 10; i++) {
    cout<<arr[i]<<endl;
  }
  return 0;
}
