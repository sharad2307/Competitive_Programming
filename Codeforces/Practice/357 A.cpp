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

  ll x,y,n,sum=0,last=0,total=0,i,m;

  cin>>m;
  ll c[m];

  for(i=0;i<m;i++)
    {
      cin>>c[i];
      total=total+c[i];
    }
    cin>>x>>y;
 

  for(i=0;i<m;i++)
  {
    sum=sum+c[i];
    last=total-sum;
    // cout<<sum<<" "<<last<<endl;
    if(sum>=x && sum<=y && last>=x && last<=y)
    {
      cout<<(i+2);
      break;
    }
    else if(i==(m-1))
      cout<<0;
  }


	
}