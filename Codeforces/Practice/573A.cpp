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
	
	ll n, p,q;
	bool b=true;
	cin>>n;
	q=0;
	while(n--)
	{
		cin>>p;
		while(p%2==0) p/=2;
		while(p%3==0) p/=3;
		if (q!=0 && p!=q) b=false;
		q=p;
	}
	if(b == true) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}