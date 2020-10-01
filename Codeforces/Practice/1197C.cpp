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
	ll a[n];
	loop(i,0,n)cin>>a[i];

	vector<ll> v;
	loop(i,1,n)v.push_back(a[i-1]-a[i]);
	sort(v.begin(),v.end());
	ll ans=0;
	ans+=a[n-1]-a[0];
	loop(i,0,k-1)ans+=v[i];
	cout<<ans;
}