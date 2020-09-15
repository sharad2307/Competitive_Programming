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

	ll a[200000]={0}, b[200000]={0}, d1, d2, n;
	cin>>n;
	for(ll i=1; i<=n; i++) cin>>a[i];
		for(ll i=1; i<=n; i++)
		{
			for(ll j=i; j<=n; j++)
			{
				if(a[j]==0)
				{
					d1=j-i;
					break;
				}
			}
			for(ll g=i; g>=1; --g)
			{
				if(a[g]==0)
				{
					d2=i-g;
					break;}}
					b[i]=max(d1, d2);
				}
				for(ll i=1; i<=n; i++) cout<<b[i]<<" ";
					
			}