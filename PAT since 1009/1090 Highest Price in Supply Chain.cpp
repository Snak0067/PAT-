//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<int, vector<int>>chain;
//int number = 0, maxTurn = 0;
//void dfs(int index, int turn) {
//	if (chain[index].size() > 0) {
//		for (int i = 0; i < chain[index].size(); i++)
//		{
//			dfs(chain[index][i], turn + 1);
//		}
//	}
//	else {
//		if (turn > maxTurn) {
//			maxTurn = turn;
//			number = 1;
//		}
//		else if (turn == maxTurn) {
//			number++;
//		}
//	}
//}
//int main() {
//	int n, index;
//	double p, r;
//	scanf("%d %lf %lf", &n, &p, &r);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &index);
//		chain[index].push_back(i);
//	}
//	dfs(-1, -1);
//	double highPrice = pow(1 + r / 100, maxTurn) * p;	
//	printf("%.2f %d", highPrice, number);
//	return 0;
//}