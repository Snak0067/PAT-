//#include<iostream>
//#include<string>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, k, p;
//vector<vector<int>>ans;
//vector<vector<int>>only;
//int record[25];
//void travel(vector<int>v, int num, int level) {
//	if (num == 0 || level == k) {
//		if (num == 0 && level == k)ans.push_back(v);
//		return;
//	}
//	int x = sqrt(num);
//	if (v.size() > 0) {
//		x = min(x, v[v.size() - 1]);
//	}
//	for (int i = x; i > 0; i--)
//	{
//		if (k * record[i] < num) {
//			return;
//		}
//		int len = v.size();
//		if (v.size() > 0 && i > v[len - 1]) {
//			return;
//		}
//		if (level + 1 <= k) {
//			v.push_back(i);
//			travel(v, num - record[i], level + 1);
//			v.pop_back();
//		}
//	}
//}
//
//int main() {
//	scanf_s("%d%d%d", &n, &k, &p);
//	vector<int>temp;
//	for (int i = 0; i < 25; i++)
//	{
//		record[i] = pow(i, p);
//	}
//	travel(temp, n, 0);
//	if (ans.size() == 0) {
//		printf("Impossible");
//		return 0;
//	}
//	int max = 0;
//	for (int i = 0; i < ans.size(); i++)
//	{
//		int sum = 0;
//		for (int x : ans[i])sum += x;
//		if (sum > max) {
//			max = sum;
//			only.clear();
//			only.push_back(ans[i]);
//		}
//		else if (sum == max)only.push_back(ans[i]);
//	}
//
//	int index = 0;
//	while (only.size() > 1 && index < k) {
//		int max = only[0][index];
//		ans.clear();
//		ans.push_back(only[0]);
//		for (int i = 0; i < only.size(); i++)
//		{
//			if (only[i][index] > max) {
//				ans.clear();
//				ans.push_back(only[i]);
//				max = only[i][index];
//			}
//			else if (only[i][index] == max) {
//				ans.push_back(only[i]);
//			}
//		}
//		only.clear();
//		only = ans;
//		index++;
//	}
//	printf("%d = %d^%d", n, only[0][0], p);
//	for (int i = 1; i < only[0].size(); i++)
//	{
//		printf(" + %d^%d", only[0][i], p);
//	}
//	return 0;
//}