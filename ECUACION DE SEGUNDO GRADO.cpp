
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a,b,c,d;
	cout << "\tECUACION DE SEGUNDO GRADO" <<endl;
	cout << "\t ax^2 + bx + c = 0 " <<endl;
	cout << "ingrese los valores de a,b,c" << endl;
	cin >> a >> b >> c;
	d = b*b-4*a*c;
	cout << "Los resultados son los sigientes:" << endl;
	if (d>=0) {
		cout << "x1=" << (-b+pow((d),0.5))/(2*a) << endl;
		cout << "x2=" << (-b-pow((d),0.5))/(2*a) << endl;
	} else {
		d = -d;
		cout << "x1=" << (-b)/(2*a) << "+" << (pow((d),0.5))/(2*a) << "i" << endl;
		cout << "x2=" << (-b)/(2*a) << "-" << (pow((d),0.5))/(2*a) << "i" << endl;
	}
	return 0;
}

