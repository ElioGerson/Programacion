
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	int continuar;
	do{
	
	float a,aa,b,bb,c,cc,pi,resp,area,perimetro,p;
	int lados;
	cout << "ingrese la cantidad de lados conocidos" << endl;
	cin >> lados;
	switch (lados) {
	case 1:
		cout << "el lado es opuesto a algun angulo conocido?" << endl;
		cout << "1.Si" << endl;
		cout << "2.No" << endl;
		cin >> resp;
		if (resp==1) {
			cout << "ingrese el lado conocido y el angulo opuesto en grados" << endl;
			cin >> a >> aa;
			cout << "ingrese el otro angulo en grados" << endl;
			cin >> bb;
			b = a*sin(bb*M_PI/180)/sin(aa*M_PI/180);
			cc = 180-(aa+bb);
			c = a*sin(cc*M_PI/180)/sin(aa*M_PI/180);
		} else {
			cout << "ingrese el lado conocido" << endl;
			cin >> a;
			cout << "ingrese los angulos en grados" << endl;
			cin >> bb >> cc;
			aa = 180-bb-cc;
			b = a*sin(bb*M_PI/180)/sin(aa*M_PI/180);
			c = a*sin(cc*M_PI/180)/sin(aa*M_PI/180);
		}
		break;
	case 2:
		cout << "el angulo conocido es opuesto al lado desconocido?" << endl;
		cout << "1.Si" << endl;
		cout << "2.No" << endl;
		cin >> resp;
		if (resp==1) {
			cout << "ingrese los lados" << endl;
			cin >> a >> b;
			cout << "Ingrese el angulo en grados" << endl;
			cin >> cc;
			c = pow((a*a+b*b-2*a*b*cos(cc*M_PI/180)),0.5);
			aa = acos((b*b+c*c-a*a)/(2*b*c))*180/M_PI;
			bb = 180-aa-cc;
		} else {
			cout << "ingrese el lado,y su angulo opuesto en grados" << endl;
			cin >> a >> aa;
			cout << "Ingrese el lado restante" << endl;
			cin >> b;
			bb = asin(b*sin(aa*M_PI/180)/a)*180/M_PI;
			cc = 180-aa-bb;
			c = pow((a*a+b*b+2*a*b*cos(cc*M_PI/180)),0.5);
		}
		break;
	case 3:
		cout << "Ingrese el valor de los lados" << endl;
		cin >> a >> b >> c;
		aa = acos((b*b+c*c-a*a)/(2*b*c))*180/M_PI;
		bb = acos((a*a+c*c-b*b)/(2*a*c))*180/M_PI;
		cc = 180-aa-bb;
		break;
	default:
		cout << "invalido" << endl;
	}
	perimetro=a+b+c;
	p=perimetro/2;
	area=pow(p*(p-a)*(p-b)*(p-c),0.5);
	
	cout<<"Los resultados obtenidos son los sigientes"<<endl;
	cout << "A=" << a << "[u]" <<endl;
	cout << "B=" << b << "[u]" <<endl;
	cout << "C=" << c << "[u]" <<endl;
	cout << "a=" << aa << "[grad]" <<endl;
	cout << "b=" << bb << "[grad]" <<endl;
	cout << "c=" << cc << "[grad]" <<endl;
	cout << "Area=" << area <<"[u^2]" << endl;
	cout << "Perimetro=" << perimetro<<"[u]" << endl;
	cout<<"ingrese 0 si desea continuar,o cualquier otro numero para salir"<<endl;
	cin>>continuar;	
	system("cls");
 }while(continuar==0);
    cout<<"Hasta luego"<<endl;
	return 0;
}

