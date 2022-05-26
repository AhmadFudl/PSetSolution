#include <iostream>
int main() {
    int n, b, d; std::cin >> n >> b >> d;
    int ans = 0, sum = 0;
    int a[n]; for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] <= b)
            sum += a[i];
        if (sum > d) {
            ans++;
            sum = 0;
        }
    }
    std::cout << ans << "\n";
    return 0;
}
