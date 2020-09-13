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

  string s;
  ll x=0,y=0;
    cin >> s;
    for(int i=0; s[i]; i++)if(s[i]=='>')
    {
        if(s[i-2]=='/')y-=2;
        for(int i=0; i<y; i++)cout<<" ";
        for(int j=x; j<=i; j++)cout<<s[j]; cout<<endl;
        if(s[i-2]!='/')y+=2;x=i+1;
    }

	
}