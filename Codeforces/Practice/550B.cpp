#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

ll a[20],i,n,l,r,x,ans=0;
ll func(ll k,ll sum)
{
	
	for (ll j=k+1; j<=n; j++)
	{
		if (sum+a[j]<=r)
			func(j,sum+a[j]);
	}
	if (a[k]-a[i]>=x && sum>=l && sum<=r && sum>a[i])
		ans++;

	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin>>n>>l>>r>>x;
	for (i=1; i<=n; i++) 
		cin>>a[i];
	sort(a+1,a+n+1);
	for (i=1; i<n; i++)
		func(i,a[i]);
	
	cout<<ans;
	
}