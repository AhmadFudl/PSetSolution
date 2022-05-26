#include <cstdio>
#include <iostream>
#include <utility>
#include <cmath>
#include <map>
#include <set>

#define put std::putchar
#define ln 1000001

using namespace std;

int main() {
	freopen("in.io", "r" , stdin);
	int n;
	cin >> n;
	int buffer[n], f[ln] = {0};
	for (int i = 0; i < n; i++)
		cin >> buffer[i], f[buffer[i]]++;
	map<int, set< pair<int, int> > > in;
	int end;
	for (int i = 0; i < n; i++) {
		int j/*, e = sqrt(buffer[i])*/;
		for (j = 1; j <= buffer[i]; j++) {
			if (!(buffer[i] % j)) {
				in[j].insert(make_pair(i, 0));
			}
		}
	}
	for (auto &i : in) {
		cout << i.first << " : ";
		for (auto &j : i.second) {
			cout << j.first << " ";
		}
		cout << endl;
	}
	int out = 0;
	for (auto &j : in[1]) {
		pair<int, int> temp = j;
		temp.second = 1;
		in[1].erase(j);
		in[1].insert(temp);
		out++;
	}
	cout << "1 : ";
	for (auto &i : in[1])
		cout << i.second << " ";
	cout << endl;
	int b = 1;
	for (auto &i : in) {
		if (i.first == 1) {
			continue;
		}
		cout << i.first << " : ";
		for (auto &j : i.second) {
			pair<int, int> temp = j;
			//puts("here");
			auto it = in[i.first-1].find(j);
			for (auto jt = in[i.first-1].begin(); jt != it; jt++)
				temp.second += it->second;
			cout << temp.second << " ";
			out += temp.second;
			//puts("here");
			i.second.erase(j);
			//puts("here");
			i.second.insert(temp);
			//puts("here");
		}
		cout << endl;
		b = i.first;
		if (in[b+1].empty()) break;
	}
	cout << out << endl;
  return 0;
}
//     1 1 1 1 1 1 1
// 1 = 0 1 2 3 4 5 6
//     0 1 3 4 6
// 2 = 0 1 3 4 6
//     8
// 3 = 5
//     8
// 4 = 6


