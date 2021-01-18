#include <iostream>
#include <string>

using namespace std;

//CLASS DENGAN CONSTRUKTOR
//CONSTRUKTOR ADALAH SALAH SATU METOD/FUNGSI YANG ADA DALAM CLASS YANG AKAN DIPANGGIL PERTAMA SAAT OBJEK DI BUTA

class Mahasiswa{
    public : //consturktor harus publik

    string Nama;
    string Jurusan;
    string NIM;
    double IPK;

        /*Mahasiswa()//ulangi nama class untuk contruktor
        {
            cout << "INI ADALAH CONSTRUKTOR\n";
        }*/

        //CONSTRUKTOR DENGAN PARAMETER
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)//apapun yang taruh disini akan masukke sana
        {
            //NameSpace Mahasiswa
            Mahasiswa::Nama = inputNama;//jadi akan mengambil variebal nama dialam class mahasiswa
            Mahasiswa::NIM = inputNIM;//jadi akan mengambil variebal nama dialam class mahasiswa
            Mahasiswa::Jurusan = inputJurusan;//jadi akan mengambil variebal nama dialam class mahasiswa
            Mahasiswa::IPK = inputIPK;//jadi akan mengambil variebal nama dialam class mahasiswa
           
            cout << Mahasiswa::Nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::Jurusan << endl;
            cout << Mahasiswa::IPK << endl;
             
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa ("UCUP", "1234567890", "INDUSTRI", "4.0");
   
    return 0;
}
