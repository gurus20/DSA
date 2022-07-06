#include <bits/stdc++.h>
using namespace std;

void addEdge(vector <int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void displayList(vector <int> adj[], int vx){
    for(int i = 0; i < vx; i++){
        cout << "Adjacency List of " << i << endl;
        cout << "Head";
        for (int j = 0; j < adj[i].size(); j++){
            cout << " -> " << adj[i][j];

        }

        // Other Method

        // for (auto x : adj[i]){
        //     cout << " -> " << x ;
        // }
    cout << endl;
    }
}

int main(){
    int vx = 5;
    vector<int> adj[5];

    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 4);

    displayList(adj, vx);

    return 0;
}