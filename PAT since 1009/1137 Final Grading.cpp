//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	string name;
//	int gp = -1, gm = -1, gf = -1, g = -1;
//};
//unordered_map<string, node>mooc;
//vector<node>ans;
//bool cmp(node n1, node n2) {
//	if (n1.g != n2.g)return n1.g > n2.g;
//	return n1.name < n2.name;
//}
//int main() {
//	int p, m, n, d;
//	string name;
//	scanf_s("%d%d%d", &p, &m, &n);
//	for (int i = 0; i < p; i++)
//	{
//		cin >> name >> d;
//		mooc[name].gp = d;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> name >> d;
//		mooc[name].gm = d;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name >> d;
//		mooc[name].name = name;
//		mooc[name].gf = d;
//	}
//	auto it = mooc.begin();
//	while (it != mooc.end()) {
//		node nod = it->second;
//		if (nod.gm < nod.gf)
//			nod.g = nod.gf;
//		else
//			nod.g = (int)(nod.gm * 0.4 + nod.gf * 0.6 + 0.5);
//		if (nod.g >= 60 && nod.gp >= 200)ans.push_back(nod);
//		it++;
//	}
//	sort(ans.begin(), ans.end(), cmp);
//	for (node nod : ans) {
//		printf("%s %d %d %d %d\n", nod.name.c_str(), nod.gp, nod.gm, nod.gf, nod.g);
//	}
//	return 0;
//}