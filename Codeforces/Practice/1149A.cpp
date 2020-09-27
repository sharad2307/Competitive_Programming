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
	

	ll n,two=0,one=0;
	cin>>n;
	ll a[n];
	loop(i,0,n)cin>>a[i];
	loop(i,0,n)if(a[i]==2)two++;
	else one++;

	if(two==n)
		loop(i,0,n)cout<<2<<" ";
	else if(one==n)
		loop(i,0,n)cout<<1<<" ";
	else
	{
		cout<<2<<" "<<1<<" ";
		for(ll i=0;i<two-1;i++)cout<<2<<" ";
		for(ll i=0;i<one-1;i++)cout<<1<<" ";
	}
	

}