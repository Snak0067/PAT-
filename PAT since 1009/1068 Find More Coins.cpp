//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>>result;
//vector<int> v;
//vector<int>sumv;
//int numbers[100000];
//int n, m;
//vector<int>temp;
//bool match = false;
//void search(int i, int num, int digit) {
//	if (digit == 1) {
//		if (numbers[m - num] == 1) {
//			temp.push_back(m - num);
//			result.push_back(temp);
//			//temp.pop_back();
//			match = true;
//		}
//		return;
//	}
//	bool flag = true;
//	for (int j = i; j < n && flag && !match; j++) {
//		int newN = num + v[j];
//		if (m - newN > v[j]) {
//			temp.push_back(v[j]);
//			search(j + 1, num + v[j], digit - 1);
//			temp.pop_back();
//		}
//		else {
//			return;
//		}
//
//	}
//}
//
//int main() {
//	scanf("%d%d", &n, &m);
//	v.resize(n);
//	sumv.resize(n + 1);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &v[i]);
//		numbers[v[i]] = 1;
//	}
//	sort(v.begin(), v.end(), less<>());
//	for (int i = 0; i < n; i++) {
//		sumv[i + 1] = sumv[i] + v[i];
//	}
//	int digit = n;
//	if (sumv[digit] < m) {
//		printf("No Solution");
//		return 0;
//	}
//	while (sumv[digit] > m && digit >= 1) {
//		digit--;
//	}
//	while (sumv[digit] <= m && digit >= 1 && !match) {
//		search(0, 0, digit);
//		digit--;
//	}
//	if (result.size() == 0) {
//		printf("No Solution");
//	}
//	else {
//		printf("%d", result[0][0]);
//		for (int i = 1; i < result[0].size(); i++) {
//			printf(" %d", result[0][i]);
//		}
//	}
//
//	return 0;
//}

