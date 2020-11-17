
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k,n,m,ct=0,t,ans=0;
cin>>n;
string str;
cin>>str;
if(str.size()!=2){
for(i=1;i<n-1;i++)
{
    if(str[i]==str[i-1] && str[i]==str[i+1] && str[i-1]==str[i+1])
    {if(str[i-1]=='R')
        str[i]='G';
        else if(str[i-1]=='G')
        str[i]='B';
        else
        str[i]='R';
        ct++;
    }
}
for(i=1;i<n-1;i++)
{   int r=0,g=0,b=0;
    if(str[i]==str[i-1] || str[i]==str[i+1])
    {
        if(str[i-1]=='R')
        r++;
        else if(str[i-1]=='G')
        g++;
        else
        b++;
        if(str[i+1]=='R')
        r++;
        else if(str[i+1]=='G')
        g++;
        else
        b++;
        if(r==0)
        str[i]='R';
        else if(g==0)
        str[i]='G';
        else
        str[i]='B';
        ct++;
    }
}
}
else
{
    if(str[0]==str[1])
    {
        if(str[0]=='R')
        str[0]='G';
        else if(str[0]=='G')
        str[0]='B';
        else
        str[0]='R';
        ct++;
 
    }
}
 
cout<<ct<<"\n";
cout<<str;
return 0;
}
