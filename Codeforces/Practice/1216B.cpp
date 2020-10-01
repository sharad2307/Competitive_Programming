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
	

	ll n,x=0,sum=0;
	cin>>n;
	pair<int,int> a[1010];
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}

	sort(a,a+n+1);
	for(int i=n;i>0;i--)
	{
		sum+=a[i].first*x+1;
		x++;
	}
	cout<<sum<<endl;
	for(int i=n;i>0;i--)
		cout<<a[i].second<<" ";

	
}