#include <iostream>
using namespace std;

class Pertama {
    protected :
        int per_kubik,jumlah ;
        float pajak ;
        int jumlah_pajak ;
        int total ;
        int materai = 3000 ;
        int pemeliharaan_meter = 4400 ;
};

class Kedua : public Pertama {
    public :
    Kedua (int pelanggan_jenis, int kwh){
        if (pelanggan_jenis == 1) {
            cout << "=-= Pelanggan jenis 1 biaya pemakaian air per kubik = Rp.7450, pajak 10% =-=" << endl ; 
            this-> pajak = 0.1 ;
            this-> per_kubik = 7450 ;
        }
        else if (pelanggan_jenis == 2) {
            cout << "=-= Pelanggan jenis 2 biaya pemakaian air per kubik = Rp.7450, pajak 20% =-=" << endl ;
            this-> pajak = 0.2 ; 
            this-> per_kubik = 7450 ;
        }
        else if (pelanggan_jenis == 3) {
             cout << "=-= Pelanggan jenis 3 biaya pemakaian air per kubik = Rp.7450, pajak 40% =-=" << endl ;
             this-> pajak = 0.4 ; 
             this-> per_kubik = 7450 ; 
        }
        else if (pelanggan_jenis == 4) {
             cout << "=-= Pelanggan jenis 4 biaya pemakaian air per kubik = Rp.7450, pajak 50% =-=" << endl ;
             this-> pajak = 0.5 ;
             this-> per_kubik = 7450 ; 
        }
        jumlah = per_kubik * kwh ;
        jumlah_pajak  = pajak * jumlah ;
        total = jumlah + jumlah_pajak + materai + pemeliharaan_meter ;
    }
    void hasil () {
        cout << "Biaya awal                         : Rp." << jumlah << endl ;
        cout << "Pajak                              : Rp." << jumlah_pajak << endl ;
        cout << "Total Pembayaran                   : Rp." << total << endl ;
        cout << endl ;
        cout << "=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl ;
    }
};

int main(){
    int jumlah_kubik ; 
    int pelanggan_jenis ;
    cout << "Jenis Pelanggan ke berapa anda               : " ;
    cin >> pelanggan_jenis ;

    cout << "Masukkan jumlah air per kubik anda           : " ; 
    cin >> jumlah_kubik ;
    Kedua myObj(pelanggan_jenis,jumlah_kubik);
    myObj.hasil () ;
}
