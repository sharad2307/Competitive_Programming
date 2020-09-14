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
	ll sum=0;
	ll n,x;
	cin>>n;
	ll r=10000000;
	loop(i,0,n)
	{
		cin>>x;
		if(x>0) sum+=x;
		if(abs(x)%2 == 1)r=min(r,abs(x));
	}
	if(sum%2==1) cout<<sum;
	else cout<<sum-r;

}