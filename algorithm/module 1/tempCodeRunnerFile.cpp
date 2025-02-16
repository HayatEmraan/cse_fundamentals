    vector<int> adj_mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a); // undirect adjacency list
    }