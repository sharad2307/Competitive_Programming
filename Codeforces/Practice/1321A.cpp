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
	
	ll p=0,q=0,n,i,a[102],b[102];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	
	for(i=1;i<=n;i++)
		cin>>b[i];
	
	for(i=1;i<=n;i++)
	{
		if(b[i]==1 && a[i]==0)
			p++;
		if(a[i]==1 && b[i]==0)
			q++;
	}
	if(q==0)
		cout<<-1<<endl;
	else
		cout<<(p/q)+1<<endl;

	
}
