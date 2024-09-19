#include <iostream>
#include <vector>
#include <list>
#include <climits>
#include <queue>
#include <unordered_set>

using namespace std;

class Graph {
private:
    vector<list<int>> graph;
    int v; // number of vertices

public:
    Graph(int vertices) : v(vertices) {
        graph.resize(v);
    }

    void add_edge(int src, int dest, bool bi_dir = true) {
        if (src < 0 || src >= v || dest < 0 || dest >= v) {
            cout << "Invalid edge (" << src << ", " << dest << ")\n";
            return;
        }
        graph[src].push_back(dest);
        if (bi_dir) {
            graph[dest].push_back(src);
        }
    }

    void bfs(int src, vector<int> &dist) {
        queue<int> qu;
        unordered_set<int> visited;
        dist.resize(v, INT_MAX);
        dist[src] = 0;
        visited.insert(src);
        qu.push(src);

        while (!qu.empty()) {
            int curr = qu.front();
            qu.pop();

            for (auto neighbour : graph[curr]) {
                if (!visited.count(neighbour)) {
                    qu.push(neighbour);
                    visited.insert(neighbour);
                    dist[neighbour] = dist[curr] + 1;
                }
            } 
        }
    }
};

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;

    Graph g(v);

    cout << "Enter the number of edges: ";
    cin >> e;

    cout << "Enter the edges (src dest):\n";
    for (int i = 0; i < e; ++i) {
        int s, d;
        cin >> s >> d;
        g.add_edge(s, d, true); // true for undirected graph
    }

    int x;
    cout << "Enter start vertex to check distance: ";
    cin >> x;

    if (x < 0 || x >= v) {
        cout << "Invalid vertex\n";
        return 1;
    }

    vector<int> dist;
    g.bfs(x, dist);

    cout << "Distances from vertex " << x << ":\n";
    for (int i = 0; i < dist.size(); i++) {
        cout << "Vertex " << i << ": " << dist[i] << "\n";
    }

    return 0;
}
