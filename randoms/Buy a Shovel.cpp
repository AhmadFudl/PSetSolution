#include <cstdio>
#include <iostream>
int main() {
    int k, r; std::cin >> k >> r;
    int rem = k, ans = 1;
    while (rem % 10 != r && rem % 10 != 0) {
        rem += k;
        ans++;
    }
    std::cout << ans << "\n";
}
