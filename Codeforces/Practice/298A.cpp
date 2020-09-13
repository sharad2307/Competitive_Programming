#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
	#endif

	ll n,s,t;
	string path;
	ll i;
	cin>>n>>path;
	
	for(i=n-1;i>=0;i--)
	{
		if(path[i]=='R' )
		{
			s=i+1;
			t=i+2;
			break;
		}
	}
	for(i=1;i<n;i++)
	{
		if(path[i]=='L')
		{
			s=i+1;
			t=i;
			break;
		}	
	}

	cout<<s<<" "<<t;
	return 0;
}

