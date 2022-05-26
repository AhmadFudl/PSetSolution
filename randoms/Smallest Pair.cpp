#include <climits>
#include <iostream>
int main()
{
    int t; std::cin >> t;
    while (t--) 
    {
        int n; std::cin >> n;
        int buffer[n]; 
        for (int i = 0; i < n; i++)
            std::cin >> buffer[i];
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++) {
                if (buffer[i] + buffer[j] + (j+1) - (i+1) < min) {
                    min = buffer[i] + buffer[j] + (j+1) - (i+1); 
                }
            }
        std::cout << min << "\n";
    }
    return 0;
}
