

#include<iostream>
using namespace std;

int main() {
	
	float c;
	int i,j,n,m;
	float q[100],r[100],a[100],b[100];
	cout<<"DIVISION DE POLINOMIOS POR EL METODO DE HORNER"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout << "ingrese el grado del dividendo" << endl;
	cin >> n;
	cout << "Ingrese el grado del divisor" << endl;
	cin >> m;
	if (n>m) {
		cout << "Ingrese los coeficientes del Dividendo" << endl;
		for (i=0;i<=n;i++) {
			cout << "x^[" << n-i << "]:" ;
			cin >> a[i];
		}
		cout << "\tingrese los coeficientes del divisor" << endl;
		
		for (i=0;i<=m;i++) {
			cout << "x^[" << m-i << "]: ";
			cin >> b[i];
		}
		float aux;
		aux=b[0];
		for (i=0;i<=n;i++) {
			a[i] = a[i]/aux;
			b[i] = (-1)*b[i]/aux;
		}
		q[0] = a[0];
	
	//cociente
		float c;
		for (i=1;i<=n;i++) {
			if(i<=n-m){
				c=0;
				for (int j=0;j<i;j++) {
					c=c+q[j]*b[i-j];
				}
				q[i] = c+a[i];
			}
			else{
				q[i]=0;
			}
		}
		cout<<"los coeficientes del cociente"<<endl;
		for (int j=0;j<=n-m;j++) {
			cout<<"x^["<<n-m-j<<"]: "<<q[j]<<endl;
		}
		
		//residuo
		
	for (i=n-m;i<=n;i++) {
				c=0;
				for (int j=i;j>=0;j--) {
					if(i-j+1>m){
						b[i-j+1]=0;
					}
					c=c+q[j]*b[i-j+1];
				}
			r[i-n+m]= c+a[i+1];
		
		}
		cout<<"los coeficientes del residuo"<<endl;
		for (int j=0;j<=m-1;j++) {
			cout<<"x^["<<m-1-j<<"]:"<<aux*r[j]<<endl;
	}
	
	} else {
		cout << "division impropia No calculable por el metode de horner" << endl;
	}
	return 0;
}

