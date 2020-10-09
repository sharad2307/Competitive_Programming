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

	testcases
	{
		ll n,k;
		cin>>n>>k;
		ll a[n],hash[1000]={0};
		loop(i,0,n)
		{
			cin>>a[i];
			hash[a[i]]++;
		}
		sort(hash,hash+n+2,dec());
		ll freq=hash[0];
			// cout<<freq<<endl;
		ll z=*max_element(a,a+n);

		if(freq==1)cout<<-1<<endl;
		else
		{	
			cout<<z*freq<<endl;

			while(freq!=0)
			{
				for(ll i=z;i>=1;i--)
					cout<<i<<" ";
				freq--;
			}
			cout<<endl;
		}
		
	}

	
}