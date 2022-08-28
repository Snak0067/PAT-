//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>people[1005];
//vector<int>hobby[1005];
//bool visitPeople[1005];
//bool visitHobby[1005];
//vector<int>ans;
//int main() {
//	int n, k, hobbyIndex, cluster = 0;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%d:", &k);
//		for (int j = 0; j < k; j++)
//		{
//			scanf_s("%d", &hobbyIndex);
//			people[i].push_back(hobbyIndex);
//			hobby[hobbyIndex].push_back(i);
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (visitPeople[i] == false) {
//			visitPeople[i] = true;
//			cluster++;
//			queue<int>q;
//			int clusterNum = 0;
//			q.push(i);
//			while (!q.empty()) {
//				int top = q.front();
//				q.pop();
//				clusterNum++;
//				for (int j = 0; j < people[top].size(); j++)
//				{
//					int hob = people[top][j];
//					if (visitHobby[hob] == false) {
//						visitHobby[hob] = true;
//						for (int p : hobby[hob]) {
//							if (visitPeople[p] == false) {
//								q.push(p);
//								visitPeople[p] = true;
//							}
//						}
//					}
//
//				}
//			}
//			ans.push_back(clusterNum);
//		}
//	}
//	sort(ans.begin(), ans.end(), greater<int>());
//	printf("%d\n%d", cluster, ans[0]);
//	for (int i = 1; i < ans.size(); i++)
//	{
//		printf(" %d", ans[i]);
//	}
//
//	return 0;
//}