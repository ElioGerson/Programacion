
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float det,n;
	float elementos[100];
	int i,j;
	cout<<"\tMATRIZ DE VANDERMONDE"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout << "Ingrese el orden de la matriz " << endl;
	cin >> n;
	for (i=0;i<=n-1;i++) {
		cout << "ingrese el elemento a[" << i+1 << "]" << endl;
		cin >> elementos[i];
	}
	cout << "La matriz generada es:" << endl;
	for (j=0;j<=n-1;j++) {
		cout<<"\t";
		for (i=0;i<=n-1;i++) {
			cout << pow(elementos[j],i) << " ";
		}
		cout << " " << endl;
	}
	cout << "su determinante es:" << endl;
	det = 1;
	for (j=0;j<=n-1;j++) {
		for (i=0;i<=n-1;i++) {
			if (i<j) {
				det = det*(elementos[j]-elementos[i]);
			}
		}
	}
	cout << "\tdet=" << det << endl;
	return 0;
}

