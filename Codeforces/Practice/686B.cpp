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
	ll a[n];
	loop(i,0,n)cin>>a[i];
	for (ll i=0; i<n; i++)
	{
		for (ll j=1; j<n; j++)
			if (a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
				cout<<j<<" "<<j+1<<endl;
			}
	}
		// loop(i,0,n)cout<<a[i];
}