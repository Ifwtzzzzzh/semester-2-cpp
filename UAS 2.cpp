#include <iostream>
using namespace std;
struct nilai
{
    char jurusan [15];
    char nama [50];
    int n_tugas, n_uts, n_uas, n_akhir;
    char grade;
};
 
int main()
{
    struct nilai mhs01, mhs02, mhs03;
    cout<<"==================================="<<endl;
    cout<<"Contoh Program Penilaian Mahasiswa Struct!"<<endl;
    cout<<"Nim: Isi NIM Kalian"<<endl;
    cout<<"Nama: Isi Nama Kalian"<<endl;
    cout<<"==================================="<<endl;
     
    cout<<"Jurusan1 : ";cin.getline(mhs01.jurusan,15);
    cout<<"Nama1 : ";cin.getline(mhs01.nama,50);
    cout<<"Nilai Tugas1 :";cin>>mhs01.n_tugas;
    cout<<"Nilai UTS1 :";cin>>mhs01.n_uts;
    cout<<"Nilai UAS1 :";cin>>mhs01.n_uas;
    cout<<endl;
    
    cout<<"Jurusan2 : ";cin.getline(mhs02.jurusan,15);
    cout<<"Nama2 : ";cin.getline(mhs02.nama,50);
    cout<<"Nilai Tugas2 :";cin>>mhs02.n_tugas;
    cout<<"Nilai UTS2 :";cin>>mhs02.n_uts;
    cout<<"Nilai UAS2 :";cin>>mhs02.n_uas;
    cout<<endl;
    
    cout<<"Jurusan3 : ";cin.getline(mhs03.jurusan,15);
    cout<<"Nama3 : ";cin.getline(mhs03.nama,50);
    cout<<"Nilai Tugas3 :";cin>>mhs03.n_tugas;
    cout<<"Nilai UTS3 :";cin>>mhs03.n_uts;
    cout<<"Nilai UAS3 :";cin>>mhs03.n_uas;
    cout<<endl;
     
mhs01.n_akhir = (mhs01.n_tugas*2.0)+(mhs01.n_uts*3.5)+(mhs01.n_uas*4.5);
if(mhs01.n_akhir>=3.50)
{ 
mhs01.grade='lulus cumlaude';
}
else if (mhs01.n_akhir>=2.00)
{
mhs01.grade='lulus';
}
else if (mhs01.n_akhir<2.00)
{
mhs01.grade='tidak lulus';
}

mhs02.n_akhir = (mhs02.n_tugas*2.0/100)+(mhs02.n_uts*3.5/100)+(mhs02.n_uas*4.5/100);
if(mhs02.n_akhir>=3.50)
{ 
mhs02.grade='lulus cumlaude';
}
else if (mhs02.n_akhir>=2.00)
{
mhs02.grade='lulus';
}
else if (mhs02.n_akhir<2.00)
{
mhs02.grade='tidak lulus';
}

mhs03.n_akhir = (mhs03.n_tugas*2.0/100)+(mhs03.n_uts*3.5/100)+(mhs03.n_uas*4.5/100);
 
if(mhs03.n_akhir>=3.50)
{ 
mhs03.grade='lulus cumlaude';
}
else if (mhs03.n_akhir>=2.00)
{
mhs03.grade='lulus';
}
else if (mhs03.n_akhir<2.00)
{
mhs03.grade='tidak lulus';
}




 
    cout<<"\n==================================="<<endl;
    cout<<"Output Rangkuman Nilai Yang Didapat"<<endl;;
    cout<<"==================================="<<endl;
    cout<<"Jurusan: "<< mhs01.jurusan<<endl;
    cout<<"Nama : "<< mhs01.nama<<endl;
    cout<<"Nilai Tugas : "<< mhs01.n_tugas<<endl;
    cout<<"Nilai UTS : "<< mhs01.n_uts<<endl;
    cout<<"Nilai UAS : "<< mhs01.n_uas<<endl;
    cout<<"Mendapatkan Nilai Akhir : "<<mhs01.n_akhir<<endl;
    cout<<"Nilai Huruf (Grade) : "<<mhs01.grade<<endl;
    
    cout<<"Jurusan : "<< mhs02.jurusan<<endl;
    cout<<"Nama : "<< mhs02.nama<<endl;
    cout<<"Nilai Tugas : "<< mhs02.n_tugas<<endl;
    cout<<"Nilai UTS : "<< mhs02.n_uts<<endl;
    cout<<"Nilai UAS : "<< mhs02.n_uas<<endl;
    cout<<"Mendapatkan Nilai Akhir : "<<mhs02.n_akhir<<endl;
    cout<<"Nilai Huruf (Grade) : "<<mhs02.grade<<endl;
    
    cout<<"Jurusan : "<< mhs03.jurusan<<endl;
    cout<<"Nama : "<< mhs03.nama<<endl;
    cout<<"Nilai Tugas : "<< mhs03.n_tugas<<endl;
    cout<<"Nilai UTS : "<< mhs03.n_uts<<endl;
    cout<<"Nilai UAS : "<< mhs03.n_uas<<endl;
    cout<<"Mendapatkan Nilai Akhir : "<<mhs03.n_akhir<<endl;
    cout<<"Nilai Huruf (Grade) : "<<mhs03.grade<<endl;
     
     
     
 
    return 0;
}
