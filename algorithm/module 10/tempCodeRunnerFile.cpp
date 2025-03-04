adj[i][k] != INT_MAX && adj[k][j] != INT_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j]