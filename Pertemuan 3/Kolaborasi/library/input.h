using namespace std;
class Input(){
    public :
    void cetak(){
        cout<<"Aplikasi Penjualan Ayam \n";
        cout<<"Menu yang tersedia : \n";
        cout<<"1. Ayam Geprek Rp.21000\n";
        cout<<"2. Ayam Goreng Rp.17000\n";
        cout<<"3. Udang Goreng Rp.19000\n";
        cout<<"Pesan Ayam Geprek : ";
        cin>>banyak_ayamgeprek;
        cout<<"Pesan Ayam Goreng : ";
        cin>>banyak_ayamgoreng;
    }

    void toFile(){
        tulis_data.open("api_data.txt");
        tulis_data<<banyak_ayamgeprek<<endl;
        tulis_data<<banyak_ayamgoreng;
        tulis_data.close();
    }
    private :
    ofstream tulis_data;
    int banyak_ayamgeprek, banyak_ayamgoreng;
}