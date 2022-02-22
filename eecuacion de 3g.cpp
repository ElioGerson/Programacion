
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

float raizc(float x);

float raizc(float x) {
	float rcub;
	float a=0.33333333333;
	if (x>0) {
		rcub = pow(x,a);
	} else {
		x = -1*x;
		rcub = -1*pow(x,a);
	}
	return rcub;
}

 main() {
	float a,b,c,d,a1,a2,a3,r,q,s1,s2;
	
	cout << "ingrese las constantes a,b,c,d" << endl;
	cin >> a >> b >> c >> d;
	a1 = b/a;
	a2 = c/a;
	a3 = d/a;
	q = (3*a2-a1*a1)/9;
	r = (9*a1*a2-27*a3-2*a1*a1*a1)/54;
	d = q*q*q+r*r;
	
	if (d==0) {
		s1 = raizc(r);
		s2 = raizc(r);
		cout << "x1=" << s1+s2-a1/3 << endl;
		cout << "x2=" << -1*(s1+s2)/2-(a1/3) << endl;
		cout << "x3=" << -(s1+s2)/2-a1/3 << endl;
	} else {
		if (d>0) {
			s1 = raizc(r+pow(d,0.5));
			s2 = raizc(r-pow(d,0.5));
			
			cout << "x1=" << s1+s2-(a1/3) << endl;
			cout << "x2=" << -1*(s1+s2)/2-(a1/3) << " + (" << int((1.7320508)*10000*(s1-s2)/2+.5)/10000 << ")i" << endl;
			cout << "x3=" << -1*(s1+s2)/2-(a1/3) << " - (" << int((1.7320508)*10000*(s1-s2)/2+.5)/10000 << ")i" << endl;
		}
	}
	return 0;
}

