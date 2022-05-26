#include <iostream>
int main()
{
    int n; std::cin >> n; n--;
    int prev, ans = 1; std::cin >> prev;
    while (n--) {
        int temp; std::cin >> temp;
        if (temp < prev) {
            prev = temp;
            ans = 1;
        }
        else {
            if (temp == prev)
                ans++;
        }
    }
    std::cout << (ans % 2 == 0 ? "Unlucky" : "Lucky")  << "\n";
    return 0;
}
