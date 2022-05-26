#include <iostream>
int main() {
    int n, m; std::cin >> n;
    int a[n]; for (int i = 0; i < n; i++) std::cin >> a[i];
    std::cin >> m;
    while (m--) {
        int x, y; std::cin >> x >> y;
        if (x == n && x == 1) {
            a[x-1] = 0;
            continue;
        }
        if (x == n) {
            a[x-2] += y - 1;
            a[x-1] = 0;
            continue;
        }
        if (x == 1) {
            a[x] += a[x-1] - y;
            a[x-1] = 0;
            continue;
        }
        a[x-2] += y - 1;
        a[x] += a[x-1] - y;
        a[x-1] = 0;
    }
    for (int i = 0; i < n; i++) std::cout << a[i] << "\n";
    return 0;
}
