#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>

struct DataSiswa
{
 float tugas,uts,uas;
   int nilaipresensi,nim;
   char nama[15];
};

struct Dtrx
{
 int kmk,jdm;

   DataSiswa * pq;
};

 Dtrx rs;

char* matakuliah()
{
 char* z;

   if(rs.kmk == 151)
    {z = "Algoritma dan Pemograman 1";}
   else if(rs.kmk == 422)
    {z = "Linux 1";}
   else if(rs.kmk == 733)
    {z = "PPN II (Access)";}
   else if(rs.kmk == 772)
    {z = "DBMS";}

   return z;
}

float total(int a)
{
 float to;

   to = ((rs.pq[a].nilaipresensi * 0.1) + (rs.pq[a].tugas * 0.2) + (rs.pq[a].uts * 0.3) + (rs.pq[a].uas * 0.4));

   return to;
}

char grade(int b)
{
 char gr;

   if(total(b) > 80)
    {gr = 'A';}
   else if(total(b) > 70)
    {gr = 'B';}
   else if(total(b) > 60)
    {gr = 'C';}
   else if(total(b) > 50)
    {gr = 'D';}
   else
    {gr = 'E';}

   return gr;
}

int jumlh()
{
 int j = 0;

   for(int i = 0; i < rs.jdm; i++)
    {
     if(total(i) > 60)
      {j++;}
      }

   return j;
}

int jmtl()
{
 int t = 0;

   for(int i = 0; i < rs.jdm; i++)
    {
     if(total(i) <= 60)
      {t++;}
      }

   return t;
}

void tampil(int c)
{
 cout<<setiosflags(ios::right)<<setw(2)<<(c + 1)<<"  ";
   cout<<setw(8)<<rs.pq[c].nim<<"   ";
   cout<<setiosflags(ios::left)<<setw(15)<<rs.pq[c].nama;
   cout<<setiosflags(ios::right)<<setw(6)<<rs.pq[c].nilaipresensi;
   cout<<setw(9)<<rs.pq[c].tugas;
   cout<<setw(7)<<rs.pq[c].uts;
   cout<<setw(6)<<rs.pq[c].uas;
   cout<<setw(8)<<total(c);
   cout<<setw(6)<<grade(c)<<endl;
}

void in(int d)
{
     cout<<endl;
 cout<<"Data ke-"<<(d + 1)<<endl;
   cout<<"Nim            : ";cin>>rs.pq[d].nim;
   cout<<"Nama           : ";cin>>rs.pq[d].nama;
   cout<<"Nilai Persensi : ";cin>>rs.pq[d].nilaipresensi;
   cout<<"Nilai Tugas    : ";cin>>rs.pq[d].tugas;
   cout<<"Nilai UTS      : ";cin>>rs.pq[d].uts;
   cout<<"Nilai UAS      : ";cin>>rs.pq[d].uas;
}

int main(void)
{
   cout<<"======================================="<<endl;
   cout<<"       PROGRAM HITUNG NILAI"<<endl;
   cout<<"======================================="<<endl;
   cout<<"Kode Mata Kuliah[151,422,733/772]      : ";cin>>rs.kmk;
   cout<<"Jumlah Data Mahasiswa                  : ";cin>>rs.jdm;

   rs.pq = new  DataSiswa[rs.jdm];

   for(int i = 0; i < rs.jdm; i++)
    {in(i);}

   system ("CLS");

   cout<<"Kode Mata Kuliah : "<<rs.kmk<<endl;
   cout<<"Mata Kuliah      : "<<matakuliah()<<endl;

   cout<<"==========================================================================="<<endl;
   cout<<"No. | NIM    | Nama           | Nilai                      | Total | Grade "<<endl;
   cout<<"    |        | Mahasiswa      | Prsnsi | Tugas | UTS | UAS |"<<endl;
   cout<<"==========================================================================="<<endl;

   for(int i = 0; i < rs.jdm; i++)
    {tampil(i);}

   cout<<"==========================================================================="<<endl;
   cout<<"                                              Jumlah Mahasiswa Lulus : "<<jumlh()<<endl;
   cout<<"                                        Jumlah Mahasiswa Tidak Lulus : "<<jmtl();


 getch();
}

