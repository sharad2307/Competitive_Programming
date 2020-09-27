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
	
	ll n,s=0;cin>>n;
	ll a[n];
	loop(i,0,n)cin>>a[i],s+=a[i];
	ll ans=s;
	sort(a,a+n);
	for (ll i=0;i<n;i++)
		for (ll j=1;j<=a[i];j++)
			if (a[i]%j==0)
				ans=min(ans,s-a[i]+a[i]/j-a[0]+a[0]*j);
	cout<<ans;

}