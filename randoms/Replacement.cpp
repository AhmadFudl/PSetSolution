#include <iostream>
int main()
{
    int n; std::cin >> n;
    while (n--) {
        int temp; std::cin >> temp;
        if (temp)
            std::cout << (temp > 0 ? "1" : "2") << " ";
        else
            std::cout << temp << " ";
    }
    std::cout << "\n";
    return 0;
}
