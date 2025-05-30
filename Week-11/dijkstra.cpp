#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Define a pair type for (distance, vertex)
typedef pair<int, int> pii;

class Graph {
    int V; // Number of vertices
    vector<vector<pii>> adj; // Adjacency list: (neighbor, weight)

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v, int weight) {
        adj[u].push_back({ v, weight });
        adj[v].push_back({ u, weight }); // For undirected graph
    }

    void dijkstra(int start) {
        vector<int> dist(V, INT_MAX); // Distance to each vertex
        priority_queue<pii, vector<pii>, greater<pii>> pq;

        dist[start] = 0;
        pq.push({ 0, start }); // (distance, vertex)

        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            // Visit all neighbors
            for (auto neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (dist[v] > d + weight) {
                    dist[v] = d + weight;
                    pq.push({ dist[v], v });
                }
            }
        }

        // Print shortest distances
        cout << "Shortest distances from vertex " << start << ":\n";
        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX)
                cout << "Vertex " << i << ": Unreachable\n";
            else
                cout << "Vertex " << i << ": " << dist[i] << "\n";
        }
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Graph g(V);

    cout << "Enter edges in format (u v weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    int start;
    cout << "Enter starting vertex for Dijkstra: ";
    cin >> start;

    g.dijkstra(start);

    return 0;
}