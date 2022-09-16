// C++ code for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to implement sieve of eratosthenes
void sieve(int n, vector<bool>& prime)
{
	prime[1] = false;
	prime[0] = false;
	for (int i = 2; i * i <= n; i++) {
		if (prime[i]) {
			for (int p = i * i; p <= n; p += i) {
				prime[p] = false;
			}
		}
	}
}

// Function to find the maximum subarray sum
// having prime length
int primeLenSum(int a[], int N)
{
	vector<bool> prime(N + 1, true);
	sieve(N, prime);
	int max_ending_here = 0;
	int max_for_primes = 0, sz = 0;

	// Finding prime length subarray
	// with maximum sum
	for (int i = 0; i < N; i++) {
		max_ending_here += a[i];
		sz = sz + 1;
		if (max_ending_here < 0) {
			max_ending_here = 0;
			sz = 0;
		}

		if (max_ending_here > max_for_primes && prime[sz])
			max_for_primes = max_ending_here;
	}
	return max_for_primes;
}

// Driver code
int main()
{
	int arr[] = { 2, -1, 3, -2, 1, -1 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << primeLenSum(arr, N);
	return 0;
}
