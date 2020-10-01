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
	
	ll n;
	cin>>n;
	ll a[2][n];
	loop(i,0,n)cin>>a[0][i];
	loop(i,0,n)cin>>a[1][i];
	for(ll i=1;i<n;i++)
	{
		a[0][i]=max(a[0][i-1],a[1][i-1]+a[0][i]);
		a[1][i]=max(a[1][i-1],a[0][i-1]+a[1][i]);
	}
	cout<<max(a[0][n-1],a[1][n-1]);
}