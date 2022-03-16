
#include <iostream>
#include <math.h>
using namespace std;

int tambah (int a, int b)
{
	int hasil;
	hasil = a+b;
	return hasil;
}
int kurang (int x, int y)
{
	int total;
	total = x-y;
	return total;
}
int kali (int f, int g)
{
	int hasilf;
	hasilf = f*g;
	return hasilf;
}
int bagi (int e, int h)
{
	int hasile;
	hasile = e/h;
	return hasile;
}
int pangkat (int n, int m)
{
	int hasiln;
	hasiln = pow(n,m);
	return hasiln;
}
int akar (int v)
{
	int hasilv;
	hasilv = sqrt(v);
	return hasilv;
}
void cetakgaris (int i)
{
	int p;
	for (p = 0; p <= i; p++)
	cout<<"-";
	cout<<"\n";
}

int main ()
{
	cetakgaris(20);
	cout<<"KALKULATOR SEDERHANA"<<endl;
	couy<<"Presented by : [2100018179],[2100018181],[2100018183]"<<endl;
	cetakgaris(20);
	cout<<"Menu Operasi :"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Perpangkatan"<<endl;
	cout<<"6. Akar Pangkat"<<endl;
	
	int a, b, x, y, f, g, e, h, n, m, v, menu;
	cout<<"\nPilih Menu :";cin>>menu;
	if (menu==1)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>a;
		cout<<"Masukkan Angka Kedua\t: ";cin>>b;
		cetakgaris(10);
		cout<<"Hasil\t: "<<tambah(a,b);
	}
	else if (menu==2)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>x;
		cout<<"Masukkan Angka Kedua\t: ";cin>>y;
		cetakgaris(10);
		cout<<"Hasil\t: "<<kurang(x,y);
	}
	else if (menu==3)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>f;
		cout<<"Masukkan Angka Keduat\t: ";cin>>g;
		cetakgaris(10);
		cout<<"Hasil\t: "<<kali(f,g);
	}
	else if (menu==4)
	{
		cout<<"Masukkan Angka Pertama\t: ";cin>>e;
		cout<<"Masukkan Angka Kedua\t: ";cin>>h;
		cetakgaris(10);
		cout<<"Hasil\t: "<<bagi(e,h);
	}
	else if (menu==5)
	{
		cout<<"Masukkan Angka  \t: ";cin>>n;
		cout<<"Masukkan Pangkat\t: ";cin>>m;
		cetakgaris(10);
		cout<<"Hasil\t: "<<pangkat(n,m);
	}
	else if (menu==6)
	{
		cout<<"Masukkan Angka:\t";cin>>v;
		cetakgaris(10);
		cout<<"Hasil\t: "<<akar(v);
	}
	return 0;
	
}


