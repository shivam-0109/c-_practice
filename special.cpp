#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve()
{
    lli N;
     cin>>N;
     int c=0;
     int fact[]={1,1,2,6,12,24,120,720,5040,40320};
     
     for(int i=1; i<=N; i++)
       {
     int count= ceil(log10(i));
        int temp=i, product=1;
        
       while (i != 0)
       {
        product = product * (i% 10);
        i= i/ 10;
       }
        i=temp;
        if(product>=fact[count])
            c++;
         else
            c=c;
      }
    cout<<c<<endl;
     }
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
    return 0;
}