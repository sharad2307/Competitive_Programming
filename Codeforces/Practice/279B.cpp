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
	
	ll sum[100005]={0},i,r,c=0,n,total,x;
	cin>>n>>total;
	for(ll i=1;i<=n;i++)
	{
		cin>>x;
		sum[i]=sum[i-1]+x;
		if(sum[i]-sum[c]>total) c++;
		r=max((i-c),r);
		cout<<sum[i]<<" "<<sum[c]<<" "<<c<<endl;
	}
	// cout<<c;
}