#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

ll n,i,p,ans,k;
pair <ll,ll> a[1000000];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i].first>>a[i].second;
	sort(a+1,a+1+n);
	for(i=1;i<=n;i++)
	{
		if(k<=a[i].second)k=a[i].second;
		else k=a[i].first;
	}
	cout<<k;
	
}