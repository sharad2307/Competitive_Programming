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
	
	ll n,a,b;
	cin>>n>>a>>b;
	a--; 
	b--;
	ll ans=0;
	while(a!=b)
	{
		a/=2;
		b/=2;
		ans++;
		n/=2;
	}
	if(n==1)
		cout<<"Final!"<<endl;
	else 
		cout<<ans<<endl;
}