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
	
	ll n,k;
	cin>>n>>k;
	ll a[k],sum=k;
	fill(a,a+k,1);
	for (ll i=k-1;i>=0;i--) 
	{
		while(sum+a[i]<=n) 
        {
			sum+=a[i];
			a[i]*= 2;
		}
	}
	if (sum!=n)
		cout<<"NO"<<endl;
	else 
	{
		cout<<"YES"<<endl;
		for (ll i=0;i<k;i++)
			cout<<a[i]<<" ";
	}
}