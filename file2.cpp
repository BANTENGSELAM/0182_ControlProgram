//library
#include <iostream>
using namespace std;

//rata-rata
float Rata_rata(float a, float b){
    return (a+b)/2;
}


//status lulus dan gagal
string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}


//program utama
int main(){
    float nilBI,nilMT,rerata;
    string status; //penambahan string status
    

    //display lolos dan tidak
    cout <<"Masukan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout <<"Masukan nilai Matematika = ";
    cin >> nilMT;
    rerata = Rata_rata(nilBI,nilMT);
     