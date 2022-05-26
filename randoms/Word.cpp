#include <iostream>
#include <string>
int main() {
    std::string word; std::cin >> word;
    int ans = 0;
    for (int i = 0; i < word.size(); i++)
        if (isupper(word[i]))
            ans++;
        else
            ans--;
    if (ans > 0) {
        for (int i = 0; i < word.size(); i++)
            std::cout << (char)toupper(word[i]);
        std::cout << "\n";
        return 0;
    }
    for (int i = 0; i < word.size(); i++)
        std::cout << (char)tolower(word[i]);
    std::cout << "\n";
    return 0;
}
