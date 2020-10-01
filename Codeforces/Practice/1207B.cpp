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
	

	ll n,m,c=0;
	cin>>n>>m;
	vector<ll> v1,v2;
	ll a[n][m],b[n][m];
	memset(b, 0, sizeof(b[0][0]) * m * n);
	loop(i,0,n)
	loop(j,0,m)
	cin>>a[i][j];
	ll k=0;
	loop(i,0,n-1)
	loop(j,0,m-1)
	{
		if( a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 )
		{
			b[i][j]=1;
			b[i+1][j]=1;
			b[i][j+1]=1;
			b[i+1][j+1]=1;
			v1.push_back(i+1);
			v2.push_back(j+1);

		}
	}	

	loop(i,0,n)
	loop(j,0,m)
	if(a[i][j]!=b[i][j])
	{
		cout<<-1;
		// cout<<i+1<<" "<<j+1<<endl;
		return 0;
	}

	cout<<v1.size()<<endl;
	loop(i,0,v1.size())
	cout<<v1[i]<<" "<<v2[i]<<endl;
	

}