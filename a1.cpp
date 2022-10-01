#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
bool checkVowel(char c)
{
 if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E')
 {
  return true;
 }
 return false;
}
void solve()
{
  string s;
  cin>>s;
  int a[26]={0};
  int vCount=0,cCount=0;
  int Ssize=s.size();
  if(Ssize==1)
  {
   cout<<"0"<<endl;
   return;
  }
  else{
   int check=0;
   for (int i = 0; i < Ssize-1; i++)
   {
    if (s[i]!=s[i+1])
    {
     check=1;
     break;
    }
   }
   if(check==0)
   {
    cout<<"0"<<endl;
    return;
   }
  }
  int v=0,c=0;
  for(int i=0;i<Ssize;i++)
  {
   a[s[i]-'A']++;
   if(checkVowel(s[i]))
   {
    v++;
   }
   else{
    c++;
   }
  }
  //   cout<<endl;
  // for(int i=0;i<26;i++)
  // {
  //  if(a[i]>0) cout<<char(i+'A')<<" ";
  // }
  // cout<<endl;
  // for(int i=0;i<26;i++)
  // {
  //  if(a[i]>0) cout<<a[i]<<" ";
  // }
  // cout<<endl;
  if(v==0&&c>0)
  {
   cout<<c<<endl;
   return;
  }
  else if(v>0&&c==0)
  {
   cout<<v<<endl;
   return;
  }
  int res=INT_MAX;
  for (int i = 0; i < 26; ++i)
  {
   /* code */
   if(a[i]>0)
   {
    int sum=0;
    // cout<<char(i+'A')<<" : ";
    for(int j=0;j<26;j++)
    {
     if(i!=j&&a[j]>0)
     {
      if(checkVowel(char(i+'A'))==true&&checkVowel(char(j+'A'))==true)
      {
       sum+=(2*a[j]);
      }
      else if(checkVowel(char(i+'A'))==true&&checkVowel(char(j+'A'))==false)
      {
       sum+=a[j];
      }
      else if(checkVowel(char(i+'A'))==false&&checkVowel(char(j+'A'))==false)
      {
       sum+=(2*a[j]);
      }
      else if(checkVowel(char(i+'A'))==false&&checkVowel(char(j+'A'))==true)
      {
       sum+=a[j];
      }
      // cout<<char(j+'A')<<" ";
     }
    }
    res=min(res,sum);
   }
  }
  // int Vmax=0;
  // Vmax=max(Vmax,a['A'-'A']);
  // Vmax=max(Vmax,a['I'-'A']);
  // Vmax=max(Vmax,a['O'-'A']);
  // Vmax=max(Vmax,a['U'-'A']);
  // Vmax=max(Vmax,a['E'-'A']);
  // vCount=vCount-Vmax;
  // vCount=vCount*2;
  // // cout<<vCount+cCount<<endl;
 cout<<res<<endl;
}
int main()
{
  speed_karo
  int t;cin>>t;
  for (int i = 0; i < t; ++i)
  {
   cout<<"Case #"<<i+1<<": ";
   solve();
  }
  return 0;
}