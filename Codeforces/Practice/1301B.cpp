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
		
		ll n;cin>>n;
		ll a[n],minn=INT_MAX,maxn=-1;
		loop(i,0,n)cin>>a[i];
		loop(i,0,n)
		{
			if(a[i]!=-1 && (i && a[i-1]==-1 || i+1<n && a[i+1]==-1))
			{
				minn=min(minn,a[i]);
				maxn=max(maxn,a[i]);
			}
		}
		ll k,ans=0;
		if(maxn==-1)k=0;
		else
			k=(minn+maxn)/2;

		loop(i,0,n)
		if(a[i]==-1)
			a[i]=k;

		loop(i,1,n)
		{
			ll z=abs(a[i]-a[i-1]);
			ans=max(z,ans);
		}
		
		cout<<ans<<" "<<k<<endl;



	}
}