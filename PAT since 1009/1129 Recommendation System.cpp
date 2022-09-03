//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//
//int book[50001];
//struct node
//{
//	int val, cnt;
//	node(int v, int c) { val = v, cnt = c; }
//	bool operator <(const node& a)const {
//		return (cnt != a.cnt) ? cnt > a.cnt : val < a.val;
//	}
//};
//
//int main() {
//	int n, k, num;
//	scanf_s("%d%d", &n, &k);
//	set<node>s;
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		if (i != 0) {
//			printf("%d:", num);
//			int tempcnt = 0;
//			for (auto it = s.begin(); it != s.end() && tempcnt < k; it++)
//			{
//				printf(" %d", it->val);
//				tempcnt++;
//			}
//			printf("\n");
//		}
//		auto it = s.find(node(num, book[num]));
//		if (it != s.end())s.erase(it);
//		book[num]++;
//		s.insert(node(num, book[num]));
//	}
//
//	return 0;
//}