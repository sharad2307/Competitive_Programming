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
	ll a,n;

	cin>>s; 
	s="00"+s; 
	n=s.size();

	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			for(ll k=j+1;k<n;k++)
			{
				a=(s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
				
				if(a%8==0){cout<<"YES"<<endl<<a; 
				return 0;
			}
		}

	}
}
cout<<"NO";
}

