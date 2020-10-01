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
		
		ll n,sum=0,flag=0,c=0,maxn=0;
		cin>>n;
		ll a[n];
		loop(i,0,n)
		{
			cin>>a[i];
			sum+=a[i];
			maxn=max(maxn,a[i]);
		}
		if(sum%2==1 || sum-maxn<maxn)cout<<"NO";
		else cout<<"YES";

	}