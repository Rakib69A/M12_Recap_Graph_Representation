#include<bits/stdc++.h>
using namespace std;
void convertToMatrix(int n, vector<pair<int,int>> adj[]){
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(pair<int,int> child : adj[i]){
            int node = child.first;
            int cost = child.second;
            a[i][node] = cost;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> adj[n];
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    convertToMatrix(n,adj);
    return 0;
}