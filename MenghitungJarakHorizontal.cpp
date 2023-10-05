#include <bits/stdc++.h>
using namespace std;
// jarak = ( v * v * sin(s) ) / 10

int main ()
{
	cout<<"Menghitung Jarak Horizontal Terjatuh Boro\n";
	cout<<"=========================================\n";
	double s, v;
	cout << "Masukan Sudut Penerbangan burung : ";
	cin >> s;
	cout << endl;
	cout << "masukan Kecepatan burung : ";
	cin >> v;
	cout << endl;
	v = pow(v,2);
	float jarak;
	float sinA = sin(2 * s * 3.141 / 180);
	jarak = (v * sinA) / 10;
	cout << fixed << setprecision(1) << "Jarak terjatuh Boro adalah : " << jarak;
}
