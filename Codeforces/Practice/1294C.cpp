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
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a[3],c=0;
		cin>>n;
		for(ll i=2;i*i<n&&c<2;i++)
			if(n%i==0) 
			{
				a[c]=i;
				c++;
				n/=i;
			}
			if(c==2&&n>a[1]) 
				cout<<"YES"<<endl<<a[0]<<" "<<a[1]<<" "<<n<<endl;
			else
				cout<<"NO"<<endl;
		}


	}