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
	

	testcases
	{	
		ll x,n,ans;
		cin>>n>>x;
		ll a[n];
		loop(i,0,n)cin>>a[i];
		sort(a,a+n,dec());
		ll sum=0;
		ans=0;
		loop(i,0,n)
		{
			sum+=a[i];
			if (sum>=(i+1)*x)
				ans=i+1;
		}
		cout<<ans<<endl;
	}
}