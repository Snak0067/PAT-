//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<string, vector<string>>mmap;
//
//
//int main() {
//	int n, m, k;
//	string a, b;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		mmap[a].push_back(b);
//		mmap[b].push_back(a);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d", &k);
//		unordered_map<string, int>temp;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> a;
//			temp[a] = 1;
//		}
//		bool match = false;
//		auto it = temp.begin();
//		while (!match && it != temp.end()) {
//			string good = it->first;
//			for (int u = 0; !match && u < mmap[good].size(); u++)
//			{
//				if (temp.find(mmap[good][u]) != temp.end()) {
//					match = true;
//				}
//			}
//			it++;
//		}
//		printf("%s\n", match == true ? "No" : "Yes");
//	}
//
//	return 0;
//}