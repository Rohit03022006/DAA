#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<pair<int, int>>> &adj, int source) {
    const int INF = 1e9;

    vector<int> dist(V, INF);
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Ignore outdated entries
        if (d > dist[u])
            continue;

        for (auto edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<pair<int, int>>> adj(V);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});  // Remove this for a directed graph
    }

    int source;
    cin >> source;

    vector<int> dist = dijkstra(V, adj, source);

    for (int i = 0; i < V; i++) {
        cout << "Distance from " << source << " to " << i
             << " = " << dist[i] << '\n';
    }

    return 0;
}
