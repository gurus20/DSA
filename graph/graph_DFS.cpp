#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addNode(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void showAdj(vector<int> graph[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " : ";
        for (auto x : graph[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

bool checkVisited(vector<int> visited, int r)
{
    bool exists = false;
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == r)
        {
            exists = true;
        }
    }
    return exists;
}

void DFSTraversal(vector<int> graph[], int r)
{
    vector<int> visited;
    stack<int> s;

    if (s.empty())
    {
        visited.push_back(r);
        cout << r << " ";
        for (auto x : graph[r])
        {
            s.push(x);
        }
    }

    while (!s.empty())
    {
        int front = s.top();
        s.pop();

        if (!checkVisited(visited, front))
        {
            visited.push_back(front);
            cout << front << " ";
            for (auto x : graph[front])
            {
                s.push(x);
            }
        }
    }
}

int main()
{
    int n = 5;
    vector<int> graph[n];

    addNode(graph, 0, 1);
    addNode(graph, 0, 2);
    addNode(graph, 0, 3);
    addNode(graph, 1, 2);
    addNode(graph, 2, 4);

    showAdj(graph, n);
    cout << endl;
    cout << "BFS Traversal of Graph : ";
    DFSTraversal(graph, 0);
    cout << endl;

    return 0;
}