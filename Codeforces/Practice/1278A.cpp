#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
		string p,h,z;
		cin>>p>>h;
		sort(p.begin(), p.end());
		for(ll i=0;i<h.size();i++)
		{
			z=h.substr(i,p.size());
			sort(z.begin(),z.end());
			if(z==p) break;
		}
		if(z==p) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;		
	}

	
}