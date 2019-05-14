
#include<iostream>
using namespace std;



int main() {
	int a, b, c, d, e, f;
	cout << "ingrese un intervalo" << endl;
	cin >> d >> e;
	a = d;
	while (a<=e) {
		b = 1;
		c = 0;
		while (b<=a) {
			if (a%b==0) {
				c = c+1;
			}
			b = b+1;
		}
		if (c==2) {
			cout << a << endl;
		}
		a = a+1;
	}
	return 0;
}

