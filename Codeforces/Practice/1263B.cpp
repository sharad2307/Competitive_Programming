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
	

	testcases
	{
		ll n;
		cin>>n;
		string a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll x=0;
		ll count=0;
		for(ll i=0;i<n-1;i++)
		{
			for(ll j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					if(a[i][0]=='9')
						a[i][0]='0';
					x=(x+1)%9;
					a[i][0]=a[i][0]+x;
					count++;
				}
			}
		}
		cout<<count<<endl;
		for(ll i=0;i<n;i++)
			cout<<a[i]<<endl;
	}	
	
}
