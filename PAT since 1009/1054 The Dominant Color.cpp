//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int M, N;
//map<int, int>colorMap;
//
//int main() {
//	scanf_s("%d %d", &M, &N);
//	int num;
//	for (int i = 0; i < M * N; i++) {
//		scanf_s("%d", &num);
//		colorMap[num]++;
//	}
//	map<int, int>::iterator iter = colorMap.begin();
//	int max = 0, index = 0;
//	while (iter != colorMap.end()) {
//		if (iter->second > max) {
//			max = iter->second;
//			index = iter->first;
//		}
//		iter++;
//	}
//	cout << index;
//	return 0;
//}