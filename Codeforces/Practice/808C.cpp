#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	int n,w,a[100009],c[100009]={0};
	int p=0,q=0;
	pair<int,int> b[100009];
	cin>>n>>w;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		p+=a[i];
		c[i]=(a[i]+1)/2;
		q+=(a[i]+1)/2;
	}
	if(w<q || w>p) 
	{
		cout<<-1<<endl; 
		return 0;
	}
	for(int i=0; i<n; i++)
	{
		b[i].first=a[i];
		b[i].second=i;
	}
	sort(b,b+n);
	q=w-q;

	for(int i=n-1; i>=0; i--)
	{
		c[b[i].second]+=min(q,a[b[i].second]/2);
		q-=min(q,a[b[i].second]/2);
	}
	for(int i=0; i<n; i++)
		cout<<c[i]<<" ";
}