#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     cout << "Form Pendaftaran Kampus" << endl;
     cout << "-----------------------" << endl;
     
     // Mendeklarasikan variabel
     string nama, agama, tempat_lahir, tanggal_lahir, alamat, nomor_hp;
     int umur, jurusan;
     double biaya_ukt, total_ukt;
     
     // Meminta input dari pengguna
     cout << "Nama: ";
     getline(cin, nama);
     cout << "Umur: ";
     cin >> umur;
     cin.ignore(); // Mengabaikan karakter newline (\n) setelah cin
     cout << "Agama: ";
     getline(cin, agama);
     cout << "Tempat Lahir: ";
     getline(cin, tempat_lahir);
     cout << "Tanggal Lahir (format: DD/MM/YYYY): ";
     getline(cin, tanggal_lahir);
     cout << "Alamat: ";
     getline(cin, alamat);
     cout << "Nomor HP: ";
     getline(cin, nomor_hp);
     
     // Menampilkan pilihan jurusan
     cout << "\nPilihan Jurusan:" << endl;
     cout << "1. Teknik Informatika" << endl;
     cout << "2. Manajemen Bisnis" << endl;
     cout << "3. Ilmu Komunikasi" << endl;
     cout << "4. Desain Grafis" << endl;
     
     // Meminta input jurusan yang dipilih
     cout << "Masukkan nomor jurusan yang dipilih: ";
     cin >> jurusan;
     
     // Memvalidasi input jurusan
     while (jurusan < 1 || jurusan > 4) {
         cout << "Pilihan jurusan tidak valid. Silakan masukkan nomor jurusan yang sesuai." << endl;
         cout << "Masukkan nomor jurusan yang dipilih: ";
         cin >> jurusan;
     }
     
     // Menginisialisasi biaya UKT jurusan yang dipilih
     biaya_ukt = 0;
     
     // Menghitung biaya UKT berdasarkan jurusan yang dipilih
     switch (jurusan) {
         case 1:
         biaya_ukt = 6000000;
         break;
         case 2:
         biaya_ukt = 7000000;
         break;
         case 3:
         biaya_ukt = 5000000;
         break;
         case 4:
         biaya_ukt = 6500000;
         break;
     }
     
     // Menghitung total UKT yang dibayar selama 4 tahun
     total_ukt = biaya_ukt * 4;
     
     // Menampilkan output
     cout << "\n--- Output ---" << endl;
     cout << "Nama: " << nama << endl;
     cout << "Umur: " << umur << endl;
     cout << "Agama: " << agama << endl;
     cout << "Tempat Lahir: " << tempat_lahir << endl;
     cout << "Tanggal Lahir: " << tanggal_lahir << endl;
     cout << "Alamat: " << alamat << endl;
     cout << "Nomor HP: " << nomor_hp << endl;
     cout << "Jurusan yang Dipilih: " << jurusan << endl;
     cout << fixed << setprecision(0);
     cout << "Biaya UKT Jurusan: " << biaya_ukt << endl;
     cout << fixed << setprecision(0);
     cout << "Total: " << total_ukt << endl;
     
     return 0;
}
