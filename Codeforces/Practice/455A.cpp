#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll a[100007], n;
	ll dp[100007];
	memset(a, 0, sizeof(a));
	cin >> n;
	loop(i,0,n) 
	{
		ll j;
		cin >> j;
		a[j]++;
	}
	dp[0] = 0;
	dp[1] = a[1]; 
	for (ll i = 2; i <= 100000; i++) 
	{
		dp[i] = max(dp[i - 1], dp[i - 2] + i*a[i]);
	}
	cout << dp[100000];
	
}