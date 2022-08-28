//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//queue<int>q;
//vector<vector<int>>v;
//
//int main() {
//	int n, num, number, level = 0, levelNum = 0, remain = 1;
//	double p, r;
//	scanf_s("%d %lf %lf", &n, &p, &r);
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		for (int j = 0; j < num; j++)
//		{
//			scanf_s("%d", &number);
//			v[i].push_back(number);
//		}
//	}
//	double result = 0.0;
//	int totalNum = 0;
//	q.push(0);
//	while (!q.empty()) {
//		int top = q.front();
//		if (v[top].size() == 0) {
//			if (totalNum == 0) {
//				totalNum = 1;
//				result = p * pow((r * 1.0 / 100 + 1), level);
//			}
//			else {
//				totalNum++;
//			}
//		}
//		q.pop();
//		for (int i = 0; i < v[top].size(); i++)
//		{
//			q.push(v[top][i]);
//			levelNum++;
//		}
//		remain--;
//		if (remain == 0) {
//			if (totalNum > 0) {
//				printf("%.4f %d", result, totalNum);
//				return 0;
//			}
//			remain = levelNum;
//			levelNum = 0;
//			level++;
//		}
//	}
//
//	return 0;
//}