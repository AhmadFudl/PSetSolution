#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

void swap(int &a, int &b);
void merge_sort(int a[], int n);
void selection_sort(int a[], int n);
void bubble_sort(int a[], int n);

int main() {
  int n; cin >> n;
  int buffer[n];
  for (int i = 0; i < n; i++)
    cin >> buffer[i];
  //selection_sort(buffer, n);
  bubble_sort(buffer, n);
  for (int i = 0; i < n - 1; i++)
    cout << buffer[i] << ' ';
  cout << buffer[n-1] << std::endl;
  return 0;
}

void merge_sort(int a[], int n) {

}

void selection_sort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int idx, min = INT_MAX;
    for (int j = i; j < n; j++) {
      if (a[j] < min) {
        idx = j;
        min = a[j];
      }
    }
    swap(a[i], a[idx]);
  }
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
  int temp = a;
  a = b;
  b = temp;
}
