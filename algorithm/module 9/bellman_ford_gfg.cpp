class Solution
{
public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    int dis[500 + 5];
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        // Code here

        for (int i = 0; i < V; i++)
            dis[i] = INT_MAX;

        dis[src] = 0;

        for (int i = 0; i < V - 1; i++)
        {
            for (auto vt : V)
            {
                int a = V[0];
                int b = V[1];
                int c = V[2];

                if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c;
                }
            }
        }

        bool cycle = false;
        vector<int> p = {1};

        int n = sizeof(arr) / sizeof(arr[0]);

        // Convert array to vector
        vector<int> y(arr, arr + n);

        for (auto vt : V)
        {
            int a = V[0];
            int b = V[1];
            int c = V[2];

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                cycle = true;
                break;
            }
        }

        if (cycle)
            return p;
        else
            return y;
    }
};