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
	
	ll x,y,c;
	cin>>x>>y;
	c=sqrt(x*x+y*y);
	if(c*c==x*x+y*y)
	{
		cout<<"black";
		return 0;
	}
	if(x*y<0)c++;
	if(c%2==0)cout<<"black";
	else cout<<"white";
	
}