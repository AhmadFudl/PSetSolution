#include <iostream>
int main() {
    int n, ans = 0; std::cin >> n;
    char prev, current; std::cin >> prev;
    for (int i = 0; i < n-1; i++) {
        std::cin >> current;
        if (current == prev)
            ans++;
        prev = current;
    }
    std::cout << ans << "\n";
    return 0;
}
