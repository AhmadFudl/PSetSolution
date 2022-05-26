#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

#define put std::putchar
#define puti(x) printf("%d\n", x)
#define putl(x) printf("%ld\n", x)
#define putf(x) printf("%f\n", x)
#define putd(x) printf("%lf\n", x)
#define putll(x) printf("%lld\n", x)
#define putlf(x) printf("%Lf\n", x)
#define get std::getchar
#define endl '\n'
#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)

#define DEBUG

int main() {
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	ussio;
	using std::cin;
	using std::cout;
	using std::string;
	// TODO(Fudl): solve [ ]
	int t; cin >> t;
	while (t--) {
		int n, out = 0; cin >> n;
		int a[n], b[n];
		std::map<int, std::pair<std::vector<int>, std::vector<int> > > A;
		for (int i = 0; i < n; i++) cin >> a[i], A[a[i]].first.push_back(i);
		for (int i = 0; i < n; i++) cin >> b[i], A[b[i]].second.push_back(i);

		#ifdef DEBUG
		for (auto &j : A) {
			cout << j.first << endl;
			cout << '\t';
			for (int i = 0; i < j.second.first.size(); i++)
				cout << j.second.first[i] << " ";
			cout << endl;
			cout << '\t';
			for (int i = 0; i < j.second.second.size(); i++)
				cout << j.second.second[i] << " ";
			cout << endl;
		}
		#endif

		for (auto &i : A) {
			for (int j = 0; j < i.second.first.size(); j++) {
				for (int k = 0; k < i.second.second.size(); k++) {
					#ifdef DEBUG
					cout << b[i.second.first[j]] << " " <<  a[i.second.second[k]] << endl;
					cout << i.second.first[j] << " " <<  i.second.second[k] << endl;
					cout << endl;
					#endif
					if (i.second.first[j] < i.second.second[k] &&
							b[i.second.first[j]] == a[i.second.second[k]]) { out++; }
				}
			}
		}
		cout << out << endl;
		#ifdef DEBUG
		cout << "________________\n";
		#endif
	}
	return 0;
}
