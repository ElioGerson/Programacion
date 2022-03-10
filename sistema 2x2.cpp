#include<iostream>
using namespace std;

int main() {
	float a,b,c,d,f,g,x,det,yy;
	
	cout<<"\tSISTEMA DE DOS ECUACIONES CON DOS INCOGNITAS"<<endl;
	cout<<"\t\tax+b=c"<<endl;
	cout<<"\t\tdx+f=g"<<endl<<endl;
	cout << "ingrese al coeficientes de la primera ecuacion" << endl;
	cout<<"a= ";cin >> a ;
	cout<<"b= ";cin >> b ;
	cout<<"c= ";cin >> c ;
	cout << "\ningrese al coeficientes de la segunda ecuacion" << endl;

	cout<<"d= ";cin >> d ;
	cout<<"f= ";cin >> f ;
	cout<<"g= ";cin >> g ;
	
	system("cls");
	
	cout<<"Sistema introducido:"<<endl;
	cout<<"\t\t("<<a<<")x+("<<b<<")y="<<c<<endl;
	cout<<"\t\t("<<d<<")x+("<<f<<")y="<<g<<endl<<endl;
	cout<<"resultado obtenido:"<<endl;
	det = (a*f-d*b);
	if (det!=0) {
		x = (c*f-g*b)/det;
		yy = (a*g-d*c)/det;
		cout << "\t\tx=" << x << endl;
		cout << "\t\ty=" << yy << endl;
	} else {
		if (c*f-g*b==0) {
			cout << "Infinitas soluciones" << endl;
		} else {
			cout << "No existen soluciones" << endl;
		}
	}
	return 0;
}

