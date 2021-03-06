// DFS와 BFS
#include <bits/stdc++.h>
using namespace std;

int N, M, V;
vector<int> edge[1001];
vector<int> visited;

void dfs(int node) {

	cout << node << ' ';
	for (int i = 0; i < edge[node].size(); i++) {
		if (!visited[edge[node][i]]) {
			visited[edge[node][i]]++;
			dfs(edge[node][i]);
		}
	}
}

void bfs() {
	queue<int> q;
	q.push(V);

	visited[V] = 1;
	while (!q.empty()) {
		int node = q.front();
		q.pop();

		cout << node << ' ';
		for (int i = 0; i < edge[node].size(); i++) {
			if (!visited[edge[node][i]]) {
				visited[edge[node][i]]++;
				q.push(edge[node][i]);
			}
		}
	}
}
int main() {
	cin >> N >> M >> V;
	int node1, node2;
	visited = vector<int>(N + 1, 0);
	for (int i = 0; i < M; i++) {
		cin >> node1 >> node2;
		edge[node1].push_back(node2);
		edge[node2].push_back(node1);
	}

	for (int i = 1; i <= N; i++)
		sort(edge[i].begin(), edge[i].end());

	visited[V] = 1;
	dfs(V);
	printf("\n");

	//bfs
	visited = vector<int>(N + 1, 0);
	bfs();

	return 0;
}
