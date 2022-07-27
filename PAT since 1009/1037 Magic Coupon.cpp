//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>coupon;
//vector<int>product;
//
//int main() {
//	int n, m, number, totalNum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> number;
//		coupon.push_back(number);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> number;
//		product.push_back(number);
//	}
//	sort(coupon.begin(), coupon.end(), less<int>());
//	sort(product.begin(), product.end(), less<int>());
//	int max_left = coupon.size() - 1, max_right = product.size() - 1;
//	while (max_left >= 0 && max_right >= 0 && coupon[max_left] > 0 && product[max_right] > 0) {
//		totalNum += coupon[max_left--] * product[max_right--];
//	}
//	int min_left = 0, min_right = 0;
//	while (min_left < coupon.size() && min_right < product.size() && coupon[min_left] < 0 && product[min_right] < 0) {
//		totalNum += coupon[min_left++] * product[min_right++];
//	}
//	cout << totalNum;
//	return 0;
//}