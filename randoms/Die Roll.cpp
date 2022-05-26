#include <algorithm>
#include <iostream>
int main() {
    int a, b; std::cin >> a >> b;
    int Max = std::max(a, b);
    int Min = 6 - Max + 1; 
    Max = 6;
    std::cout << Min / std::__algo_gcd(Max, Min) << "/";
    std::cout << Max / std::__algo_gcd(Max, Min) << "\n";
    return 0;
}
