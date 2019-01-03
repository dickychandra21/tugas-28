#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int i,N;
	float max,min,data;
	
	cout<<"Masukkan Jumlah Data"<<endl;
	cin>>N;
	cout<<"Masukkan Data Ke-1"<<endl;
	cin>>max;
	min=max;
	
	for(i=2; i<N; i++) {
		cout<<"Masukkan Data Ke-"<<i<<endl;
		cin>>data;
		if(data > max) {
			max=data;
		}
		
		if(data < min) {
			min=data;
		}
	}
	
	cout<<"NIlai Terbesar Dari Ke-"<<N<<"Data Adalah:"<<max<<"\n";
	cout<<"Nilai Terkecil Dari Ke-"<<N<<"Data Adalah:"<<min;
	return 0;
	
}

