#include <iostream>
#include <string>

using namespace std;
class menghitung{
	public:
		int interatif();
		void akhir();
		
		private:
			int saku,kuliah,jajan,pengeluaran,total,i,bln;
			float sisa,tabungan,totsak;
};

int menghitung::interatif(){
	total = 0;
	tabungan = 0;
	cout<<"Masukkan uang saku : ";
	cin>>saku;
  cout<<"Masukkan bulan : ";
  cin>>bln;
	
	for(i=0;i<bln;i++){
		cout<<"\nMasukkan pengeluaran bulan ke- "<<
		i+1;
			cout<<"\nMasukkan biaya pengeluaran kuliah : ";
			cin>>kuliah;
			cout<<"Masukkan biaya jajan : ";
			cin>>jajan;
        totsak = saku*bln;
				pengeluaran = kuliah + jajan;
				total = total + pengeluaran;
				sisa = saku - pengeluaran;
				cout<<"\nSisa uang saku bulan ke : "<<i+1<<" = "<<sisa;
				tabungan=tabungan+sisa;
				cout<<endl;
	}
	akhir();
	return 0;
}
void menghitung::akhir(){
	
	for(i=0;i<bln;i++){
		cout<<"\nTotal Pengeluaran bulan ke : "<<i+1<<" = "<<pengeluaran;
	}
  cout<<"\nTotal keseluruhan uang saku Selama "<<bln<<" Bulan : "<<totsak;
  cout<<"\nTotal keseluruhan pengeluaran : "<<total;
  cout<<"\nTotal Tabungan : "<<tabungan;
}
int main(){
  menghitung H;
  H.interatif();
  return 0;
}