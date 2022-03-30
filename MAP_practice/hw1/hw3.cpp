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
//	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}