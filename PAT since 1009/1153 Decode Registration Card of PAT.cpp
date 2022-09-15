//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	string id;
//	string type, site, date, number;
//	int score;
//};
//vector<node>v;
//bool cmp(node n1, node n2) {
//	if (n1.score != n2.score)return n1.score > n2.score;
//	return n1.id < n2.id;
//}
//void type1(int xuhao, string input) {
//	vector<node>ans;
//	for (node nod : v) {
//		if (nod.type == input) {
//			ans.push_back(nod);
//		}
//	}
//	printf("Case %d: 1 %s\n", xuhao, input.c_str());
//	if (ans.size() == 0) {
//		printf("NA\n");
//		return;
//	}
//	sort(ans.begin(), ans.end(), cmp);
//	for (node nod : ans) {
//		printf("%s %d\n", nod.id.c_str(), nod.score);
//	}
//}
//void type2(int xuhao, string input) {
//	int num = 0, sum = 0;
//	for (node nod : v) {
//		if (nod.site == input) {
//			num++;
//			sum += nod.score;
//		}
//	}
//	printf("Case %d: 2 %s\n", xuhao, input.c_str());
//	if (num == 0) {
//		printf("NA\n");
//		return;
//	}
//	printf("%d %d\n", num, sum);
//}
//struct temp {
//	string site;
//	int num;
//};
//bool cmp1(temp t1, temp t2) {
//	if (t1.num != t2.num)return t1.num > t2.num;
//	return t1.site < t2.site;
//}
//void type3(int xuhao, string input) {
//	unordered_map<string, int>mmap;
//	vector<temp>t;
//	for (node nod : v) {
//		if (nod.date == input) {
//			mmap[nod.site]++;
//		}
//	}
//	printf("Case %d: 3 %s\n", xuhao, input.c_str());
//	if (mmap.size() == 0) {
//		printf("NA\n");
//		return;
//	}
//	auto it = mmap.begin();
//	while (it != mmap.end()) {
//		t.push_back(temp({ it->first,it->second }));
//		it++;
//	}
//	sort(t.begin(), t.end(), cmp1);
//	for (temp x : t) {
//		printf("%s %d\n", x.site.c_str(), x.num);
//	}
//}
//int main() {
//	int n, m, score;
//	string input, type, site, date, number;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input >> score;
//		type = input.substr(0, 1);
//		site = input.substr(1, 3);
//		date = input.substr(4, 6);
//		number = input.substr(10, 3);
//		v.push_back(node({ input,type,site,date,number,score }));
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> type >> input;
//		if (type == "1")type1(i + 1, input);
//		else if (type == "2")type2(i + 1, input);
//		else if (type == "3")type3(i + 1, input);
//	}
//	return 0;
//}