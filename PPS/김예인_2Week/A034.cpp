#include <iostream>
using namespace std;

int arr[42] = {0,};

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  for (int i = 0; i < 10; i++) {
    int num;
    cin >> num;

    int idx = num % 42;
    arr[idx]++;
  }

  int count = 0;

  for (int i = 0; i < 42; i++) {
    if (arr[i] != 0) count++;
  }

  cout << count;

  return 0;
}