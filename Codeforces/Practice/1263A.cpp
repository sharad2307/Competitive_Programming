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
		ll a[3];
		loop(i,0,3)cin>>a[i];
		sort(a,a+3);
		ll z=a[0]+a[1];
		if(z<=a[2])cout<<z<<endl;
		else cout<<(z+a[2])/2<<endl;
	}		
	
}