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
		ll a[4*n];
		for(ll i=0;i<4*n;i++)
			cin>>a[i];
		sort(a,a+4*n);
		ll c=0;
		ll area = a[0]*a[4*n-1];
		for(ll i=0;i<4*n;i=i+2)
			if(a[i]*a[4*n-1-i] != area || a[i]!=a[i+1])
				c++;
			if(c > 0)
				cout<<"NO"<<endl;
			else 
				cout<<"YES"<<endl;
		}


	}