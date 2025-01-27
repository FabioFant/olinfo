// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    // Input
    int n, m;
    fin >> n >> m;
    vector<vector<pair<long long, int>>> lda(n + 1);
    for(int i = 0; i < m; i++)
    {
        
        int a, b, c;
        fin >> a >> b >> c;
        lda[a].push_back({b, c});
        lda[b].push_back({a, c});
    }
    // Data structures
    vector<bool> v(n + 1, false);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    // Init
    pq.push({0, 1});
    while(!pq.empty())
    {
        auto [dist, node] = pq.top();
        pq.pop();
        if(v[node]) continue;
        v[node] = true;
        if(node == n)
        {
            cout << dist;
            return 0;
        }
        for(auto [curr, cost] : lda[node])
        {
            pq.push({dist + cost, curr});
        }
    }
    cout << -1;
    return 0;
}