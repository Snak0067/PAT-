//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
///*30��*/
//const int maxn = 100;
//int N, M, K, Q, processingTime, p = 0;
//class Customer {
//public:
//	int processTime, startHour = 8, startMinute = 0, endHour = 8, endMinute = 0;
//	Customer(int time) { processTime = time; }
//	int compare(Customer customer) {
//		return (endHour * 60 + endMinute) <= (customer.endHour * 60 + customer.endMinute);
//	}
//};
//vector<Customer> V[maxn];
//vector<Customer> customerArray;
//
//Customer getCustomer(Customer lastCustomer, Customer currentCustomer) {
//	currentCustomer.endMinute = (lastCustomer.endMinute + currentCustomer.processTime) % 60;
//	currentCustomer.endHour = lastCustomer.endHour + (lastCustomer.endMinute + currentCustomer.processTime) / 60;
//	currentCustomer.startHour = lastCustomer.endHour;
//	currentCustomer.startMinute = lastCustomer.endMinute;
//	return currentCustomer;
//}
//
////�ж��ĸ����п��Խ��з���ȴ�
//int getIndex_capacity() {
//	int index = 0;
//	for (int i = 1; i < N; i++) {
//		if (V[i].size() < V[index].size()) {
//			index = i;
//		}
//	}
//	return index;
//}
//int getIndex_time() {
//	int index = 0;
//	Customer leastTimeCustomer = V[index].front();
//	for (int i = 1; i < N; i++) {
//		Customer current = V[i].front();
//		if (leastTimeCustomer.compare(current) == 0) {
//			leastTimeCustomer = current;
//			index = i;
//		}
//	}
//	return index;
//}
//void allocate() {
//	while (p < K) {
//		int index = getIndex_capacity();
//		//��ǰ����ʣ���������Խ���
//		if (V[index].size() < M) {
//			if (V[index].size() != 0) {
//				//����ǰ�˿͵�ʱ����м��㣬ͨ���������ã�ͨ����һλ�˿͵Ľ���ʱ������Ĺ���ʱ���������Ľ���ʱ��
//				customerArray[p] = getCustomer(V[index].back(), customerArray[p]);
//			}
//			else {
//				customerArray[p].endHour = customerArray[p].endHour + customerArray[p].processTime / 60;
//				customerArray[p].endMinute = (customerArray[p].endMinute + customerArray[p].processTime) % 60;
//			}
//			//��ʣ���������Ķ��м���ù˿�
//			V[index].push_back(customerArray[p]);
//			p++;
//		}
//		else {//��ǰû��ʣ���������Խ���
//			int leastIndex = getIndex_time();
//			//�Ƴ���ǰ����ʱ����̵����ж��е�ͷ
//			V[leastIndex].erase(V[leastIndex].begin());
//		}
//
//	}
//}
//
//int main() {
//	cin >> N >> M >> K >> Q;
//	for (int i = 0; i < K; i++) {
//		cin >> processingTime;
//		customerArray.push_back(Customer(processingTime));
//	}
//	allocate();
//	for (int i = 0; i < Q; i++) {
//		cin >> p;
//		p = p - 1;
//		if (customerArray[p].startHour < 17) {
//			if (customerArray[p].endHour >= 10) {
//				cout << customerArray[p].endHour << ":";
//			}
//			else {
//				cout << "0" << customerArray[p].endHour << ":";
//			}
//			if (customerArray[p].endMinute >= 10) {
//				cout << customerArray[p].endMinute << endl;
//			}
//			else {
//				cout << "0" << customerArray[p].endMinute << endl;
//			}
//		}
//		else if (customerArray[p].endHour == 17 && customerArray[p].endMinute == 0) {
//			cout << "17:00" << endl;
//		}
//		else {
//			cout << "Sorry" << endl;
//		}
//	}
//	return 0;
//}