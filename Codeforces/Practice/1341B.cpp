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
	
	testcases
	{
		
		ll n,k,ans=0,peak=0,p;
		cin>>n>>k;
		ll a[n+2],b[n+2];
		for(ll i=1;i<=n;i++) cin>>a[i];
		for(ll i=2;i<n;i++) if(a[i]>a[i-1]&&a[i]>a[i+1]) b[i]=1; else b[i]=0;
		for(ll i=2;i<k;i++) if(b[i]) peak++;
		ans=peak,p=1;
		for(ll i=2;i<=n-k+1;i++)
		{
			if(b[i]) peak--;
			if(b[i+k-2]) peak++;
			if(peak>ans) ans=peak,p=i;
		}
		cout<<ans+1<<" "<<p<<endl;
	}
}