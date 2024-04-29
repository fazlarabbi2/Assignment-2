#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ll long long int
#define test ll tc;cin >> tc; while(tc--)


int dp[10010];

int f(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	if (dp[n] != -1) return dp[n];
	return dp[n] = (f(n - 1) + f(n - 2));
}

int main()
{
	fast_io;

	cout << "This Program is for generating Fibonacci Number" << endl;
	for (ll i = 0; i < 1000; i++)dp[i] = -1;
	cout << f(10);
}
