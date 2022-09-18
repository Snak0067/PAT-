//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	string add;
//	int v;
//	string next;
//};
//map<string, node>mmap;
//vector<node>a, b, ans;
//int main() {
//	string roota, rootb, add, next;
//	int n, val;
//	cin >> roota >> rootb >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> add >> val >> next;
//		mmap[add] = node({ add,val,next });
//	}
//	string temp = roota;
//	while (temp != "-1") {
//		a.push_back(mmap[temp]);
//		temp = mmap[temp].next;
//	}
//	temp = rootb;
//	while (temp != "-1") {
//		b.push_back(mmap[temp]);
//		temp = mmap[temp].next;
//	}
//	if (a.size() < b.size())swap(a, b);
//	int index = 0;
//	reverse(b.begin(), b.end());
//	for (int i = 1; i <= a.size(); i++) {
//		ans.push_back(a[i - 1]);
//		if (i % 2 == 0 && index < b.size()) {
//			ans.push_back(b[index++]);
//		}
//	}
//	int len = ans.size();
//	for (int i = 0; i < len - 1; i++)
//	{
//		cout << ans[i].add << " " << ans[i].v << " " << ans[i + 1].add << endl;
//	}
//	cout << ans[len - 1].add << " " << ans[len - 1].v << " " << -1 << endl;
//	return 0;
//}