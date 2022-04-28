#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addNode(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty())
    {
        cout << ' ' << g.front();
        g.pop();
    }
    cout << '\n';
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

void bfsTravesal(vector<int> graph[], int r)
{
    vector<int> visited;
    queue<int> q;

    if (q.empty())
    {
        visited.push_back(r);
        cout << r << " ";
        for (auto x : graph[r])
        {
            q.push(x);
        }
    }

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        if (!checkVisited(visited, front))
        {
            visited.push_back(front);
            cout << front << " ";
            for (auto x : graph[front])
            {
                q.push(x);
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
    bfsTravesal(graph, 0);
    cout << endl;

    return 0;
}