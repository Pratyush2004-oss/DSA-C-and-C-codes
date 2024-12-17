#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs1(vector<vector<int>> &adj, int u, vector<bool> &visited, stack<int> &st)
{
    visited[u] = true;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs1(adj, v, visited, st);
        }
    }

    st.push(u);
}

void dfs2(vector<vector<int>> &adjT, int u, vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";

    for (int v : adjT[u])
    {
        if (!visited[v])
        {
            dfs2(adjT, v, visited);
        }
    }
}

void printSCCs(vector<vector<int>> &adj, int V)
{
    vector<bool> visited(V, false);
    stack<int> st;

    // First pass
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs1(adj, i, visited, st);
        }
    }

    // Create a transpose graph
    vector<vector<int>> adjT(V);
    for (int v = 0; v < V; v++)
    {
        for (int u : adj[v])
        {
            adjT[u].push_back(v);
        }
    }

    // Mark all vertices as not visited
    fill(visited.begin(), visited.end(), false);

    // Second pass
    while (!st.empty())
    {
        int v = st.top();
        st.pop();

        if (!visited[v])
        {
            cout << "\nSCC: ";
            dfs2(adjT, v, visited);
        }
    }
}

int main()
{
    // Example graph
    vector<vector<int>> adj = {
        {1, 2}, {3}, {0}, {4}, {}};
    int V = adj.size();

    printSCCs(adj, V);

    return 0;
}