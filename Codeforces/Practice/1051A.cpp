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
		ll i,length,il=0,iu=0,id=0,k,index;
		string str;
		char nc;
		cin>>str;

		length = str.length(); 
    	for (i = 0; i < length; i++)
    	{ 
        if (islower(str[i]))  
            il++; 
        else if (isupper(str[i]))  
            iu++;
        else if(isdigit(str[i]))
        	id++;            
        } 

      if((il==0 && iu!=0 && id!=0) || (il!=0 && iu==0 && id!=0) || (il!=0 && iu!=0 && id==0)) 
      {
          if(il==0)
            nc='a';
          else if(iu==0)
            nc='A';
          else
            nc='1';

          k=0;
          for(i=0;i<length;i++)
          {
            
            if(isupper(str[i]))
              {
                if(k=1)
                {
                  str[index]=nc;break;
                }
                k=1;index=i;
              }

             else if(isdigit(str[i]))
              {
                if(k=1)
                {
                  str[index]=nc;break;
                }
                k=1;index=i;
              }

              else if(islower(str[i]))
              {
                if(k=1)
                {
                  str[index]=nc;break;
                }
                k=1;index=i;
              }
          }
      }

      else if((il!=0 && iu==0 && id==0) || (il==0 && iu==0 && id!=0) || (il==0 && iu!=0 && id==0))
      {
          if(il!=0 && iu==0 && id==0)
          {
            str[0]='A';
            str[1]='1';
          }
          else if(il==0 && iu==0 && id!=0)
          {
            str[0]='a';
            str[1]='A';
          }
          else
          {
            str[0]='1';
            str[1]='a';
          }
      }

      cout<<str<<endl;

	}

	
}