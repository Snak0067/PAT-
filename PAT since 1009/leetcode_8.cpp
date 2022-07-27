//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
///*leetcode 10*/
////class Solution {
////public:
////	bool isMatch(string s, string p) {
////		int m = s.size();
////		int n = p.size();
////		vector<vector<int>>f(m + 1, vector<int>(n + 1));
////		f[0][0] = true;
////		for (int i = 0; i <= m; i++) {
////			for (int j = 1; j <= n; j++) {
////				if (p[j - 1] == '*') {
////					f[i][j] |= f[i][j - 2];
////					if (match(s, p, i, j - 1)) {
////						f[i][j] |= f[i - 1][j];
////					}
////				}
////				else {
////					if (match(s, p, i, j)) f[i][j] = f[i][j] || f[i - 1][j - 1];
////				}
////			}
////		}
////		return f[m][n];
////	}
////	bool match(string s, string p, int i, int j) {
////		if (i == 0) {
////			return false;
////		}
////		if (p[j - 1] == '.')return true;
////		return p[j - 1] == s[i - 1];
////
////	}
////};
///*双指针移动 盛水容器 面积最大*/// 
////class Solution {
////public:
////	int maxArea(vector<int>& height) {
////		int left = 0;
////		int right = height.size() - 1;
////		vector<int> f(right + 1);
////		int maxContainer = 0;
////		while (left != right) {
////			int localContainer = min(height[left], height[right]) * (right - left);
////			if (localContainer > maxContainer) {
////				maxContainer = localContainer;
////			}
////			if (height[left] < height[right]) {
////				left++;
////			}
////			else {
////				right--;
////			}
////		}
////		return maxContainer;
////	}
////};
///*12. 整数转罗马数字*/
////class Solution {
////public:
////	string intToRoman(int num) {
////		string lower[4] = { "M","C","X","I" };
////		string higher[4] = { " ","D","L","V" };
////		int number[4] = { 0 };
////		int index = 3;
////		string result = "";
////		while (num != 0) {
////			number[index--] = num % 10;
////			num /= 10;
////		}
////		for (int i = 3; i >= 0; i--) {
////			string local = "";
////			if (number[i] == 9)local = lower[i] + lower[i - 1] + local;
////			else if (number[i] == 4)local = lower[i] + higher[i] + local;
////			else {
////				if (number[i] / 5 == 1) {
////					local = higher[i] + local;
////					number[i] = number[i] % 5;
////				}
////				for (int j = 0; j < number[i]; j++)local = local + lower[i];
////
////			}
////			result = local + result;
////		}
////		return result;
////	}
////};
///*13. 罗马数字转整数*/
//class Solution {
//public:
//	int romanToInt(string s) {
//		map<string, int>d;
//		map<string, int>digitalMapping;
//		d["M"] = 9;
//		d["D"] = 8;
//		d["C"] = 7;
//		d["L"] = 6;
//		d["X"] = 5;
//		d["V"] = 4;
//		d["I"] = 3;
//		d[" "] = 0;
//		digitalMapping["M"] = 1000;
//		digitalMapping["D"] = 500;
//		digitalMapping["C"] = 100;
//		digitalMapping["L"] = 50;
//		digitalMapping["X"] = 10;
//		digitalMapping["V"] = 5;
//		digitalMapping["I"] = 1;
//		digitalMapping["CM"] = 900;
//		digitalMapping["CD"] = 400;
//		digitalMapping["XC"] = 90;
//		digitalMapping["XL"] = 40;
//		digitalMapping["IX"] = 9;
//		digitalMapping["IV"] = 4;
//		s += "  ";
//		int total = 0;
//		for (int i = 0; i < s.length(); i++) {
//			string a = s.substr(i, 1);
//			string b = s.substr(i + 1, 1);
//			if (d[a] < d[b]) {
//				total += digitalMapping[a + b];
//				i++;
//			}
//			else {
//				total += digitalMapping[a];
//			}
//		}
//		return total;
//	}
//};
//
//int main() {
//
//	Solution s;
//	string number;
//	cin >> number;
//	cout << s.romanToInt(number);
//
//	return 0;
//}
//
//
////const int maxn = 1005;
////int v[maxn], w[maxn];
////int f[maxn][maxn];
////
////int main() {
////	int n, maxv;
////	cin >> n >> maxv;
////	for (int i = 1; i <= n; i++) {
////		cin >> w[i] >> v[i];
////	}
////	for (int i = 1; i <= n; i++) {
////		for (int j = 1; j <= maxv; j++) {
////			//  当前背包容量装不进第i个物品，则价值等于前i-1个物品
////			if (j < w[i]) {
////				f[i][j] = f[i - 1][j];
////			}
////			// 能装，需进行决策是否选择第i个物品
////			else {
////				f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
////			}
////		}
////	}
////	cout << f[n][maxv] << endl;
////
////	return 0;
////}
