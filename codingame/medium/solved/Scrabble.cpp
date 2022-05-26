#include <climits>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>

int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int frq[26];

struct word {
  std::string str;
  int val;
};

int computeVal(std::string);
bool compString(std::string);

int main() {
  using std::cin;
  using std::cout;
  int n, max = INT_MIN; cin >> n;
  word dic[n];
  std::string tiles, ans;
  for (int i = 0; i < n; i++) {
    cin >> dic[i].str;
    dic[i].val = computeVal(dic[i].str);
  }
  cin >> tiles;
  for (int i = 0; i < tiles.size(); i++)
    frq[tiles[i] - 'a']++;
  for (int i = 0; i < n; i++) {
    if (compString(dic[i].str)) {
      if (dic[i].val > max) {
        max = dic[i].val;
        ans = dic[i].str;
      }
    }
  }
  cout << ans << std::endl;
}

bool compString(std::string a) {
  int freq[26];
  for (int i = 0; i < 26; i++)
    freq[i] = 0;
  for (int i = 0; i < a.size(); i++)
    freq[a[i] - 'a']++;
  for (int i = 0; i < 26; i++) {
    if (freq[i] > frq[i])
      return false;
  }
  return true;
}

int computeVal(std::string a) {
  int val = 0;
  for (int i = 0; i < a.size(); i++) {
    val += values[a[i] - 'a'];
  }
  return val;
}
