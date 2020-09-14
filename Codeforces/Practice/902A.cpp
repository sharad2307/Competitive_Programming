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
int n,m,x,y,flag=1;
  cin>>n>>m;
  int ansy=0;
  while(n--)
  {
    cin>>x>>y;
    if(y>=ansy && x<=ansy) ansy=y;
    
  }
  if(ansy>=m) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;  
  return 0;

  }