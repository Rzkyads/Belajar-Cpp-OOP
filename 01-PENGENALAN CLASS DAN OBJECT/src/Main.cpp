#include <iostream>
#include <string>

using namespace std;

//MEMBUAT CLASS TIDAK DI PROGRAM UTAMA(INT MAIN)
class Mahasiswa //Deklarasi Dari Kelas, dan jika membuat nama Class Memakai depan Kapital
{
    public  ://publik dapat diakses di luas class
        string Nama;
        string Nim;
        string Jurusan;
        double IPK;
    //private //hanya didalam class
    //protected //dapat di akses yang menginhaired di class ini
};//AKHIR DARI BODY CLASS

int main(int argc, char const *argv[])
{
    Mahasiswa data1;//data1 adalah objek & Mahasiswa Adalah Class
    data1.Nama = "udin"; //mengakses member dari kelas mahasiswa
    data1.Nim   = "101010";
    data1.Jurusan = "ternak";
    data1.IPK   = 3.5;

    cout << "Nama Adalah : "<<data1.Nama << endl;
    cout << "Nim Adalah : "<<data1.Nim << endl;
    cout << "Jurusan Adalah : "<<data1.Jurusan << endl;
    cout << "IPK Adalah : "<<data1.IPK << endl;
    return 0;
}
