//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool match(vector<int>v, int x, int y) {
//	int liars = 0, wolflie = 0;
//	for (int i = 1; i < v.size(); i++)
//	{
//		bool wolf = v[i] < 0 ? true : false;//指认的是否是狼
//		int goal = abs(v[i]);//指认的人
//		if (wolf && goal != x && goal != y) {
//			liars++;
//			if (i == x || i == y)wolflie++;
//		}
//		if (!wolf && (goal == x || goal == y)) {
//			liars++;
//			if (i == x || i == y)wolflie++;
//		}
//	}
//	if (liars == 2 && wolflie == 1)return true;
//	return false;
//}
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	vector<int>v(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &v[i]);
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (match(v, i, j)) {
//				printf("%d %d\n", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("No Solution\n");
//	return 0;
//}