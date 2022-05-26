#include <iostream>
#include <vector>
int main() {
    int t; std::cin >> t;
    while (t--) {
        int a, b; std::cin >> a >> b;
        int ans = 0;
        for (int i = 1; i < a; i++) {
            ans ^= i;
        }
        int temp = a;
        while (ans != b) {
             temp++;
             ans ^= temp;
        }
        std::cout << a + 1 + temp - (a + 1) << std::endl;
        // for (int i = 0; i <= a; i++) {
        //     std::cout << i;
        //}
        // if (temp != b) std::cout << temp;
        // std::cout << "\n";
    }
}
