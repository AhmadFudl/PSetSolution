/*
 _____________________________________
<          Welcome to WEEK 2          >
<          Programming loops          >
 -------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/

/*
Data types              bytes    MAX                        , MIN
                                                                 
short              -> 2 bytes =  32,767                     , -32,767
unsigned short     -> 2 bytes =  65,535                     , 0
int                -> 4 bytes =  2*10^9 = 2,147,483,647              , -2,147,483,647
unsigned int       -> 4 bytes =  4*10^9 = 4,294,967,295              , 0
long long          -> 8 bytes =  9*10^18 = 9,223,372,036,854,775,807  , -9,223,372,036,854,775,807
unsigned long long -> 8 bytes =  1*10&^19 =18,446,744,073,709,551,616 , 0
*/



// 10^8 operations == 1 second;

/*
Operator   Meaning                     Example
                                              
==         Equal to                    count == 10
!=         Not equal to                flag != DONE
<          Less than                   a < b
<=         Less than or equal to       low <= high
>          Greater than                pointer > endOfList
>=         Greater than or equal to    j >= 0
*/

/*
Program looping

--FOR--
for (init_expression; loop_condition; loop_expression)
  program statment (or statements)

--WHILE
while (expression)
  program statment (or statements)

init_expression;
while ( loop_condition ) {
  program statement (or statements) loop_expression;
}

--DO
do
  program statement (or statements)
while ( loop_expression );

init_expression;
do {
  program statement (or statements) loop_expression;
}
while ( loop_expression );

--BREAk
If a break is executed from within a set of nested loops,
only the innermost loop in which the break is executed is terminated.

break;

--CONTINUE
The continue statement is most often used to bypass a group of
statements inside a loop based upon some condition,
but to otherwise continue execution of the loop

continue;
*/


// NOTE prime numbers only have to divisors 1 and itslef that means it has two divisors
// so 1 is not a prime number as it only have one divisors
// 0 isn't as it can't be divided by itslef
// numbers that are prime between 1 100
// prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}

// NOTE palindrome is a string or number or sequence that if mirrored will be the same  
// aba is palindrome
// abceba is not 
// 121 is 1231 is not


#include <iostream>
#include <ctime>

#define put std::putchar
#define get std::getchar

using std::cin;
using std::cout;

int main() {
/*
1        #
2       # #
3      # # # 
4     # # # #
5    # # # # #
6   # # # # # #
7  # # # # # # #
8 # # # # # # # #
*/

// for loop example
// to print the ^ traingle

/*
  int height;
  cin >> height;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < height-i; j++) {
      cout << ' ';
    }
    for (int j = 0; j <= i; j++) {
      cout << '#' << ' ';
    }
    put('\n');
  }
*/


// program to reverse the digits of a number

/*
  int number, right_digit;
  cin >> number;
  while (number != 0) {
    right_digit = number % 10;
    cout << right_digit;
    number = number / 10;
  }
  cout << '\n';
*/

// program to reverse the digits of a number using do while 
// if you tried the enter 0 the digits nothing would happen
// that can be solved with do while loop

/*
  int number, right_digit;
  cin >> number;
  do {
    right_digit = number % 10;
    cout << right_digit;
    number = number / 10;
  }
  while (number != 0);
  cout << '\n';
*/

// example on printing the even number in a given range define by a, b
// inclusive that means that a and be are included in the range

/*
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (i % 2 == 0)
      cout << i << std::endl;
  }
*/
}
