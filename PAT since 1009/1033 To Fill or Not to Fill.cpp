//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//const int INF = 999999999;
//int N;
//double max_capacity, allDistance, dis_avg;
//struct tank {
//	double price, distance;
//};
//bool cmp(const tank& t1, const tank& t2) {
//	return t1.distance < t2.distance;
//}
//
//int main() {
//	cin >> max_capacity >> allDistance >> dis_avg >> N;
//	int currentGasIndex = 0;
//	double cost = 0, oil = 0, maxDistance = 0;
//	vector<tank> tanks(N);
//	for (int i = 0; i < N; i++) {
//		scanf_s("%lf%lf", &tanks[i].price, &tanks[i].distance);
//	}
//	sort(tanks.begin(), tanks.end(), cmp);
//	if (tanks[0].distance != 0) {
//		cout << "The maximum travel distance = 0.00";
//		return 0;
//	}
//	for (int i = 0; i < tanks.size(); i++) {
//		maxDistance = tanks[i].distance + max_capacity * dis_avg;
//		if (maxDistance > allDistance)break;
//	}
//	if (maxDistance < allDistance) {
//		printf_s("The maximum travel distance = %.2f", maxDistance);
//		return 0;
//	}
//	int index, lowest_price_index, second_price_index;
//	double lowPrice;
//	while (currentGasIndex < N) {
//		double Max_d_available = tanks[currentGasIndex].distance + max_capacity * dis_avg;
//		index = currentGasIndex + 1, lowest_price_index = currentGasIndex;
//		while (index < N && tanks[index].distance < Max_d_available) {
//			if (tanks[index].price < tanks[lowest_price_index].price) {
//				lowest_price_index = index;
//			}
//			index++;
//		}
//		if (currentGasIndex == lowest_price_index) {
//			//δ���ɴ��λ�ļ۸����վ�ĵ�λ�ǵ�ǰ��λ
//			//�����һվ���յ㣬��ֻ�Ӹոպõ�����
//			if ((tanks[currentGasIndex].distance + max_capacity * dis_avg) > allDistance) {
//				double oil_need = (allDistance - tanks[currentGasIndex].distance) / dis_avg;
//				cost = cost + (oil_need - oil) * tanks[currentGasIndex].price;
//				currentGasIndex++;
//				break;
//			}
//			else {
//				//�����������
//				cost += (max_capacity - oil) * tanks[currentGasIndex].price;
//			}
//			//�ҵ��۸�ڶ���ͼ���վ��λ
//			second_price_index = currentGasIndex + 1;
//			index = currentGasIndex + 1;
//			lowPrice = INF;
//			while (index < N && tanks[index].distance < Max_d_available) {
//				if (tanks[index].price < lowPrice) {
//					lowPrice = tanks[index].price;
//					second_price_index = index;
//				}
//				index++;
//			}
//			//��һ������վ�� �۸�ڶ��͵ĵ�λ����������
//			oil = max_capacity - (tanks[second_price_index].distance - tanks[currentGasIndex].distance) / dis_avg;
//			currentGasIndex = second_price_index;
//		}
//		else {
//			//δ���ɴ��λ�ļ۸����վ�ĵ�λ���ǵ�ǰ��λ
//			//�ҵ��۸�ڶ���ͼ���վ��λ
//			second_price_index = currentGasIndex;
//			index = currentGasIndex + 1;
//			lowPrice = tanks[currentGasIndex].price;
//			while (index < lowest_price_index && tanks[index].distance < Max_d_available) {
//				if (tanks[index].price < lowPrice) {
//					lowPrice = tanks[index].price;
//					second_price_index = index;
//				}
//				index++;
//			}
//			//û�еڶ��͵ĵ�λ
//			int nextIndex = (currentGasIndex == second_price_index ? lowest_price_index : second_price_index);
//			double oil_add = (tanks[nextIndex].distance - tanks[currentGasIndex].distance) / dis_avg - oil;
//			oil = 0;
//			cost += oil_add * tanks[currentGasIndex].price;
//			currentGasIndex = nextIndex;
//		}
//	}
//	printf_s("%.2f", cost);
//	return 0;
//}