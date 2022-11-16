#include <iostream>
#include <ctime>
using namespace std;
/*double powerA3(double a) {
	//double res = a * a * a;
	//return res;
	return a * a * a;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << x << " " << x3 << endl;
	}*/
/*double powerA2(double a) {
	return a * a;
}
double powerA4(double a) {
	return a * a * a * a;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << x << " " << x2 << " " << x4 << endl;
	}*/
/*double aMean(double x, double y) {
	return (x + y) / 2;
}
double gMean(double x, double y) {
	return sqrt(x * y);
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double k = rand() % 11;
		double n = rand() % 11;
		double sra = aMean(k, n);
		double srg = gMean(k, n);
		cout << k << " " << n << " " << sra << " " << srg << endl;
	}*/
/*double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return (a * a * sqrt(3)) / 4;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = rand() % 11;
		double p = triangleP(x);
		double s = triangleS(x);
		cout << x << " " << p << " " << s << endl;
	}*/


/*double rectP(double x1, double x2, double y1, double y2) {
	return (abs(x2 - x1) + abs(y2 - y1))*2;
} 
double rectS(int x1, int x2, int y1, int y2) {
	return abs(x2 - x1) * abs(y2 - y1);
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = rand() % 11;
		double y = rand() % 11;
		double z = rand() % 11;
		double c = rand() % 11;
		cout << x <<" "<< y<<" "<<z<<" "<<c<< " " << rectP(x, y, z, c) << " " << rectS(x, y, z, c) << endl;
	}*/
double digitSum(int k) {
	int s = 0; 
	while (k != 0) {
		s = s + k % 10;
		k = k / 10;
	}
		return s;
	}
int main() {
	srand(time(nullptr));
for (int i = 1; i <= 5; i++) {
	double x = rand() % 1001;
	cout << x <<' '<< digitSum(x) << endl;
}



}