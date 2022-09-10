//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//unordered_map<int, bool>mmap;
//
//int main() {
//	int n, a, miss = 1;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a);
//		mmap[a] = true;
//		if (a == miss) {
//			while (mmap[a] == true) { a++; }
//			miss = a;
//		}
//	}
//	cout << miss;
//	return 0;
//}