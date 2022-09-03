//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int INF = 999999999;
//unordered_map<string, vector<int>>transfer;//中转站 站点i对应 a,b,c等几条线路
//unordered_map<string, int>xuhao;
//int G[10005][11], costDis = INF;//点i和线j是否相通
//vector<string>line[11];//地铁线
//bool visitLine[11], visit[10005];
//int n, k, index = 1, destination_index;
//string station, start, destination;
//vector<int>ans;
//vector<string>anssite;
////site_begin是当前遍历的地铁所在的站台号，site_end是目的地的地铁的站台号
//void dfs(int station, int site_begin, int site_end, vector<int>temp, vector<string>siteTemp, int distance) {
//	int i = site_begin + 1, j = site_begin - 1, len = line[station].size();
//	if (G[destination_index][station] != 0) {
//		int minsite = min(site_begin, site_end), maxsite = max(site_begin, site_end);
//		int dis = maxsite - minsite;
//		if (line[station][0] == line[station][len - 1]) {
//			if (line[station][site_begin] == line[station][0] || line[station][site_end] == line[station][len - 1]) {
//				dis = min(dis, len - dis - 1);
//			}
//		}
//		if (costDis > distance + dis || ((costDis == distance + dis) && temp.size() < ans.size())) {
//			ans = temp;
//			anssite = siteTemp;
//			costDis = distance + dis;
//		}
//		return;
//	}
//	if (line[station][0] == line[station][len - 1]) {//环形铁路
//		while (i < len) {
//			while (i < len && transfer.find(line[station][i]) == transfer.end())i++;
//			if (i < len && visit[xuhao[line[station][i]]] == false) {
//				visit[xuhao[line[station][i]]] = true;
//				vector<int>tran = transfer[line[station][i]];
//				for (int u = 0; u < tran.size(); u++)
//				{
//					int nextStation = tran[u];
//					if (visitLine[nextStation] == false) {
//						visitLine[nextStation] = true;
//						siteTemp.push_back(line[station][i]);
//						temp.push_back(nextStation);
//						int realSite = 0;
//						while (line[nextStation][realSite] != line[station][i])realSite++;
//						int tempDistance = min(i - site_begin, len + site_begin - i);
//						dfs(tran[u], realSite, site_end, temp, siteTemp, tempDistance + distance);
//						visitLine[nextStation] = false;
//						siteTemp.pop_back();
//						temp.pop_back();
//					}
//				}
//				visit[xuhao[line[station][i]]] = false;
//			}
//			i++;
//		}
//		while (j >= 0) {
//			while (j >= 0 && transfer.find(line[station][j]) == transfer.end())j--;
//			if (j >= 0 && visit[xuhao[line[station][j]]] == false) {
//				vector<int>tran = transfer[line[station][j]];
//				visit[xuhao[line[station][j]]] = true;
//				for (int u = 0; u < tran.size(); u++)
//				{
//					int nextStation = tran[u];
//					if (visitLine[nextStation] == false) {
//						visitLine[nextStation] = true;
//						siteTemp.push_back(line[station][j]);
//						temp.push_back(nextStation);
//						int realSite = 0;
//						while (line[nextStation][realSite] != line[station][j])realSite++;
//						int tempDistance = min(site_begin - j, len + j - site_begin);
//						dfs(tran[u], realSite, site_end, temp, siteTemp, tempDistance + distance);
//						visitLine[nextStation] = false;
//						siteTemp.pop_back();
//						temp.pop_back();
//					}
//				}
//				visit[xuhao[line[station][j]]] = false;
//			}
//			j--;
//		}
//	}
//	else {//非环形
//		while (i < len) {
//			while (i < len && transfer.find(line[station][i]) == transfer.end())i++;
//			if (i < len && visit[xuhao[line[station][i]]] == false) {
//				visit[xuhao[line[station][i]]] = true;
//				vector<int>tran = transfer[line[station][i]];
//				for (int u = 0; u < tran.size(); u++)
//				{
//					int nextStation = tran[u];
//					if (visitLine[nextStation] == false) {
//						visitLine[nextStation] = true;
//						siteTemp.push_back(line[station][i]);
//						temp.push_back(nextStation);
//						int realSite = 0;
//						while (line[nextStation][realSite] != line[station][i])realSite++;
//						dfs(tran[u], realSite, site_end, temp, siteTemp, i - site_begin + distance);
//						visitLine[nextStation] = false;
//						siteTemp.pop_back();
//						temp.pop_back();
//					}
//				}
//				visit[xuhao[line[station][i]]] = false;
//			}
//			i++;
//		}
//		while (j >= 0) {
//			while (j >= 0 && transfer.find(line[station][j]) == transfer.end())j--;
//			if (j >= 0 && visit[xuhao[line[station][j]]] == false) {
//				vector<int>tran = transfer[line[station][j]];
//				visit[xuhao[line[station][j]]] = true;
//				for (int u = 0; u < tran.size(); u++)
//				{
//					int nextStation = tran[u];
//					if (visitLine[nextStation] == false) {
//						visitLine[nextStation] = true;
//						siteTemp.push_back(line[station][j]);
//						temp.push_back(nextStation);
//						int realSite = 0;
//						while (line[nextStation][realSite] != line[station][j])realSite++;
//						dfs(tran[u], realSite, site_end, temp, siteTemp, site_begin - j + distance);
//						visitLine[nextStation] = false;
//						siteTemp.pop_back();
//						temp.pop_back();
//					}
//				}
//				visit[xuhao[line[station][j]]] = false;
//			}
//			j--;
//		}
//
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &k);
//		for (int u = 1; u <= k; u++)
//		{
//			cin >> station;
//			if (xuhao.find(station) == xuhao.end())xuhao[station] = index++;
//			if (!(u == k && line[i][0] == station))transfer[station].push_back(i);
//			G[xuhao[station]][i] = u;//站点station相对于线路i的排列位置为u
//			line[i].push_back(station);
//		}
//	}
//	auto it = transfer.begin();
//	unordered_map<string, vector<int>>transferTemp;
//	while (it != transfer.end()) {
//		if (it->second.size() > 1)transferTemp[it->first] = it->second;
//		it++;
//	}
//	transfer = transferTemp;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		cin >> start >> destination;
//		int a = xuhao[start], b = xuhao[destination], distance = 0, u = 1, subway1 = 1, subwuay2 = 1;
//		destination_index = b;
//		bool oneLine = false;
//		for (; u <= n; u++) {
//			if (G[a][u] != 0) subway1 = u;
//			if (G[b][u] != 0) subwuay2 = u;
//			if (G[a][u] != 0 && G[b][u] != 0) {
//				oneLine = true; break;
//			}
//		}
//		if (!oneLine) {//不在一趟线上
//			int xuhao1 = 0, xuhao2 = 0;
//			while (line[subway1][xuhao1] != start)xuhao1++;
//			while (line[subwuay2][xuhao2] != destination)xuhao2++;
//			vector<int>tempsite;
//			vector<string>siteTemp;
//			tempsite.push_back(subway1);
//			siteTemp.push_back(start);
//			fill(visitLine, visitLine + 11, false);
//			fill(visit, visit + 10005, false);
//			visit[a] = true;
//			visitLine[subway1] = true;
//			dfs(subway1, xuhao1, xuhao2, tempsite, siteTemp, 0);
//			anssite.push_back(destination);
//			printf("%d\n", costDis);
//			for (int i = 0; i < ans.size(); i++)
//			{
//				printf("Take Line#%d from %s to %s.\n", ans[i], anssite[i].c_str(), anssite[i + 1].c_str());
//			}
//			costDis = INF;
//			ans.clear();
//			anssite.clear();
//		}
//		else {//在一趟线上
//			int nextu, costAll = INF;
//			do {
//				int minsite = min(G[a][u], G[b][u]), maxsite = max(G[a][u], G[b][u]), len = line[u].size();
//				distance = maxsite - minsite;
//				if (line[u][0] == line[u][len - 1]) {
//					if (start == line[u][0] || destination == line[u][len - 1]) {
//						distance = min(distance, len - distance - 1);
//					}
//				}
//				if (distance < costAll) {
//					costAll = distance;
//					nextu = u;
//				}
//				u++;
//				for (; u <= n; u++) {
//					if (G[a][u] != 0) subway1 = u;
//					if (G[b][u] != 0) subwuay2 = u;
//					if (G[a][u] != 0 && G[b][u] != 0) {
//						oneLine = true; break;
//					}
//				}
//			} while (u <= n);
//
//			printf("%d\nTake Line#%d from %s to %s.\n", costAll, nextu, start.c_str(), destination.c_str());
//		}
//	}
//
//	return 0;
//}