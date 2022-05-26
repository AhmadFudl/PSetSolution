void vec_sieve(int upperbound)
{
	vec_prime.resize(upperbound);
	oset(vec_prime);
	long long i = 2;
	vec_prime[0] = vec_prime[1] = 0;
	while (i * i <= upperbound)
	{
		if (vec_prime[i])
		{
			long long j = i*i;
			while (j <= upperbound)
			{
				vec_prime[j] = 0;
				j += i;
			}
		}
		i += 1;
	}
}

void bit_sieve(int upperbound)
{
	bit_prime.set();
	sieve_sz = upperbound;
	long long i = 2;
	bit_prime[0] = bit_prime[1] = 0;
	while (i * i <= upperbound)
	{
		if (bit_prime[i])
		{
			PRIMES.push_back(i);
			long long j = i*i;
			while (j <= upperbound)
			{
				bit_prime[j] = 0;
				j += i;
			}
		}
		i += 1;
	}
}

void fact_sieve(int upperbound)
{
	prime_factor.resize(upperbound);
	zset(prime_factor);
	long long i = 2;
	prime_factor[0] = prime_factor[1] = -1;
	while (i * i <= upperbound)
	{
		if (prime_factor[i])
		{
			long long j = i*i;
			while (j <= upperbound)
			{
				prime_factor[j] = i;
				j += i;
			}
		}
		i += 1;
	}
}

bool isprime(long long n)
{
	if (n <= sieve_sz) return bit_prime[n];
	for (auto &i : PRIMES) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void Divisors(long long n)
{
	long long i = 1;
	while (i * i < n)
	{
		if (n % i == 0)
		{
			DIVS.push_back(i);
			DIVS.push_back(n/i);
		}
		i += 1;
	}
	if (i*i == n) DIVS.push_back(i);
	std::sort(DIVS.begin(), DIVS.end());
}

void fast_prime_factorization(long long n)
{
	prime_factor.clear();
	if (n <= 1) return;
	n = prime_factor[n];
	while (prime_factor[n] != 0)
	{
		n = prime_factor[n];
		prime_factor.push_back(n);
	}
}

void prime_factorization(long long n)
{
	PRIMES.clear();
	long long i = 2;
	while (i <= n) {
		if (n % i == 0)
		{
			PRIMES.push_back(i);
			while (n % i == 0) n /= i;
		}
		i += 1;
	}
	sort(PRIMES.begin(), PRIMES.end());
}

void oset(std::vector<int> in)
{
	for (auto &i : in)
		i = 1;
}

void zset(std::vector<int> in)
{
	for (auto &i : in)
		i = 0;
}
