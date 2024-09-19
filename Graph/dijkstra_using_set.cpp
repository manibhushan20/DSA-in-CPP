#include <bits/stdc++.h>  
using namespace std;  

class Solution {  
public:  
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {  
        vector<int> result(V, INT_MAX);  
        set<pair<int, int>> st;  
        st.insert({0, S});  
        result[S] = 0; // Include this to initialize source distance  

        while (!st.empty()) {  
            auto &it = *st.begin();  
            int dist = it.first;  
            int node = it.second;  
            st.erase(it);  

            for (auto curr : adj[node]) {  
                int adjNode = curr[0];  
                int wt = curr[1];  

                if (dist + wt < result[adjNode]) {  
                    if (result[adjNode] != INT_MAX) {  
                        st.erase({result[adjNode], adjNode});  
                    }  
                    result[adjNode] = dist + wt;  
                    st.insert({dist + wt, adjNode}); // Corrected line  
                }  
            }  
        }  
        
        return result;  
    }  
};  

int main() {  
    int t;  
    cin >> t;  
    while (t--) {  
        int V, E;  
        cin >> V >> E;  
        vector<vector<int>> adj[V];  
        for (int i = 0; i < E; i++) {  
            int u, v, w;  
            cin >> u >> v >> w;  
            vector<int> t1, t2;  
            t1.push_back(v);  
            t1.push_back(w);  
            adj[u].push_back(t1);  
            t2.push_back(u);  
            t2.push_back(w);  
            adj[v].push_back(t2);  
        }  
        int S;  
        cin >> S;  

        Solution obj;  
        vector<int> res = obj.dijkstra(V, adj, S);  

        for (int i = 0; i < V; i++)  
            cout << res[i] << " ";  
        cout << endl;  
    }  

    return 0;  
}