

//adjList print
#include<bits/stdc++.h>
using namespace std;

//printAdjList




int main() {

    int t;
    int V,E,u,v;
    cin>>t;

    while(t>0) {
        cin>>V>>E;
        vector<int> adj[V+1];

        for(int i=0; i< E;i++) {
            cin>>u>>v;
                
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int node = 1; node < V+1; node++) {
            cout<<"The adj of " << node <<" are: ";
            for(auto innNode: adj[node]) {
                cout<<" ->" <<innNode;
            }
            cout<<endl;
        }
        t--;
    }

    return 0;
}



***************IO*******************8
1
3 3
1 2
2 3
1 3
The adj of 1 are: 2 -> 3
The adj of 2 are: 1 -> 3
The adj of 3 are: 1 -> 2
