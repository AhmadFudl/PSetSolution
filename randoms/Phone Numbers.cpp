#include <algorithm>
#include <climits>
#include <iostream>
#include <utility>
#include <vector>

struct data {
  std::string name;
  int taxi, pizza, girls;
};

int main() {
  int n; std::cin >> n;
  std::vector< data > buffer(n);
  int pizza_max, taxi_max, girls_max;
  pizza_max = taxi_max = girls_max = 0;
  for (int i = 0; i < n; i++) {
    int temp; std::cin >> temp >> buffer[i].name;
    buffer[i].girls = buffer[i].taxi = buffer[i].pizza = 0;
    while (temp--) {
      char lol;
      int a, b, c; std::cin >> a >> lol >> b >> lol >> c;
      if ((a/10) == (a%10) && (a/10) == (b/10) && (a/10) == (b%10) && (a/10) == (c/10) && (a/10) == (c%10)) {
        buffer[i].taxi++;
        if (buffer[i].taxi > taxi_max) taxi_max = buffer[i].taxi;
        continue;
      }
      if ((a/10) > (a%10) && (a%10) > (b/10) && (b/10) > (b%10) && (b%10) > (c/10) && (c/10) > (c%10)) {
        buffer[i].pizza++;
        if (buffer[i].pizza > pizza_max) pizza_max = buffer[i].pizza;
        continue;
      }
      buffer[i].girls++;
      if (buffer[i].girls > girls_max) girls_max = buffer[i].girls;
    }
  }
  std::cout << "If you want to call a taxi, you should call:";
  bool pass = true;
  for (int i = 0; i < n; i++) {
    if (buffer[i].taxi == taxi_max) {
      if (pass) {
        std::cout << " " << buffer[i].name;
        pass = false;
      }
      else {
        std::cout << ", " << buffer[i].name;
      }
    }
  }
  std::cout << ".\n";
  std::cout << "If you want to order a pizza, you should call:";
  pass = true;
  for (int i = 0; i < n; i++) {
    if (buffer[i].pizza == pizza_max) {
      if (pass) {
        std::cout << " " << buffer[i].name;
        pass = false;
      }
      else {
        std::cout << ", " << buffer[i].name;
      }
    }
  }
  std::cout << ".\n";
  std::cout << "If you want to go to a cafe with a wonderful girl, you should call:";
  pass = true;
  for (int i = 0; i < n; i++) {
    if (buffer[i].girls == girls_max) {
      if (pass) {
        std::cout << " " << buffer[i].name;
        pass = false;
      }
      else {
        std::cout << ", " << buffer[i].name;
      }
    }
  }
  std::cout << ".\n";
  return 0;
}
