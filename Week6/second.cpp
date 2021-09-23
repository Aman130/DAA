#include <bits/stdc++.h>
using namespace std;

bool checkBipartite(vector<vector<int>>&v){
	queue<int> q;
    q.push(0);
    int col[v.size()];
    for(int i=0;i<v.size();i++) col[i]=-1;
    col[0]=0;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        if(v[p][p]==1){
            return false;
        }
        for(int i=0;i<v.size();i++){
            if(v[p][i]==1 && col[i]==-1){
                col[i]=1-col[p];
                q.push(i);
            }
            else{
                if(v[p][i]==1 && col[p]==col[i]){
                    cout<<i<<" "<<p<<" ";
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        bool p=checkBipartite(v);
        if(p) cout<<"Graph is Bipartite\n";
        else cout<<"Graph is not Bipartite\n";
    }
    return 0;
}