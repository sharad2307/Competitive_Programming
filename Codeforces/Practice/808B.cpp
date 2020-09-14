#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	

	ll n,k;
	cin>>n>>k;

	ld a[n]={0};
	for(ll i=1; i<=n; i++)
	{
		cin >> a[i];
		a[i] += a[i-1];
	}
	ld ans=0;
	for(ll i=k; i<=n; i++){
		ans += (a[i] - a[i-k])/(n-k+1);
	}
	cout<<fixed<<setprecision(10)<<ans;
}