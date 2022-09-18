#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
struct node {
	int x, y;
};
int height, width;
vector<vector<bool>>visit;
int X[4] = { 0,0,1,-1 };
int Y[4] = { 1,-1,0,0 };
bool judge(int x, int y) {
	if (x < 0 || x >= height || y < 0 || y >= width || visit[x][y] == true)return false;
	return true;
}
void bfs(int i, int j, vector<vector<char>>& grid) {
	queue<node>q;
	q.push(node({ i,j }));
	while (!q.empty()) {
		node nod = q.front();
		q.pop();
		visit[nod.x][nod.y] = true;
		for (int i = 0; i < 4; i++)
		{
			int x = nod.x + X[i], y = nod.y + Y[i];
			if (judge(x, y) && grid[x][y] == '1')q.push(node({x,y}));
		}
	}
}
int numIslands(vector<vector<char>>& grid) {
	height = grid.size(), width = grid[0].size();
	visit.resize(grid.size());
	int num = 0;
	for (int i = 0; i < height; i++)
	{
		visit[i].resize(width, false);
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++) {
			if (visit[i][j] == false && grid[i][j] == '1') {
				bfs(i, j, grid);
				num += 1;
			}
		}
	}
	return num;
}

int main() {
	vector<vector<char>>grid = { {'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'} };
	numIslands(grid);

	return 0;
}