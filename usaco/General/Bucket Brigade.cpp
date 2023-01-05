#include <cstdlib>
#include <vector>
#include <iostream>
#include <utility>
#define int long long
#define endl '\n'

using namespace std;

int ncows();

auto main() -> signed {

  char fg[10][10];
  pair<int, int> rock, lake, barn;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {

      cin >> fg[i][j]; 
      if      (fg[i][j] == 'R') rock = {i, j};
      else if (fg[i][j] == 'L') lake = {i, j};
      else if (fg[i][j] == 'B') barn = {i, j};

     }
  }

  int out;
  if (barn.first == lake.first && lake.first == rock.first
       && ((rock.second < barn.second && rock.second > lake.second)
            || (rock.second > barn.second && rock.second < lake.second)))
    out = 1 + abs(barn.second - lake.second);
  else if (barn.second == lake.second && lake.second == rock.second
            && ((rock.first < barn.first && rock.first > lake.first)
                 || (rock.first > barn.first && rock.first < lake.first)))
    out = 1 + abs(barn.first - lake.first);
  else
    out = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
  
  cout << out << endl;

  return EXIT_SUCCESS;
}
