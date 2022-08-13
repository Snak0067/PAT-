//#include<iostream>
//#include<queue>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, level, k, m, user;
//vector<int>follow[1005];
//int bfs(int bozhu, int l) {
//	bool visit[1005] = { false };
//	queue<int>q;
//	q.push(bozhu);
//	visit[bozhu] = true;
//	unsigned forwards = 0, index = 0, count = 1;
//	while (q.size() != 0 && l < level) {
//		vector<int>current = follow[q.front()];
//		for (unsigned u = 0; u < current.size(); u++)
//		{
//			int element = current[u];
//			if (!visit[element]) {
//				q.push(element);
//				visit[element] = true;
//				forwards++;
//			}
//		}
//		q.pop();
//		index++;
//		if (index == count) {
//			l++;
//			index = 0;
//			count = q.size();
//		}
//	}
//	return forwards;
//}
//int main() {
//	scanf_s("%d %d", &n, &level);
//	for (unsigned i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &m);
//		for (unsigned u = 0; u < m; u++)
//		{
//			scanf_s("%d", &user);
//			follow[user].push_back(i);
//		}
//	}
//	scanf_s("%d", &k);
//	for (unsigned i = 0; i < k; i++)
//	{
//		scanf_s("%d", &user);
//		printf("%d\n", bfs(user, 0));
//	}
//	return 0;
//}