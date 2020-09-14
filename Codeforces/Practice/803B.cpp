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
	
	ll a[234567]={0} , ans[234567]={0};
	ll n;
	cin>>n;
	ans[0]=ans[n+1]=2e9;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)ans[i]=0;
		else ans[i]=ans[i-1]+1;
	}
	for(ll i=n;i>=1;--i)
	{
		if(a[i]==0)ans[i]=0;
		else ans[i]=min(ans[i],ans[i+1]+1);
	}
	for(ll i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	
	
}