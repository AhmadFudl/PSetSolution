#include <iostream>
int main() {
    int value[4];
    std::cin >> value[0];
    std::cin >> value[1];
    std::cin >> value[2];
    std::cin >> value[3];
    std::string event; std::cin >> event;
    int ans = 0;
    for (int i = 0; i < event.size(); i++)
        ans += value[event[i] - 49];
    std::cout << ans << "\n";
    return 0;
}
