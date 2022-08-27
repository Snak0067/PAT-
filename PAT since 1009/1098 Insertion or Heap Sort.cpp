//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void max_heapify(int arr[], int start, int end) {
//	//建立父节点指标和子节点指标
//	int dad = start;
//	int son = dad * 2 + 1;
//	while (son <= end) {
//		if (son + 1 <= end && arr[son + 1] > arr[son]) {
//			son = son + 1;
//		}
//		if (arr[son] < arr[dad])return;
//		swap(arr[son], arr[dad]);
//		dad = son;
//		son = dad * 2 + 1;
//	}
//}
//
//int main() {
//	int a[105], b[105], n, i, j;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	for (i = 0; b[i] <= b[i + 1] && i < n; )i++;
//	for (j = i + 1; a[j] == b[j] && j < n; )j++;
//	if (j == n) {
//		printf("Insertion Sort\n");
//		sort(a, a + i + 2);
//		for (i = 0; i < n - 1; i++)printf("%d ", a[i]);
//		printf("%d", a[i]);
//	}
//	else {
//		bool match = false;
//		for (i = n / 2 - 1; i >= 0; i--)
//		{
//			max_heapify(a, i, n - 1);
//		}
//		for (i = n - 1; i > 0; i--) {
//			swap(a[0], a[i]);
//			max_heapify(a, 0, i - 1);
//			if (match) {
//				printf("Heap Sort\n");
//				for (i = 0; i < n - 1; i++)printf("%d ", a[i]);
//				printf("%d", a[i]);
//				return 0;
//			}
//			else {
//				int u;
//				for (u = 0; u < n; u++) {
//					if (a[u] != b[u])break;
//				}
//				if (u == n)match = true;
//			}
//		}
//	}
//
//
//	return 0;
//}