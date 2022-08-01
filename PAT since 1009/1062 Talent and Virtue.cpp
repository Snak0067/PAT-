//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct man {
//	string id;
//	int vg, tg;
//};
//bool cmp(man m1, man m2) {
//	int total1 = m1.tg + m1.vg;
//	int total2 = m2.tg + m2.vg;
//	if (total1 != total2) {
//		return total1 > total2;
//	}
//	else {
//		if (m1.vg != m2.vg)return m1.vg > m2.vg;
//		return m1.id < m2.id;
//	}
//}
//vector<man>sage;
//vector<man>nobleman;
//vector<man>normalMan;
//vector<man>smallMan;
//
//int main() {
//	int n, lowLine, highLine;
//	scanf_s("%d%d%d", &n, &lowLine, &highLine);
//	for (int i = 0; i < n; i++) {
//		man m;
//		cin >> m.id;
//		scanf_s("%d%d", &m.vg, &m.tg);
//		if (m.vg >= highLine && m.tg >= highLine)sage.push_back(m);
//		else if (m.vg >= highLine && m.tg >= lowLine)nobleman.push_back(m);
//		else if (m.vg >= lowLine && m.tg >= lowLine && m.vg >= m.tg)normalMan.push_back(m);
//		else if (m.vg >= lowLine && m.tg >= lowLine)smallMan.push_back(m);
//	}
//	sort(sage.begin(), sage.end(), cmp);
//	sort(nobleman.begin(), nobleman.end(), cmp);
//	sort(normalMan.begin(), normalMan.end(), cmp);
//	sort(smallMan.begin(), smallMan.end(), cmp);
//	printf("%d\n", sage.size() + nobleman.size() + normalMan.size() + smallMan.size());
//	for (int i = 0; i < sage.size(); i++)
//	{
//		printf("%s %d %d\n", sage[i].id.c_str(), sage[i].vg, sage[i].tg);
//	}
//	for (int i = 0; i < nobleman.size(); i++)
//	{
//		printf("%s %d %d\n", nobleman[i].id.c_str(), nobleman[i].vg, nobleman[i].tg);
//	}
//	for (int i = 0; i < normalMan.size(); i++)
//	{
//		printf("%s %d %d\n", normalMan[i].id.c_str(), normalMan[i].vg, normalMan[i].tg);
//	}
//	for (int i = 0; i < smallMan.size(); i++)
//	{
//		printf("%s %d %d\n", smallMan[i].id.c_str(), smallMan[i].vg, smallMan[i].tg);
//	}
//
//	return 0;
//}