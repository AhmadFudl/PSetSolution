#include <iostream>
#include <string>
int main() {
    bool character[256];
    int ans = 0;
    std::string name; std::cin >> name;
    std::memset(character, 0, sizeof(character));
    for (int i = 0; i < name.size(); i++)
        if (!character[name[i]]) {
            character[name[i]] = true;
            ans++;
        }
    std::cout << (ans % 2 == 0? "CHAT WITH HER!\n" :  "IGNORE HIM!\n"); 
    return 0;
}
