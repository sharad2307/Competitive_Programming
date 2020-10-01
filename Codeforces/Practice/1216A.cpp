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
	
	string s;
	ll c=0,n,m;
	cin>>n;
	cin>>s;
	for(ll i=0;i<n;i+=2)
		if(s[i]==s[i+1])
		{
			c++;
			s[i]='b';
			s[i+1]='a';
		}

		cout<<c<<endl;
		cout<<s;	
}