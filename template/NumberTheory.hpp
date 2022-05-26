#include <vector>
#include <algorithm>
#include <bitset>

std::vector<int> vec_prime, DIVS, prime_factor, PRIMES;
std::bitset<10000001> bit_prime; // biggest prime 9,999,991
long long sieve_sz = 0;

void vec_sieve(int upperbound); // Values are stored in vec_prime
void bit_sieve(int upperbound); // Values are stored in bit_prime
void fact_sieve(int upperbound); // Values are stored in prime_factor
void fast_prime_factorization(long long n); // Values are stored in PRIMES 
void prime_factorization(long long n); // Values are stored in PRIMES
void Divisors(long long n); // Values are stored in DIVS
bool isprime(long long n);
void oset(std::vector<int> in);
void zset(std::vector<int> in);

// END OF NUM_THEORY_HEADERS
