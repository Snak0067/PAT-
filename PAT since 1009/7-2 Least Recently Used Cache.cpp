//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int main() {
//	int n, m, maxn, next = 0, a, top = 0, back = 0;
//	vector<int>ans, q;
//	unordered_map<int, int>mmap, index;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		bool change = false;
//		scanf("%d", &a);
//		if (mmap.find(a) != mmap.end()) {
//			q[index[a]] = -1;
//			index[a] = back++;
//			q.push_back(a);
//		}
//		else {
//			if (mmap.size() < n) {
//				mmap[a] = 1;
//				q.push_back(a);
//				index[a] = back++;
//			}
//			else {
//				while (q[top] == -1)top++;
//				int num = q[top];
//				q[index[num]] = -1;
//				ans.push_back(num);
//				auto it = mmap.find(num);
//				mmap.erase(it);
//				mmap[a] = 1;
//				q.push_back(a);
//				index[a] = back++;
//			}
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		if (i != 0)printf(" ");
//		printf("%d", ans[i]);
//	}
//	return 0;
//}