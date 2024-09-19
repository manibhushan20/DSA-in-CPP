#include <bits/stdc++.h>

using namespace std;

vector<list<int>> graph;
int v; // number of vertices

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << ele << " , ";
        }
        cout << "\n";
    }
}

bool bfs(int src)
{
    unordered_set<int> vis;
    queue<int> qu;
    vector<int> par(v, -1);
    qu.push(src);
    vis.insert(src);
    while (!qu.empty())
    {
        int curr = qu.front();
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (vis.count(neighbour) && par[curr] != neighbour)
                return true;
            if (!vis.count(neighbour))
            {
                vis.insert(neighbour);
                par[neighbour] = curr;
                qu.push(neighbour);
            }
        }
    }
}

bool has_cycle()
{

    bool result = false;
    for (int i = 0; i < v; i++){
        result = bfs(i);
        if (result)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> v; // Input number of vertices
    graph.resize(v, list<int>());
    int e;
    cin >> e; // Input number of edges
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        if (s >= v || d >= v || s < 0 || d < 0)
        {
            cout << "Invalid edge input: (" << s << ", " << d << "). Vertex indices should be between 0 and " << v - 1 << "." << endl;
            return 1;
        }
        add_edge(s, d, true); // Add each edge to the graph
    }
    display();                                                   // Display the adjacency list
    cout << (has_cycle() ? "Cycle Exists" : "No Cycle") << endl; // Check and print if cycle exists

    return 0;
}
