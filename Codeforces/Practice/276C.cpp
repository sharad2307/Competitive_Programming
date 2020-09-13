#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

ll a[200001],d[200001],n,i,q,l,r;
unsigned long long m;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin>>n>>q;
	for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
	for(i=0;i<q;i++)
	{
		cin>>l>>r;
		d[l-1]++;
		d[r]--;
	}
	for(i=1;i<n;i++)d[i]+=d[i-1];
		sort(d,d+n);
	
	for(i=0;i<n;i++)m+=a[i]*d[i];
		cout<<m;
	
}