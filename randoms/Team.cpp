#include <iostream>
int main() {
    int n, ans = 0, temp, output = 0; std::cin >> n;
    for (int i = 0; i < n; i++) {
        ans = 0;
        std::cin >> temp; ans += temp;
        std::cin >> temp; ans += temp;
        std::cin >> temp; ans += temp;
        if (ans >= 2)
            output++;
    }
    std::cout << output << "\n";
}
