#include <iostream>
#include <vector>
#include <vector>

using namespace std;

int find(vector<int> &parent, int x)
{
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

bool Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);
    if (a == b)
        return true;
    if (rank[a] >= rank[b])
    {
        rank[a]++;
        parent[b] = a;
    }
    else
    {
        rank[b]++;
        parent[a] = b;
    }
    return false;
}

int main()
{
    int n, m; // n->elements, m->queries
    cin >> n >> m;
    vector<int> parent(n + 1, 0);
    vector<int> rank(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        bool b = Union(parent, rank, x, y);
        if (b == true)
        {
            cout << "Cycle Detected" << " ";
            return 0;
        }
    }
}

/*
    MY YOUTUBE VIDEO ON THIS Qn : https://www.youtube.com/watch?v=0X0lEtTkk-8
    Compnay Tags                : Google, Microsoft
    GfG Link                    : https://practice.geeksforgeeks.org/problems/detect-cycle-using-dsu/1
*/

class Solution
{
    public:
    vector<int> parent;
    vector<int> rank;
    
    int find(int x) {
        if(parent[x] == x)
            return x;
        
        return parent[x] = find(parent[x]);
    }
    
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);
 
    
        if(rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if(rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }
    
    //Function to detect cycle using DSU in an undirected graph.
	int detectCycle(int V, vector<int>adj[]) {
	    parent.resize(V);
	    rank.resize(V, 0);
	    
	    for(int i = 0; i<V; i++)
	        parent[i] = i;
	       
	    for(int u = 0; u<V; u++) {
	        for(int &v : adj[u]) {
	            if(u < v) {
    	            if(find(u) == find(v))
    	                return true;
    	            else {
    	                Union(u, v);
    	            }
	            }
	        }
	    }
	    return false;
	}
};