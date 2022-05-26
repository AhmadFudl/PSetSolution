#include <iostream>
int main() {
    int n; std::cin >> n;
    int ans = 0, free = 0;
    for (int i = 0; i < n; i++) {
        int temp; std::cin >> temp;
        if (temp >= 1) {
            free += temp;
            continue;
        }
        if ((free + temp >= 0))
            free--;
        else
            ans++;
    }
    std::cout << ans << "\n";
    return 0;
}
