#include <iostream>
int main() {
    int n; std::cin >> n;
    int nums[n], ser = 0, dem = 0;
    bool pass = true;
    for (int i = 0; i < n; i++)
        std::cin >> nums[i];
    for (int i = 0, j = n - 1; i <= j; pass ^= 1) {
        if (pass) {
            if (nums[i] >= nums[j]) {
                ser += nums[i];
                i++;
            }
            else {
                ser += nums[j];
                j--;
            }
        } else {
            if (nums[i] >= nums[j]) {
                dem += nums[i];
                i++;
            }
            else {
                dem += nums[j];
                j--;
            }
        }
    }
    std::cout << ser << " " << dem << "\n";
    return 0;
}
