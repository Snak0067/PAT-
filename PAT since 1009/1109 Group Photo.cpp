//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct people
//{
//	string name;
//	int height;
//};
//vector<people>v;
//vector<vector<people>>ans;
//bool cmp(people p1, people p2) {
//	if (p1.height != p2.height)return p1.height > p2.height;
//	return p1.name < p2.name;
//}
//int main() {
//	int n, k, m, index = 0;
//	scanf_s("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		people p;
//		cin >> p.name >> p.height;
//		v.push_back(p);
//	}
//	sort(v.begin(), v.end(), cmp);
//	ans.resize(k);
//	for (int i = 0; i < k; i++)
//	{
//		int num;
//		if (i == 0) {
//			num = (int)(n / k) + n % k;
//		}
//		else {
//			num = (int)(n / k);
//		}
//		int center = num / 2;
//		ans[i].resize(num);
//		for (int u = 0; u < num / 2 + 1; u++)
//		{
//			if (u == 0)ans[i][center] = v[index++];
//			else {
//				if (center - u >= 0) {
//					ans[i][center - u] = v[index++];
//				}
//				if (center + u < num) {
//					ans[i][center + u] = v[index++];
//				}
//			}
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		printf("%s", ans[i][0].name.c_str());
//		for (int u = 1; u < ans[i].size(); u++) {
//			printf(" %s", ans[i][u].name.c_str());
//		}
//		printf("\n");
//	}
//	return 0;
//}