#include <climits>
#include <iostream>
#include <string>
#include <utility>
#include <cmath>
#include <algorithm>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define get std::getchar
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

inline bool isprime(const int&);
inline bool ispal(const int&);
inline int divs(const int&);

int main() {
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	int n, prime = 0, pal = 0, maxdivs, max = INT_MIN;
	cin >> n;
	int buffer[n];
	for (int i = 0; i < n; i++)
		cin >> buffer[i];
	std::pair<int, int> nx;
	nx.first = INT_MAX;
	nx.second = INT_MIN;
	for (int i = 0; i < n; i++) {
		ispal(buffer[i]) && pal++;
		isprime(buffer[i]) && prime++;
		int temp = divs(buffer[i]);
		// cout << buffer[i] << " " << temp << endl;
		if (max < temp) {
			maxdivs = buffer[i], max = temp;
		}
		if (max == temp && maxdivs < buffer[i])
			maxdivs = buffer[i];
		if (buffer[i] < nx.first) nx.first = buffer[i];
		if (buffer[i] > nx.second) nx.second = buffer[i];
	}
	cout << "The maximum number : " << nx.second << endl;
	cout << "The minimum number : " << nx.first << endl;
	cout << "The number of prime numbers : " << prime << endl;
	cout << "The number of palindrome numbers : " << pal << endl;
	cout << "The number that has the maximum number of divisors : " << maxdivs << endl;
	return 0;
}

inline bool isprime(const int &a) {
	if (a == 1) return false;
	int end = sqrt(a);
	for (int i = 2; i <= end; i++)
		if (a % i == 0)
			return false;
	return true;
}

inline bool ispal(const int &a) {
	std::string bits = std::to_string(a);
	for (int i = 0; i < bits.size() / 2; i++)
		if (bits[i] != bits[bits.size()-1-i])
			return false;
	return true;
}

inline int divs(const int &n) {
	int out = 0;
	for (int i = 1; i <= n; i++)
		n % i == 0 && out++;
	return out;
}
