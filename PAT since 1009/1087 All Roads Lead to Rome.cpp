#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
const int INF = 999999999;
int v[205][205];
int dis[205];
bool visit[205];
unordered_map<string, int>cmap;
unordered_map<int, string>dmap;
vector<int>happiness(205);
unordered_map<int, vector<int>>post;
vector<vector<int>> roads;
vector<int>tempRoad;
void dfs(int root, unordered_map<int, int>chosenCity, vector<int>tempRoad, int localCost) {
	if (localCost > dis[cmap["ROM"]])return;
	if (root == cmap["ROM"] && localCost == dis[cmap["ROM"]]) {
		tempRoad.push_back(root);
		roads.push_back(tempRoad);
	}
	else {
		chosenCity[root] = 1;
		tempRoad.push_back(root);
		for (int i = 0; i < post[root].size(); i++)
		{
			int next = post[root][i];
			if (chosenCity.find(next) == chosenCity.end() && v[root][next] != INF) {
				dfs(next, chosenCity, tempRoad, v[root][next] + localCost);
			}
		}
	}
}
int main() {
	int n, k, happy, vtance;
	string start, city, city1;
	scanf("%d%d", &n, &k);
	fill(v[0], v[0] + 205 * 205, INF);
	fill(dis, dis + 205, INF);
	cin >> start;
	cmap[start] = 0;
	dmap[0] = start;
	for (int i = 1; i < n; i++)
	{
		cin >> city >> happy;
		cmap[city] = i;
		dmap[i] = city;
		happiness[i] = happy;
	}
	for (int i = 0; i < k; i++)
	{
		cin >> city >> city1 >> vtance;
		v[cmap[city]][cmap[city1]] = v[cmap[city1]][cmap[city]] = vtance;
		v[i][i] = 0;
		post[cmap[city]].push_back(cmap[city1]);
		post[cmap[city1]].push_back(cmap[city]);
	}
	dis[0] = 0;
	int next = -1;
	for (int i = 0; i < n; i++)
	{
		int closer = INF;
		for (int j = 0; j < n; j++) {
			if (dis[j] < closer && visit[j] == false) {
				closer = dis[j];
				next = j;
			}
		}
		if (next == -1)break;
		visit[next] = true;
		for (int u = 0; u < n; u++)
		{
			if (visit[u] == false && dis[u] > dis[next] + v[next][u]) {
				dis[u] = dis[next] + v[next][u];
			}
		}
	}
	unordered_map<int, int>chosenCity;
	dfs(0, chosenCity, tempRoad, 0);
	int maxhappy = 0, avghappy = 0, temp_sum = 0, temp_avg = 0;
	for (int i = 0; i < roads.size(); i++)
	{
		vector<int>road = roads[i];
		temp_sum = 0, temp_avg = 0;
		for (int u = 0; u < road.size(); u++)
		{
			temp_sum += happiness[road[u]];
		}
		temp_avg = temp_sum / (road.size() - 1);
		if (temp_sum > maxhappy || (temp_sum == maxhappy && avghappy < temp_avg)) {
			maxhappy = temp_sum;
			avghappy = temp_avg;
			tempRoad = road;
		}
	}
	printf("%d %d %d %d\n", roads.size(), dis[cmap["ROM"]], maxhappy, avghappy);
	for (int i = 0; i < tempRoad.size() - 1; i++)
	{
		printf("%s->", dmap[tempRoad[i]].c_str());
	}
	printf("ROM");
	return 0;
}