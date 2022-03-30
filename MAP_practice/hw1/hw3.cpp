#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdbool>
using namespace std;

///* 3-1 */
//class Random {
//public:
//	Random() { srand((unsigned)time(0)); }
//	int next() { return rand(); }
//	int nextInRange(int a, int b) { return rand() % (b - a + 1) + a; }
//};
//
//int main() {
//	Random r;
//	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
//		cout << n << ' ';
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

/* 3-2 */
class EvenRandom {
	int n;
public:
	int next();
	int nextInRange(int a, int b);
};

int EvenRandom::next() {
	int n;
	do {
		n = rand();
	} while (n % 2 == 1);
	return n;
}

int EvenRandom::nextInRange(int a, int b) {
	int n;
	do {
		n = rand() % (b - a + 1) + a;
	} while (n % 2 == 1);
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2���� 10 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}