#include <cstdio>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

void swap(int &a, int &b);
void bubble_sort(int a[], int n);

int main() {
  int n; cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  bubble_sort(a, n);
  bubble_sort(b, n);
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      puts("no");
      return 0;
    }
  }
  puts("yes");
  return 0;
}

void bubble_sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j+1])
        swap(a[j], a[j+1]);
    }
  }
}

void swap(int &a, int &b) {
  a += b;
  b = a - b;
  a -= b;
}
