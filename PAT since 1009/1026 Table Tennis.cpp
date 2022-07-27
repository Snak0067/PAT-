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
///*	����Ϸ����������ǰ��Ϸ��ʱ�������������  */
//bool cmp1(const table& t1, const table& t2) {
//	return t1.at_least_time < t2.at_least_time;
//}
///*	����Ϸ����������������  */
//bool cmp2(const table& t1, const table& t2) {
//	return t1.index < t2.index;
//}
///*	����Ұ��տ�ʼ��Ϸ��ʱ����������  */
//bool cmp3(const player& p1, const player& p2) {
//	return p1.t_begin < p2.t_begin;
//}
///*	�յ�vip�����ȣ�����������Ŵ�С��������  */
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
///* �ж����λ������С�������ȣ�ֻ��һ����λ��ֱ���ϣ�û�п�λ����-1*/
//int avaible_table_number(player myplayer) {
//	vector<table>avaibleList;
//	//�鿴����
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
////���ұ�vip�����ȵǵ�vip����
//int avaible_vip_table(int customerNum, int arraveTime) {
//	int num_table = 1, time_last = INT_MAX;
//	//��¼���������Ϸ��vip��������/����ʱ��
//	for (int i = 0; i < tableList.size(); i++) {
//		if (tableList[i].tag == 1 && tableList[i].at_least_time < time_last) {
//			num_table = i + 1;
//			time_last = tableList[i].at_least_time;
//		}
//	}
//	//�Ӹ���ͨ�˿�֮��鿴�Ƿ����ڴ˽���ʱ���絽�ĵ�һλvip�˿�
//	if (customerNum >= playList.size())return -1;
//	for (int i = customerNum; i < playList.size() && playList[i].t_arriving < time_last; i++) {
//		if (playList[i].tag == 1 && playList[i].visited == false) {
//			//�ҵ���vip�˿�,�Ըù˿���Ϣ���и�ֵ
//			playList[i].waitTime = (time_last - playList[i].t_arriving + 30) / 60;		//�˿͵ȴ���ʱ��
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
//	//����k������
//	for (int i = 0; i < k; i++) {
//		table mytable;
//		mytable.index = i + 1;
//		tableList.push_back(mytable);
//	}
//	//��ֵm��vip��
//	for (int i = 0; i < m; i++) {
//		cin >> k;
//		tableList[k - 1].tag = 1;
//	}
//	//������Ϸ
//	for (int i = 0; i < playList.size(); i++) {
//		if (playList[i].visited)continue;
//		else {
//			playList[i].visited = true;
//		}
//		//�жϵ�ǰ�Ƿ��п���
//		int tableNumber = avaible_table_number(playList[i]);
//		if (tableNumber != -1) {
//			playList[i].t_begin = playList[i].t_arriving;												//��Ϸ����ʱ��	
//			if (playList[i].t_begin >= 75600)continue;													//�������ʼ��ʱ��ص��ˣ����������ѭ��
//			playList[i].waitTime = 0;																	//�ȴ�ʱ��
//			tableList[tableNumber - 1].at_least_time = playList[i].t_begin + playList[i].playtime * 60; //�����´νӿ͵�����ʱ��
//			tableList[tableNumber - 1].num_server++;													//�����ӿ���+1
//		}
//		else {
//			//2.��������ʱ��û�п����������ȴ����У��ȴ������������������Ƚ�����Ϸ����֮ǰû��vip������vip�˿Ͳ��
//			if (playList[i].tag == 1 || avaible_vip_table(i + 1, playList[i].t_arriving) == -1) {
//				//���û��vip�˿ͣ��������ȴ����������ʼ����
//				int num_table = 1, time_last = INT_MAX;
//				for (int i = 0; i < tableList.size(); i++) {
//					if (tableList[i].at_least_time < time_last) {
//						num_table = i + 1;
//						time_last = tableList[i].at_least_time;
//					}
//				}
//
//				playList[i].waitTime = (time_last - playList[i].t_arriving + 30) / 60;			//�˿͵ȴ���ʱ��
//				playList[i].t_begin = time_last;												//�˿���Ϸ����ʱ��
//				if (time_last >= 75600)continue;												//�������ʼ��ʱ��ص��ˣ����������ѭ��
//				tableList[num_table - 1].at_least_time = time_last + playList[i].playtime * 60;	//�����´νӿ͵�����ʱ��
//				tableList[num_table - 1].num_server++;											//�����ӿ���+1
//			}
//			else {	//λ�ӱ������� ���½�������
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