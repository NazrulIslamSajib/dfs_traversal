#include<bits/stdc++.h>
using namespace std;
int const mx=10000;
bool vis[10000];
vector<int>adj[mx+123];
int i,cnt=0;
void dfs(int n)
{
       // cnt++;
        vis[n]=1;
       //cout<<n<<endl;
        for(auto x:adj[n])
        {    cnt++;
            if(vis[x]==0)
            {
                 cout<<x<<endl;
                 dfs(x);
            }

        }
}
int main()
{
    long long n,m;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        cout<<"NODE : "<<i<<"  :";
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    dfs(1);
    cout<<"Count"<<cnt<<" "<<endl;///time complexity of dfs which is O(n+m);
    return 0;
}
/*

  11 11
  1 2
  2 3
  2 6
  3 4
  3 5
  4 9
  4 8
  5 7
  5 8
  8 10
  8 11



*/
