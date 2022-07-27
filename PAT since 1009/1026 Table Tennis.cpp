//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//struct player {
//	string s_arriveTime, s_beginTime;
//	int t_arriving = 0, t_begin, playtime, tag, waitTime;
//	bool visited = false;
//	bool operator<(const player& p)const {
//		return t_arriving < p.t_arriving;
//	}
//};
//struct table {
//	int index, num_server = 0, tag = 0, at_least_time = 0;
//};
///*	将游戏桌按结束当前游戏的时间进行升序排序  */
//bool cmp1(const table& t1, const table& t2) {
//	return t1.at_least_time < t2.at_least_time;
//}
///*	将游戏桌按桌号升序排序  */
//bool cmp2(const table& t1, const table& t2) {
//	return t1.index < t2.index;
//}
///*	将玩家按照开始游戏的时间升序排序  */
//bool cmp3(const player& p1, const player& p2) {
//	return p1.t_begin < p2.t_begin;
//}
///*	空的vip桌优先，空桌都按序号从小到大排序  */
//bool cmp4(const table& t1, const table& t2) {
//	if (t1.tag == t2.tag)return t1.index < t2.index;
//	return t1.tag > t2.tag;
//}
//vector<player>playList;
//vector<player>waitlist;
//vector<table>tableList;
//
//int convert_to_time(string t) {
//	int h, m, s;
//	h = stoi(t.substr(0, 2).c_str());
//	m = stoi(t.substr(3, 2).c_str());
//	s = stoi(t.substr(6, 2).c_str());
//	return s + 60 * m + 3600 * h;
//}
///* 有多个空位：号码小的桌优先；只有一个空位：直接上；没有空位返回-1*/
//int avaible_table_number(player myplayer) {
//	vector<table>avaibleList;
//	//查看空桌
//	for (int i = 0; i < tableList.size(); i++) {
//		if (tableList[i].at_least_time < myplayer.t_arriving) {
//			avaibleList.push_back(tableList[i]);
//		}
//	}
//	if (avaibleList.size() != 0) {
//		if (myplayer.tag == 1) {
//			sort(avaibleList.begin(), avaibleList.end(), cmp4);
//		}
//		else {
//			sort(avaibleList.begin(), avaibleList.end(), cmp2);
//		}
//		return avaibleList[0].index;
//	}
//	return -1;
//}
////查找被vip捷足先登的vip桌号
//int avaible_vip_table(int customerNum, int arraveTime) {
//	int num_table = 1, time_last = INT_MAX;
//	//记录最早结束游戏的vip桌的桌号/结束时间
//	for (int i = 0; i < tableList.size(); i++) {
//		if (tableList[i].tag == 1 && tableList[i].at_least_time < time_last) {
//			num_table = i + 1;
//			time_last = tableList[i].at_least_time;
//		}
//	}
//	//从该普通顾客之后查看是否有在此结束时间早到的第一位vip顾客
//	if (customerNum >= playList.size())return -1;
//	for (int i = customerNum; i < playList.size() && playList[i].t_arriving < time_last; i++) {
//		if (playList[i].tag == 1 && playList[i].visited == false) {
//			//找到该vip顾客,对该顾客信息进行赋值
//			playList[i].waitTime = (time_last - playList[i].t_arriving + 30) / 60;		//顾客等待的时间
//			playList[i].visited = true;
//			playList[i].t_begin = time_last;
//			tableList[num_table - 1].at_least_time = playList[i].t_begin + playList[i].playtime * 60;
//			tableList[num_table - 1].num_server++;
//			return num_table;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int n, k, m;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		player p;
//		cin >> p.s_arriveTime >> p.playtime >> p.tag;
//		p.playtime = p.playtime > 120 ? 120 : p.playtime;
//		p.t_arriving = convert_to_time(p.s_arriveTime);
//		if (p.t_arriving < 28800 || p.t_arriving >= 75600)continue;
//		playList.push_back(p);
//	}
//	sort(playList.begin(), playList.end(), less<player>());
//	cin >> k >> m;
//	//构造k个桌子
//	for (int i = 0; i < k; i++) {
//		table mytable;
//		mytable.index = i + 1;
//		tableList.push_back(mytable);
//	}
//	//赋值m个vip桌
//	for (int i = 0; i < m; i++) {
//		cin >> k;
//		tableList[k - 1].tag = 1;
//	}
//	//进行游戏
//	for (int i = 0; i < playList.size(); i++) {
//		if (playList[i].visited)continue;
//		else {
//			playList[i].visited = true;
//		}
//		//判断当前是否有空桌
//		int tableNumber = avaible_table_number(playList[i]);
//		if (tableNumber != -1) {
//			playList[i].t_begin = playList[i].t_arriving;												//游戏结束时间	
//			if (playList[i].t_begin >= 75600)continue;													//如果他开始的时间关店了，则跳过这个循环
//			playList[i].waitTime = 0;																	//等待时间
//			tableList[tableNumber - 1].at_least_time = playList[i].t_begin + playList[i].playtime * 60; //该桌下次接客的最早时间
//			tableList[tableNumber - 1].num_server++;													//该桌接客数+1
//		}
//		else {
//			//2.客人来的时候并没有空桌，则进入等待队列，等待结束的条件：在最先结束游戏的桌之前没有vip空桌和vip顾客插队
//			if (playList[i].tag == 1 || avaible_vip_table(i + 1, playList[i].t_arriving) == -1) {
//				//如果没有vip顾客，则慢慢等待最早结束开始的桌
//				int num_table = 1, time_last = INT_MAX;
//				for (int i = 0; i < tableList.size(); i++) {
//					if (tableList[i].at_least_time < time_last) {
//						num_table = i + 1;
//						time_last = tableList[i].at_least_time;
//					}
//				}
//
//				playList[i].waitTime = (time_last - playList[i].t_arriving + 30) / 60;			//顾客等待的时间
//				playList[i].t_begin = time_last;												//顾客游戏结束时间
//				if (time_last >= 75600)continue;												//如果他开始的时间关店了，则跳过这个循环
//				tableList[num_table - 1].at_least_time = time_last + playList[i].playtime * 60;	//该桌下次接客的最早时间
//				tableList[num_table - 1].num_server++;											//该桌接客数+1
//			}
//			else {	//位子被人抢了 重新进行评判
//				playList[i].visited = false;
//				i--;
//			}
//		}
//	}
//	sort(playList.begin(), playList.end(), cmp3);
//	for (int i = 0; i < playList.size(); i++) {
//		if (playList[i].t_begin > 75600)continue;
//		int hour = playList[i].t_begin / 3600;
//		int minute = playList[i].t_begin % 3600 / 60;
//		int second = playList[i].t_begin % 60;
//		string s_hour = (hour > 9 ? "" : "0") + to_string(hour);
//		string s_minute = (minute > 9 ? "" : "0") + to_string(minute);
//		string s_second = (second > 9 ? "" : "0") + to_string(second);
//		playList[i].s_beginTime = s_hour + ":" + s_minute + ":" + s_second;
//		cout << playList[i].s_arriveTime << " " << playList[i].s_beginTime << " " << playList[i].waitTime << endl;
//	}
//	cout << tableList[0].num_server;
//	for (int i = 1; i < tableList.size(); i++) {
//		cout << " " << tableList[i].num_server;
//	}
//	return 0;
//}