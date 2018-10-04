#include <iostream>
using namespace std;

int main ()
{
	string nama;
	cout<<"program untuk menampilkan tulisan yang berkurang satu huruf setiap barisnya\n\n";
	cout<<"Masukan nama :";
	cin>>nama;
	cout<<endl;
	int i=nama.length()-1;
	for (i;i>=0;i--){
		for(int a=0;a<=i;a++){
			cout<<nama[a];
		}
		cout<<endl;
	}
	return 0;
	
}
