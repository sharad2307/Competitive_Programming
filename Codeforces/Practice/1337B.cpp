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
		ll x,n,m,c=0;
		cin>>x>>n>>m;
		
		ll z=x;
		loop(i,0,n)
		x=(floor(x/2)+10);

		loop(i,0,m)
		x=x-10;

		if(x<=0)c=1;

		loop(i,0,m)
		z=z-10;
		if(z<=0)c=1;

		loop(i,0,n)
		z=(floor(z/2)+10);

		if(z<=0)c=1;

		if(c==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	
}