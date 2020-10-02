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
	
	testcases
	{
		int n,i,v,u;
		pair<int,int > a[1000];
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i].first>>a[i].second;
		sort(a,a+n);
		int x=0,y=0,f=0;
		string ans="";
		for(i=0;i<n;i++)
		{
			int u=a[i].first,v=a[i].second;
			if(v<y)
				{	f=1;
					cout<<"NO\n";
					break;
				}
				ans+=string(u-x,'R');
				ans+=string(v-y,'U');
				x=u;
				y=v;
			}
			if(!f)
				cout<<"YES\n"<<ans<<endl;
		}
		
		
	}