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
	

		ll n,i,m,k,j;
		cin>>n;
	
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		cin>>m;
		ll b[m];
		for(i=0;i<m;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		k=0;
		// cout<<k<<endl;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				if(abs(a[i]-b[j])<2)
				{
					k++;
					b[j]=-1;
					break;
				}
			}

			cout<<k<<endl;


}
