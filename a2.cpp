#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int test;
  cin>>test;
  for(int t=1;t<=test;t++){
      string s;
      cin>>s;
      int k;
      cin>>k;
      vector<vector<char>> a(26);
      for(int i=0;i<k;i++){
          char u, v;
          cin>>u>>v;
          a[u- 'A'].push_back(v);
      }
      int mini = INT_MAX;
      for(int i=0;i<26;i++){
          char ch = (char)('A' + i);
          int cnt = 0;
          int f = 0;
          for(char c : s){
              if(ch == c){
                  f = 1;
                  continue;
              } 
              f = 0;
              queue<char> q;
              vector<int> vis(26, 0);
              q.push(c);
              while(q.size()){
                  int sz = q.size();
                  for(int i=0;i<sz;i++){
                      char num = q.front();
                      q.pop();
                      if(vis[num-'A']) continue;
                      vis[num-'A'] = 1;
                      if(num == ch){
                          f=1;
                          break;
                      }
                      for(auto zx : a[num-'A']){
                          q.push(zx);
                      }
                  }
                  if(f == 1) break;
                  cnt++;
              }
              if(f == 0) break;
          }
          if(f == 1)
          mini = min(mini, cnt);
      }
      if(mini == INT_MAX) mini = -1;
      cout<<"Case #"<<t<<": "<<mini<<"\n";
  }
  return 0;
}