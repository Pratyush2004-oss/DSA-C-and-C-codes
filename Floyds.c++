#include <iostream>
#include <limits>

using namespace std;

void floydWarshall(int graph[V][V], int dist[V][V]) {
    int V = sizeof(graph) / sizeof(graph[0][0]);

    /* Initialize the solution matrix same as input graph matrix
       Or we can use the following assignment statements??
       for (int i = 0; i < V; i++) {
           for (int j = 0; j < V; j++) {
               dist[i][j] = graph[i][j];
           }
       } */
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    /* Add all vertices one by one to the set of intermediate
       vertices.
       ---> Before start of an iteration, we have shortest
       distances between all pairs of vertices such that
       the shortest distances involve only the vertices in
       set {0, 1, 2, .. k-1}. */
    for (int k = 0; k < V; k++) {
        // Pick all vertices as source one by one
        for (int i = 0; i < V; i++) {
            // Pick all vertices as destination one by one
            for (int j = 0; j < V; j++) {
                // If vertex k is on a shorter path from i to j,
                // then update the value of dist[i][j]
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix
    cout << "The following matrix shows the shortest distances"
            " between every pair of vertices \n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT8_MAX)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    /* Let us create the following graph
              2    3     3
        (0)---->(1)---->(2)
        / \     |
       6|   5   |4
        \ |     |
         (3)<--(4)---->(5)
                3     1
    */
   int V = 5;
    int graph[V][V] = { {0,   2,   0,  6,   0},
                        {2,   0,   3,  8,   5},
                        {0,   3,   0,  0,   7},
                        {6,   8,   0,  0,   9},
                        {0,   5,   7,  9,   0}
                    };

    int dist[V][V];

    // Function call
    floydWarshall(graph, dist);

    return 0;
}