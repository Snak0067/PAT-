//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//map<int, int>mmap;
//
//
//int main() {
//	int n, sum = 0;
//	scanf_s("%d", &n);
//	string num;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		for (int u = 0; u < num.length(); u++)
//		{
//			sum += num[u] - '0';
//		}
//		mmap[sum] = 1;
//		sum = 0;
//	}
//	printf("%d\n", mmap.size());
//	map<int, int>::iterator it = mmap.begin();
//	printf("%d", it->first); it++;
//	while (it != mmap.end()) {
//		printf(" %d", it->first); it++;
//	}
//	return 0;
//}