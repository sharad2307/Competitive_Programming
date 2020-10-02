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

    ll n,i;
    cin>>n;
    ll z=n/2;
    ll a[z];
    for(i=0;i<z;i++)
        a[i]=1;
    a[0]=7;

    if(n==3)
        cout<<7<<endl;
  else
  {
      if(n%2==0)
      {
        for(i=0;i<z;i++)
            cout<<1;
        cout<<endl;
    }


    else
    {
        for(i=0;i<z;i++)
            cout<<a[i];
        cout<<endl;
    }
}
        // for(i=0;i<z;i++)
        //     cout<<a[i];

}


}