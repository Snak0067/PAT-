//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int dis[100005], n, m, start, destination;
//
//
//int main() {
//	cin >> n;
//	dis[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &dis[i]);
//		dis[i] += dis[i - 1];
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> start >> destination;
//		if (start == destination) {
//			cout << "0" << endl; continue;
//		}
//		if (start > destination)swap(start, destination);
//		int cost = dis[destination - 1] - dis[start - 1];
//		cout << min(cost, dis[n] - cost) << endl;
//	}
//	return 0;
//}