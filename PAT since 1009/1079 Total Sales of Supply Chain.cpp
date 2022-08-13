//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int retail[10010];
//vector<int>chain[10010];
//int n, num_follow, id;
//double p, r, sales;
//
//void getSale(int id, double p) {
//	if (retail[id] > 0) {
//		sales += retail[id] * p;
//		return;
//	}
//	else {
//		vector<int>temp = chain[id];
//		for (int i = 0; i < temp.size(); i++)
//		{
//			getSale(temp[i], p * (1 + r / 100));
//		}
//	}
//}
//
//int main() {
//	scanf("%d %lf %lf", &n, &p, &r);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num_follow);
//		if (num_follow == 0) {
//			scanf("%d", &retail[i]);
//		}
//		chain[i].resize(num_follow);
//		for (int u = 0; u < num_follow; u++)
//		{
//			scanf("%d", &id);
//			chain[i][u] = id;
//		}
//	}
//	getSale(0, p);
//	printf("%.1f", sales);
//	return 0;
//}