//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//char a[10000], b[10000], A[10000], B[10000];
//
//int main() {
//	int n, p = 0, q = 0;
//	scanf_s("%d", &n);
//	cin >> a >> b;
//	//cnta �� cntb ͨ��ɨ���ַ����õ�С�������ڵ��±�
//	int cnta = strlen(a), cntb = strlen(b);
//	for (int i = 0; i < strlen(a); i++) {
//		if (a[i] == '.') {
//			cnta = i; 
//			break;
//		}
//	}
//	for (int i = 0; i < strlen(b); i++) {
//		if (b[i] == '.') {
//			cntb = i; 
//			break;
//		}
//	}
//	//���ǵ�����ǰ���ж�����㣬��p��qͨ��ɨ���ַ���ʹ p q ��ʼ�ڵ�һ����0���ҷ�С���㣩�����±�
//	int indexa = 0, indexb = 0;
//	while (a[p] == '0' || a[p] == '.')p++;
//	while (b[q] == '0' || b[q] == '.')q++;
//	//����С�����λ�ú͵�һ�����ֵ�λ�ý����ж�ָ��
//	// ���cnta >= p ��˵��С�����ڵ�һ����ʼ�ķ�0�����±���ұߣ���ô��ѧ��������ָ��Ϊcnta - p ; ����Ӧ��Ϊcnta - p + 1; �ַ���bͬ��
//	if (cnta >= p) {//123.45 cnta=3 p=0 cntaΪ 3		
//		cnta = cnta - p; //12345 cnta=5 p=0 cnta= 5
//	}
//	else {//0.0123 cnta=1 p=3 cnta = -1  
//		cnta = cnta - p + 1;
//	}
//	if (cntb >= q) {//123.45 cnta=3 p=0 cntaΪ 3		
//		cntb = cntb - q; //12345 cnta=5 p=0 cnta= 5
//	}
//	else {//0.0123 cnta=1 p=3 cnta = -1  
//		cntb = cntb - q + 1;
//	}
//	//��� p �� q �����ַ������ȣ� ˵���ַ����� 0
//	if (p == strlen(a))cnta = 0;
//	if (q == strlen(b))cntb = 0;
//	while (indexa < n) {
//		if (a[p] != '.' && p < strlen(a)) {
//			A[indexa++] = a[p];
//		}
//		else if (p >= strlen(a))A[indexa++] = '0';
//		p++;
//	}
//	while (indexb < n) {
//		if (b[q] != '.' && q < strlen(b)) {
//			B[indexb++] = b[q];
//		}
//		else if (q >= strlen(b))
//			B[indexb++] = '0';
//		q++;
//	}
//	if (strcmp(A, B) == 0 && cnta == cntb) {
//		printf("YES 0.%s*10^%d", A, cnta);
//	}
//	else {
//		printf("NO 0.%s*10^%d 0.%s*10^%d", A, cnta, B, cntb);
//	}
//	return 0;
//}