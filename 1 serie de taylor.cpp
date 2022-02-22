
#include<iostream>
#include<cmath>
using namespace std;

int factorial(int m);

int factorial(int m) {
	int f;
	if (m==0) {
		f = 1;
	} else {
		f = m*factorial(m-1);
	}
	return f;
}

int main() {
	float x,e,s;
	int k,n;

	cout << "ingrese el valor de x" << endl;
	cin >> x;
	cout << "ingrese el valor de n" << endl;
	cin >> n;
	e=s=0;
	for (k=0;k<=n;k++) {
		e = e+(pow((x),k))/(factorial(k));
		s = s+(pow((-1),(k)))*(pow(x,(2*k+1)))/(factorial(2*k+1));
	}
	
	cout << "\tValores aproximados:"<<endl;
	cout << "e^"<<x<<"=" << e << endl;
	cout << "sen("<<x<<")=" << s << endl;
	return 0;
}

