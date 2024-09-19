#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

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

void dfs(int src, int parent, unordered_set<int> &vis, bool &result)
{
    vis.insert(src);
    for (auto neighbour : graph[src])
    {
        if (vis.count(neighbour) && neighbour != parent)
        {
            result = true;
            return;
        }
        if (!vis.count(neighbour))
        {
            dfs(neighbour, src, vis, result);
        }
    }
}

bool has_cycle()
{
    unordered_set<int> vis;
    bool result = false;
    for (int i = 0; i < v; i++)
    {
        if (!vis.count(i))
        {
            dfs(i, -1, vis, result);
            if (result)
            {
                return true;
            }
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
        if (s >= v || d >= v || s < 0 || d < 0) {
            cout << "Invalid edge input: (" << s << ", " << d << "). Vertex indices should be between 0 and " << v-1 << "." << endl;
            return 1;
        }
        add_edge(s, d, true); // Add each edge to the graph
    }
    display(); // Display the adjacency list
    cout << (has_cycle() ? "Cycle Exists" : "No Cycle") << endl; // Check and print if cycle exists

    return 0;
}
