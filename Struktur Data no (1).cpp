#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	int i,n,ta=0,x,xi2=0;
	float rata,sdf,r;
	
	cout<<"**********menghitung nilai Rata-rata**********"<<endl;
	cout<<"masukan jumlah data = ";cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"masukkan data ke "<<i+1<<"=";
		cin>>a[n];
		ta=ta+a[n];
		xi2=xi2+pow(a[n],2);
	}
	rata=ta/n;
	x=pow(ta,2);
	r=(n*xi2-x)/(n*(n-1));

	cout<<endl;
	cout<<"rata-rata = "<<rata<<endl;

	
	getch();
	return 0;
}
