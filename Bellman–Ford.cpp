#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, weight;
};

void bellmanFord(int V, int source, vector<Edge>& edges) {
    const int INF = 1e9;

    // Distance from source to every vertex
    vector<int> dist(V, INF);
    dist[source] = 0;

    // Relax all edges V - 1 times
    for (int i = 1; i <= V - 1; i++) {
        bool updated = false;

        for (auto edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int w = edge.weight;

            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                updated = true;
            }
        }

        // Optimization: stop if no distance was updated
        if (!updated)
            break;
    }

    // Check for negative-weight cycle
    for (auto edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int w = edge.weight;

        if (dist[u] != INF && dist[u] + w < dist[v]) {
            cout << "Negative weight cycle detected!\n";
            return;
        }
    }

    // Print shortest distances
    cout << "Shortest distances from source " << source << ":\n";

    for (int i = 0; i < V; i++) {
        if (dist[i] == INF)
            cout << "Vertex " << i << ": INF\n";
        else
            cout << "Vertex " << i << ": " << dist[i] << '\n';
    }
}

int main() {
    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> edges(E);

    cout << "Enter edges (u v weight):\n";

    for (int i = 0; i < E; i++) {
        cin >> edges[i].u
            >> edges[i].v
            >> edges[i].weight;
    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    bellmanFord(V, source, edges);

    return 0;
}
