//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int INF = 99999999;
//vector<int> v;
//vector<int> options;
//int n, price, leftIndex;
//void myBinarySearch(int i, int& j, int& tempsum) {
//	int left = i, right = n;
//	while (left < right) {
//		int mid = (left + right) / 2;
//		if (v[mid] - v[i - 1] >= price) {
//			right = mid;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	j = right;
//	tempsum = v[right] - v[i - 1];
//}
//
//int main() {
//	bool match = false;
//	cin >> n >> price;
//	v.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &v[i]);
//		v[i] += v[i - 1];
//	}
//	int max = v[n];
//	for (int i = 1; i <= n; i++)
//	{
//		int j, tempsum;
//		myBinarySearch(i, j, tempsum);
//		if (tempsum > max)continue;
//		if (tempsum >= price) {
//			if (tempsum < max) {
//				max = tempsum;
//				options.clear();
//			}
//			options.push_back(i);
//			options.push_back(j);
//		}
//	}
//	for (int i = 0; i < options.size(); i += 2)
//	{
//		cout << options[i] << "-" << options[i + 1] << endl;
//	}
//	return 0;
//}