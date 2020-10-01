#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("C:/Users/91731/Documents/input.txt","r",stdin);
    freopen("C:/Users/91731/Documents/output.txt","w",stdout);
    freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
    
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;

    if(x3<=x1 && x2<=x4 && y3<=y1 && y4>=y2)
        cout<<"NO";

    else if(x5<=x1 && x6>=x2 && y5<=y1 && y6>=y2)
        cout<<"NO";

    else if(x3<=x1 && x4>=x2 && x5<=x1 && x6>=x2 && ((y3<=y1 && y4>=y5 && y6>=y2) || (y5<=y1 && y3<=y6 && y4>=y2)))
        cout<<"NO";

    else if(y3<=y1 && y4>=y2 && y5<=y1 && y6>=y2 && ((x3<=x1 && x5<=x4 && x6>=x2) || (x5<=x1 && x3<=x6 && x4>=x2)))
        cout<<"NO";
    
    else
        cout<<"YES";

    
}
