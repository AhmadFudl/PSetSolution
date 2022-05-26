/*
* A work in progress template for CPC
*/

#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

#define ussio std::cin.tie(0), std::cin.sync_with_stdio(0)
#define endl '\n'
#define Multiple_Tests 1
#define Single_Test 0

void set(bool);
void prime_factorization(int n);
void Divisors(int n);
bool isprime(int n);
void sieve(bool isprime[], int n);

void process() // TODO: Find more appropriate name
{
	using namespace std;
	int n; cin >> n;
	bool isprime[n];
	std::memset(isprime, 1, sizeof(isprime));
	sieve(isprime, n-1);
	for (int i = 0; i < n; i++)
	{
		cout << i << " " << isprime[i] << endl;
	}
	return;
}

int main()
{
	ussio;
	#ifndef ONLINE_JUDGE
		freopen("in.io", "r", stdin);
	#endif
	set(Single_Test);
	return 0;
}

void sieve(bool isprime[], int n)
{
	int i = 2;
	isprime[0] = isprime[1] = false;
	while (i * i <= n)
	{
		if (isprime[i])
		{
			int j = i*i;
			while (j <= n)
			{
				isprime[j] = false;
				j += i;
			}
		}
		i += 1;
	}
}

bool isprime(int n)
{
	if (n == 1 || n == 0) return false;
	//if (n < 0) n *= -1;
	int i = 2;
	while (i*i <= n)
	{
		if (n % i == 0)
			return false;
		i += 1;
	}
	return true;
}

void Divisors(int n)
{
	int i = 1;
	std::vector<int> Divs;
	while (i * i < n)
	{
		if (n % i == 0)
		{
			Divs.push_back(i);
			Divs.push_back(n/i);
		}
		i += 1;
	}
	if (i*i == n) Divs.push_back(i);
	std::sort(Divs.begin(), Divs.end());
	for (auto &i : Divs)
		std::cout << i << " ";
	std::cout << endl;
}

void prime_factorization(int n)
{
	int i = 2;
	while (i <= n) {
		if (n % i == 0)
		{
			std::cout << i << " ";
			while (n % i == 0) n /= i;
		}
		i += 1;
	}
}

void set(bool test)
{
	if (test)
	{
		int t; std::cin >> t;
		while (t--) process();
	}
	else
		process();
}
