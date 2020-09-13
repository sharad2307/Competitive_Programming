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
	
	string s;
	cin>>s;
	ll c=0,first;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='A' && s[i+1]=='B' && c==0)
			c++,first=i+1;
		if(i!=first && s[i]=='B' && s[i+1]=='A' && c>=1)
			{
				cout<<"YES"<<endl;
				return 0;
			}
	}	
	c=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='B' && s[i+1]=='A' && c==0)
			c++,first=i+1;
		if(i!=first && s[i]=='A' && s[i+1]=='B' && c>=1)
			{
					// cout<<c;

				cout<<"YES"<<endl;
				return 0;
			}
	}	

	cout<<"NO";
}