#include<iostream>
#include<conio.h>
using namespace std;
class multi {
private:
	int a1 , a2 , b1 , b2 , c1 , c2;
public:
	multi();
	void read2();
	void zarb();
	void gam();
	void tafrig();
	void tagsim();
	void editfirst();
	void editsecond();
	
};
multi::multi() {
	cout << "  2 "<<endl;
	cout << "ax +bx+c"<<endl;
	cout << "inter a =";
	cin >> a1;
	cout << "inter b =";
	cin >> b1;
	cout << "inter c =";
	cin >> c1;
}
void multi::read2() {
	cout <<endl<< "  2 " << endl;
	cout << "ax +bx+c" << endl;
	cout << "inter second a =";
	cin >> a2;
	cout << "inter second b =";
	cin >> b2;
	cout << "inter second c =";
	cin >> c2;
}
void multi::zarb() {
	int s1 = a1 * a2;
	int s11 = a1 * a2;
	int s2 = (a1 * b2) + (b1 * a2);
	int s22 = (a1 * b2) + (b1 * a2);
	int s3 = (a1 * c2) + (b1 * b2) + (c1 * a2);
	int s33 = (a1 * c2) + (b1 * b2) + (c1 * a2);
	if (s11 < 0) {
		cout << " ";
		s11 *= -1;
	}
	for (int i = 0; s11 != 0; i++) {
		s11 /= 10;
		cout << " ";
	}
	cout << " 4  ";
	if (s22 < 0) {
		cout << " ";
		s22 *= -1;
	}
	for (int i = 0; s22 != 0; i++) {
		s22 /= 10;
		cout << " ";
	}
	cout << "  3 ";
	if (s33 < 0) {
		cout << " ";
		s33 *= -1;
	}
	for (int i = 0; s33 != 0; i++) {
		s33 /= 10;
		cout << " ";
	}
	cout << "   2  "<<endl;
	cout << s1 << "x +(" << s2 << ")x +(" << s3 << ")x +(" << (b1 * c2) + (c1 * b2) << ")x+(" << c1 * c2<<")";
}
void multi::gam() {
	int s1 = a1 + a2;
	int s11 = a1 + a2;
	int s2 = b1+b2;
	int s3 = c1+c2;
	if (s11 < 0) {
		cout << " ";
		s11 *= -1;
	}
	for (int i = 0; s11 != 0; i++) {
		s11 /= 10;
		cout << " ";
	}
	cout << " 2  "<<endl;
	cout << s1 << "x +(" << s2 << ")x +(" << s3<<")" ;
}
void multi::tafrig() {
	int s1 = a1 - a2;
	int s11 = a1 - a2;
	int s2 = b1 - b2;
	int s3 = c1 - c2;
	if (s11 < 0) {
		cout << " ";
		s11 *= -1;
	}
	for (int i = 0; s11 != 0; i++) {
		s11 /= 10;
		cout << " ";
	}
	cout << " 2  " << endl;
	cout << s1 << "x +(" << s2 << ")x +(" << s3 << ")";
}
void multi::tagsim() {
	float s = float(a1) / float(a2);
	if (s - int(s) == 0) {
		cout << endl<<"kharege gesmat = " << s<<endl;
		cout << "bagy mande = " << b1-(b2 * s) << "x + (" <<c1-( c2 * s)<<")";
	}
	else {
		cout << endl << "kharege gesmat = " << a1 <<"/"<<a2<< endl;
		cout << "bagy mande = " << b1 - (b2 * a1) <<"/"<<a2<< "x + (" << c1 - (c2 * a1) <<"/"<<a2<< ")";
	}
}
void multi::editfirst() {
	cout << "ax^2+bx+c" << endl;
	cout << "inter a =";
	cin >> a1;
	cout << "inter b =";
	cin >> b1;
	cout << "inter c =";
	cin >> c1;
}
void multi::editsecond() {
	cout << "ax^2+bx+c" << endl;
	cout << "inter second a =";
	cin >> a2;
	cout << "inter second b =";
	cin >> b2;
	cout << "inter second c =";
	cin >> c2;
}
void main() {
	multi a;
	a.read2();
	a.tagsim();
}
