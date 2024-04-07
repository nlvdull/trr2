#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector<int> ke[1005];
int m;
bool visited[1005];
void dfs(int u){
    cout<<u<<' ';
    visited[u]=true;
    for (int v: ke[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int main(){
    memset(visited,false,sizeof(visited));
    cin>>m;
    for(int i=1;i<=m;i++){
        for (int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if (a[i][j]==1){
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    }
    dfs(1);
}
