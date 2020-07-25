#include <bits/stdc++.h>
using namespace std;

int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 ,8 ,9 };
int test[9][2] = {{4, 3}, {3, 8}, {6, 5}, {9, 4}, {2, 1}, {8, 9}, {5, 0}, {7, 2}, {6, 1}};

void union_func(int p, int q) {
  int pid = arr[p];
  int qid = arr[q];
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i< arr_size; i++) {
    if (arr[i] == pid)
      arr[i] = qid;
  }
}

bool connected(int p, int q) {
  return arr[p] == arr[q];
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

