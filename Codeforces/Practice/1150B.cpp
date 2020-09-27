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

  ll n,i,j,l=3,c=0,count;
  cin>>n;
  char a[n][n];

  count=n*n;
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
  		cin>>a[i][j];

  	for(i=1;i<n-1;i++)
  		for(j=1;j<n-1;j++)
  		{
  			if(a[i][j]!='#')
  			{
  				if(a[i][j-1]=='.' && a[i][j+1]=='.' && a[i-1][j]=='.' && a[i+1][j]=='.')
  				{ 	
  					a[i][j]='#';
  					a[i][j-1]='#';
  					a[i][j+1]='#';
  					a[i-1][j]='#';
  					a[i+1][j]='#';
  				}

  			}
  		}

	for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
  		if(a[i][j]=='#')
  			c++;
  		

  	if(c==count)
  		cout<<"YES"<<endl;
  	else
  		cout<<"NO"<<endl;	
	
}