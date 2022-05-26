#include <iostream>
#include <cmath>
int main() {
    char input;
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cin >> input;
            if (input == '1') {
                x = i; y = j;
            }
        }
    }
    std::cout << abs(x - 3) + abs(y - 3) << "\n";
}
