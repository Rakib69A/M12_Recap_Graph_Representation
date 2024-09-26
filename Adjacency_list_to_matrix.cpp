#include<bits/stdc++.h>
using namespace std;
void convertToMatrix(int n, vector<int> adj[]){
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int child : adj[i]){
            a[i][child] = 1;
        }
    }
    cout<<"OUTPUT :: "<<endl;
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
    vector<int> adj[n];
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    convertToMatrix(n,adj);
    return 0;
}