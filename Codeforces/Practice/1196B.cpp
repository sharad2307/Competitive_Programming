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
		ll n,k,a;
		cin>>n>>k;
		vector<int> v;
		loop(i,0,n)
		{
			cin>>a;
			if(a%2)
			v.pb(i+1);
		}

		if(v.size()<k || (v.size()-k)%2 ==1)cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			loop(i,0,k-1)
			cout<<v[i]<<" ";
			cout<<n<<endl;
		}
	}
			
	
}