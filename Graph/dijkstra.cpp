#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        vector<int>result(V, INT_MAX);
        result[S]=0;
        
        pq.push({0, S});
        
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            int dist=curr.first;
            int node=curr.second;
            
            for(auto vec:adj[node]){
                int adjNode=vec[0];
                int wt=vec[1];
                
                if(dist + wt < result[adjNode]){
                    result[adjNode]=dist + wt;
                    pq.push({dist + wt, adjNode});
                }
            }
        }
        return result;
    }
};





int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

