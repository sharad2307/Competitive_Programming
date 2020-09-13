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
	
	ll n,x,k=0,a[1000010]={0},ans=0;
	char c;
	cin>>n;
	
	for(ll i=1;i<=n;i++)
	{
		cin>>c>>x;
		if(c=='+')
			a[x]++,k++;
		else
		{
			if(a[x]>0)k--;
			else ans++;
		}

		ans=max(ans,k);
	}
	cout<<ans;
	
}