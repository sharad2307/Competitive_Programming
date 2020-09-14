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

	ll n,a,x=0,r=0;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a;
		if(a==0 || x==a)
		{ 
			x=0;
			r++;
		}
		else
		{
			if(a==3)
			{
				if(x==2)
					x=1;
				else if(x==1)
					x=2;
			}
			else
				x=a;
		}
	}
	cout<<r;
	
	
}