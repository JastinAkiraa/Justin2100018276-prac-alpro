#include <iostream>
using namespace std;

class proses{
public: 
    int ambil_matkul(int x);
    void hitung(); 
   
private:
 
  int sks,total,diskon,total_biaya1,total_biaya2,total_diskon,pembayaran;
  int jml_matkul,biaya,hasil;
  string matkul;
  char nim[20],nama[50];
};  

void proses::hitung(){
  
  proses p;
  cout << "Masukkan NIM Mahasiswa : ";
  cin >> nim;
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << "Masukkan jumlah matakuliah yang mau diambil :";
  cin>>jml_matkul;
  hasil = 1;
  hasil=p.ambil_matkul(jml_matkul);
  total = hasil * 120000;
  diskon = total * 10/100;
  total_diskon = total - diskon;
  
  cout <<"\n\n---------------------------------";
  cout << "\nNIM Mahasiswa   \t\t\t: " << nim;
  cout << "\nNama Mahasiswa  \t\t\t: " << nama;
  cout << "\nJumlah matakuliah yang diambil  \t: " << jml_matkul;
  cout << "\nJumlah sks yang diambil  \t\t: " << hasil;
  cout << "\nTotal biaya \t\t\t\t:" << total << endl ;
  cout << "Diskon 10% \t\t\t\t:"<<diskon <<endl;
  cout << "Total biaya setelah di diskon\t\t:" << total_diskon;
}
int proses::ambil_matkul(int x){
  if (x==0){
    cout << "Jumlah keseluruhan sks : " << hasil;
return hasil;
  }
  else{

    cout << "Masukkan jumlah SKS yang akan diambil : ";
    cin >> sks;
    cout << "Masukkan nama mata kuliah yang akan diambil : ";
    cin >> matkul;
    hasil=hasil+sks;
    
    return ambil_matkul(x-1);
  }
  
}

int main() {
  int x;
  proses p;
  cout << "Menghitung Biaya SKS" << endl;
  p.hitung();
  return 0;
}
