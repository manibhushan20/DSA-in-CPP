#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v; // number of vertices

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (!visited.count(neighbour))
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allPath(int start, int end)
{
    visited.clear();
    vector<int> v;
     dfs(start, end, v);
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << ele << ", ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "Enter the number of vertices: ";
    cin >> v;
    graph.resize(v, list<int>());

    cout << "Enter the number of edges: ";
    int e;
    cin >> e;

    cout << "Enter the edges (src dest):\n";
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, true); // false for directed and true for undirected graph
    }

    //cout << "Graph adjacency list:\n";
   // display();

    cout << "Enter start and end vertices to check path: ";
    int x, y;
    cin >> x >> y;

    if (x < 0 || x >= v || y < 0 || y >= v)
    {
        cout << "Invalid vertices\n";
        return 1;
    }

    allPath(x, y);

    for (auto path : result)
    {
        for (auto ele : path)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    
}
