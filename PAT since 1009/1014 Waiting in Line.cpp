//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
///*30分*/
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
////判断哪个队列可以进行服务等待
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
//		//当前还有剩余容量可以进入
//		if (V[index].size() < M) {
//			if (V[index].size() != 0) {
//				//将当前顾客的时间进行计算，通过函数调用，通过上一位顾客的结束时间和他的过程时间计算出他的结束时间
//				customerArray[p] = getCustomer(V[index].back(), customerArray[p]);
//			}
//			else {
//				customerArray[p].endHour = customerArray[p].endHour + customerArray[p].processTime / 60;
//				customerArray[p].endMinute = (customerArray[p].endMinute + customerArray[p].processTime) % 60;
//			}
//			//将剩余容量最多的队列加入该顾客
//			V[index].push_back(customerArray[p]);
//			p++;
//		}
//		else {//当前没有剩余容量可以进入
//			int leastIndex = getIndex_time();
//			//移除当前结束时间最短的那列队列的头
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