#include <iostream>
int main() {
    int n, h, num, ans = 0;
    std::cin >> n >> h;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        if (num > h)
            ans += 2;
        else
            ans++;
    }
    std::cout << ans << "\n";
}
