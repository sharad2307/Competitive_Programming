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
	
	testcases
	{
		ll n,i,row;
		string s[2];
		row=0;
		cin>>n;
		cin>>s[0]>>s[1];
		for(i=0;i<n;i++)
		{
			if(s[row][i]>'2')
			{
				row=1-row;
				if(s[row][i]<='2')
					break;
			}
		}
		if(row==0 || i!=n)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	
}