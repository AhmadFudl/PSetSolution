#include <iostream>
int main() {
    int n; std::cin >> n;
    char matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> matrix[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (matrix[i][j] != matrix[0][0] || matrix[i][j] == matrix[0][1]) {
                    std::cout << "NO\n";
                    return 0;
                }
            }
            else {
                if (matrix[i][j] != matrix[0][1] || matrix[i][j] == matrix[0][0]) {
                    std::cout << "NO\n";
                    return 0;
                }
            }
        }
    std::cout << "YES\n";
    return 0;
}
