#include <iostream>
int main()
{
    std::string s, t; std::cin >> s >> t;
    int pos = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[pos])
            pos++;
    } 
    std::cout << pos + 1 << "\n";
    return 0;
}
