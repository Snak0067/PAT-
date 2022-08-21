//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//unordered_map<string, vector<string>>info;
//int lpn = 1, maxl = 1, tempn = 1, childn = 0, level = 1;
//int main() {
//	int n, m, childNum;
//	string parent, child;
//	scanf_s("%d %d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> parent;
//		scanf_s("%d", &childNum);
//		for (int u = 0; u < childNum; u++)
//		{
//			cin >> child;
//			info[parent].push_back(child);
//		}
//	}
//	queue<string>q;
//	q.push("01");
//	while (q.size() > 0) {
//		string people = q.front();
//		q.pop();
//		tempn--;
//		for (int i = 0; i < info[people].size(); i++)
//		{
//			q.push(info[people][i]);
//			childn++;
//		}
//		if (tempn == 0) {
//			level++;
//			if (childn > lpn) {
//				lpn = childn;
//				maxl = level;
//			}
//			tempn = childn;			
//			childn = 0;
//		}
//	}
//	cout << lpn << " " << maxl;
//	return 0;
//}