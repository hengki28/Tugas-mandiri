#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	int i,n,ta=0,x,xi2=0;
	float rata,sd,sdf,r;
	
	cout<<"**********Menghitung standar deviasi**********"<<endl;
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
	sd=sqrt(r);
	cout<<endl;
	cout<<"rata-rata = "<<rata<<endl;
	cout<<"standar deviasi =  "<<sd;
	
	getch();
	return 0;
}
