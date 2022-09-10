//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//vector<int>vec[205];
//
//int main() {
//	int n, k, m, a, b;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d%d", &a, &b);
//		vec[a].push_back(b);
//		vec[b].push_back(a);
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &k);
//		unordered_map<int, int>mmap;
//		vector<int>temp;
//		for (int u = 0; u < k; u++)
//		{
//			scanf("%d", &a);
//			temp.push_back(a);
//			for (int j = 0; j < vec[a].size(); j++)
//			{
//				mmap[vec[a][j]]++;
//			}
//		}
//		auto iter = temp.begin();
//		while (iter != temp.end()) {
//			if (mmap[*iter] < k - 1) {
//				printf("Not a Clique\n");
//				break;
//			}
//			iter++;
//		}
//		if (iter == temp.end()) {
//			int count = 0;
//			auto it = mmap.begin();
//			while (it != mmap.end()) {
//				if (it->second >= k) {
//					printf("Not Maximal\n");
//					break;
//				}
//				it++;
//			}
//			if (it == mmap.end()) {
//				printf("Yes\n");
//			}
//		}
//	}
//
//	return 0;
//}