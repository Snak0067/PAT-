//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//unordered_map<char, int>mmap;
//unordered_map<char, int>black;
//vector<char>v;
//int main() {
//	int n, num = 1;
//	string s, ans;
//	scanf_s("%d", &n);
//	cin >> s;
//	bool match = false;
//	char temp;
//	for (int i = 0; i < s.length(); i++)
//	{
//		//进黑名单直接过
//		if (!match && black.find(s[i]) != black.end()) {
//			match = false;
//		}
//		//目前是否进入匹配环节
//		else if (!match) {//没有进入，则当前char为匹配对象
//			match = true;
//			temp = s[i];
//		}
//		else if (s[i] == temp) {//正在匹配
//			num++;
//			if (num == n) {//当前匹配的数到了repeat的要求
//				if (mmap.find(temp) == mmap.end()) {
//					mmap[temp] = 1;
//					v.push_back(temp);
//				}
//				match = false;
//				num = 1;
//			}
//		}
//		else if (s[i] != temp) {
//			num = 1;
//			black[temp] = 1;
//			if (mmap.find(temp) != mmap.end())//移除mmap中误入的char
//			{
//				mmap.erase(mmap.find(temp));
//			}
//			if (black.find(s[i]) == black.end()) {//判断当前的char是否列入黑名单中
//				temp = s[i];
//			}
//			else {
//				match = false;//如果temp和s[i]都在黑名单中，则匹配为下一个
//			}
//
//		}
//	}
//	if (num != 1 || match == true) {
//		black[temp] = 1;
//		if (mmap.find(temp) != mmap.end())//移除mmap中误入的char
//		{
//			mmap.erase(mmap.find(temp));
//		}
//	}
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (black.find(s[i]) != black.end()) {
//			ans.push_back(s[i]);
//		}
//		else {
//			ans.push_back(s[i]);
//			i += n - 1;
//		}
//	}
//	for (char ch : v) {
//		if (mmap.find(ch) != mmap.end()) {
//			printf("%c", ch);
//		}
//	}
//	printf("\n%s", ans.c_str());
//	return 0;
//}