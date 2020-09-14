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

	int i,j;
	char a[10][10];
	for(i=2;i<6;i++)
		for(j=2;j<6;j++)
			cin>>a[i][j];

	for(i=2;i<6;i++)
	{
		for(j=2;j<6;j++)
		{
			if((a[i][j]+a[i][j+1]+a[i][j+2])==('.'+'x'+'x'))
				{cout<<"YES"; return 0;}
			if((a[i][j]+a[i+1][j]+a[i+2][j])==('.'+'x'+'x'))
				{cout<<"YES"; return 0;}
			if((a[i][j]+a[i+1][j+1]+a[i+2][j+2])==('.'+'x'+'x'))
				{cout<<"YES"; return 0;}
			if((a[i][j]+a[i+1][j-1]+a[i+2][j-2])==('.'+'x'+'x'))
				{cout<<"YES"; return 0;}
		}
	}
	cout<<"NO";

}