#include <iostream>

//mengganti std::cout dengan cout
//mengganti std::cin dengan cin
using namespace std;


int main(){

    int jumlahNilai;
    cout << "Masukkan berapa jumlah nilai array:";
    cin >> jumlahNilai;


    int *array = new int [jumlahNilai];
    //outputnya
    cout << "Masukkan " << jumlahNilai << " nilai array:\n";


    for (int i=0; i < jumlahNilai; ++i) {
    //outputnya
    cout << "Nilai Array ke- " << i + 1 << ": ";
    cin >> array[i];}


    int nilaiTertinggi = array[0];
    int indeksTertinggi = 0;


    for (int i = 1; i< jumlahNilai; ++i) {
    if (array[i] > nilaiTertinggi) {
    nilaiTertinggi = array[i];
    indeksTertinggi = i;}}


    //output
    cout << "Nilai tertinggi:" << nilaiTertinggi << "\n";
    //memeriksa apakah ditemukan
    if (indeksTertinggi != -1) {
    //output
    cout << "Nilai tersebut ditemukan pada indeks :" << indeksTertinggi << "\n"; } else {
    //output
    cout << "Nilai tersebut tidak ditemukan dalam array.\n"; }


    return 0; }
