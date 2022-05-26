#include <iostream>
#include <string>
int main() {
    int n, ans = 1; std::cin >> n; n--;
    int prev, current; std::cin >> prev;
    while (n--) {
        std::cin >> current;
        if (current != prev)
            ans++;
        prev = current;
    }
    std::cout << ans << "\n";
    return 0;
}
