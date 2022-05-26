#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>

#define put std::putchar
#define get std::getchar
using std::cin;
using std::cout;

long long fact(long long a);
long long C(long long a);

int main() {
  long long n, temp, sum; cin >> n;
  long long a[n];
  long long freq[1000001];
  long long min = 1000001, max = 0, counter = 0;
  for (long long i = 0; i < 1000001; i++)
    freq[i] = 0;
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
    freq[a[i]]++;
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  sum = min + max;
  std::sort(a, a + n);
  for (long long i = 0; i < n; i++) {
    if (sum - a[i] >= a[i]) {
      if (sum - a[i] == a[i]) {
        //counter += (fact(freq[a[i]]) / fact(freq[a[i]]-2)) / 2;
        counter += C(freq[a[i]]) / 2;
        freq[a[i]] = 0;
      }
      else {
        counter += freq[a[i]] * freq[sum - a[i]];
        freq[a[i]] = freq[sum - a[i]] = 0;
      }
    }
    else {
      break;
    }
  }
  cout << counter << std::endl;
  return 0;
}

long long fact(long long a) {
  long long output = 1;
  for (long long i = 2; i <= a; i++)
    output *= i;
  return output;
}

long long C(long long a) {
  long long output = 1;
  for (int i = a-1; i <= a; i++) {
    output *= i;
  }
  return output;
}
