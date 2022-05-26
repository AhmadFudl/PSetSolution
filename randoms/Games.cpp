#include <iostream>
#include <algorithm>
#include <map>
int main() {
    int n; std::cin >> n;
    int home[n], temp, ans = 0;
    std::map<int, int> guest;
    for (int i = 0; i < n; i++) {
        std::cin >> home[i] >> temp;
        guest[temp]++;
    }
    for (int i = 0; i < n; i++)
        ans += guest[home[i]];
    std::cout << ans << "\n";
    return 0;
}
