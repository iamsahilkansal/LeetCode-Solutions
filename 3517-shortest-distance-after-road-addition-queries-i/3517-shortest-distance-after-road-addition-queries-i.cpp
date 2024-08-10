
class Solution {
public:
int bfsShortestPath(int n, unordered_map<int, unordered_set<int>>& graph) {
    vector<int> dist(n, numeric_limits<int>::max());
    dist[0] = 0;
    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (dist[neighbor] > dist[node] + 1) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            }
        }
    }

    return dist[n - 1];
}
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int, unordered_set<int>> graph;
    for (int i = 0; i < n - 1; ++i) {
        graph[i].insert(i + 1);
    }

    vector<int> answer;

    for (auto& query : queries) {
        int u = query[0];
        int v = query[1];
        graph[u].insert(v);

        int shortest_path = bfsShortestPath(n, graph);
        answer.push_back(shortest_path);
    }

    return answer;
    }
};