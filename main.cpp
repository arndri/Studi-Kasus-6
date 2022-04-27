#include <iostream>
using namespace std;

class mhs{
private:
struct str1{
  string nama;
};
  string matkul[100];
  int tugas[100],uts[100],uas[100];
  int jml_mahasiswa;
  float total[100];
  float jumlah_uts,jumlah_uas,jumlah_tugas,rata_uts,rata_uas,rata_tugas;
  str1 nama_mahasiswa[100];
  
public: 
void input();
void proses();
void output();
  
};

void mhs :: input(){
  cout<<"INPUT NILAI MAHASISWA"<<endl;
  cout<<"Masukkan jumlah mahasiswa : ";cin>>jml_mahasiswa;
  cout<<endl;
  
  for(int i=0;i<jml_mahasiswa;i++){
    cout<<"Masukkan nama mahasiswa absen ke-"<<i+1<<"  : ";cin>>nama_mahasiswa[i].nama;
    cout<<"Masukkan nama mata kuliah untuk mahasiswa absen ke-"<<i+1<<"  : ";cin>>matkul[i];
  }
  cout<<endl;
  
  for(int i=0; i<jml_mahasiswa;i++){
    cout<<"Masukkan nilai tugas mahasiswa absen ke-"<<i+1<<" : "; cin>>tugas[i];
  }
  cout<<endl;
  
  for(int j=0; j<jml_mahasiswa;j++){
    cout<<"Masukkan nilai UTS mahasiswa absen ke-"<<j+1<<" : "; cin>>uts[j];
  }
  cout<<endl;
  
  for(int k=0; k<jml_mahasiswa;k++){
    cout<<"Masukkan nilai UAS mahasiswa absen ke-"<<k+1<<" : "; cin>>uas[k];
  }
  cout<<endl;
}

void mhs ::  proses(){
  for(int i=0; i<jml_mahasiswa;i++){
    total[i]= ((float)20/100*tugas[i])+((float)35/100*uts[i])+((float)45/100*uas[i]);
  }
  for(int j=0; j<jml_mahasiswa; j++){
    jumlah_tugas+=tugas[j];
  }
  for(int k=0; k<jml_mahasiswa; k++){
    jumlah_uts+=uts[k];
  }
  for(int l=0; l<jml_mahasiswa; l++){
    jumlah_uas+=uas[l];
  }
  rata_tugas=(float)jumlah_tugas/jml_mahasiswa;
    rata_uts=(float)jumlah_uts/jml_mahasiswa;
    rata_uas=(float)jumlah_uas/jml_mahasiswa;
  }

void mhs :: output(){
  cout<<endl;
  cout<<"==============================="<<endl;
  cout<<"Jumlah Mahasiswa  : "<<jml_mahasiswa<<endl;
  cout<<"==============================="<<endl;
  cout<<"Daftar Nilai : "<<endl;
  cout<<"==============================="<<endl;
  cout<<"||Nama    ||    Matkul||    Nilai Tugas||    Nilai UTS||    Nilai UAS||    Nilai Akhir||"<<endl;
  for(int i=0;i<jml_mahasiswa;i++){
    cout<<nama_mahasiswa[i].nama<<"          "<<matkul[i]<<"              "<<tugas[i]<<"              "<<uts[i]<<"              "<<uas[i]<<"              "<<total[i]<<endl;
  }
  cout<<"==============================="<<endl;
  cout<<"==============================="<<endl;
  cout<<"Rata-rata Tugas  : "<<rata_tugas<<endl;
  cout<<"Rata-rata UTS    : "<<rata_uts<<endl;
  cout<<"Rata-rata UAS    : "<<rata_uas<<endl;
}
  
int main() {
  mhs a;
  a.input();
  a.proses();
  a.output();

  return 0;
}
