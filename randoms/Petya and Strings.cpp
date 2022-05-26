#include <iostream>
#include <string>
int main() {
    std::string first, second;
    std::cin >> first >> second;
    for (int i = 0; i < first.size(); i++) {
        if (tolower(first[i]) - tolower(second[i])) {
            std::cout << ((tolower(first[i]) - tolower(second[i])) > 0 ? "1\n" : "-1\n");
            return 0;
        }
    }
    std::cout << "0\n";
    return 0;
}
