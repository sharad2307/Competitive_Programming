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
		ll n;cin>>n;
		ll x,y,max1=0,max2=0,c=0;
		
			loop(i,0,n)
			{
				cin>>x>>y;
			// sum1+=x;
			// sum2+=y;
				if(x<max1 || y<max2 || x<y) c=1;
				if(x-max1<y-max2) c=1;
				max1=x;
				max2=y;
			}
		
		if(c==1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	
}