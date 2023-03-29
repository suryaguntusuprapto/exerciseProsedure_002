#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double a, double b) {
    if (a >= 70 || b >= 80) {
        return "diterima";
    }
    else {
        return "ditolak";
    }
}

int main() {
    double nilaibing[20];
    double nilaimath[20];
    string nama[20] = { "asroni","lia","joko","surya","guntur","fadil","budi","toni","gotze","mario","dandi","anton","roy","hanoman","krishna","nikita","indra","atha","deily","dewi" };
    string status1[20];
    int jumlahditerima = 0;

    for (int i = 0; i < 20; i++) {
        cout << "\nmasukkan nama : " << nama[i];
        cout << "\nmasukkan nilai bahasa inggris : ";
        cin >> nilaibing[i];
        cout << "masukkan nilai matematika : ";
        cin >> nilaimath[i];
        cout << "rata-ratanya : " << rerata(nilaibing[i], nilaimath[i]) << endl;
        status1[i] = status(rerata(nilaibing[i], nilaimath[i]), nilaimath[i]);
        cout << "status : " << status1[i] << endl;

        if (status1[i] == "diterima") {
            jumlahditerima++;
        }
    }

    cout << endl;
    for (int i = 0; i < 20; i++) {
        cout << nama[i] << " = " << status1[i] << endl;
    }
    cout << "\nJumlah kandidat yang diterima: " << jumlahditerima << endl;
    cout << "Jumlah kandidat yang tidak diterima: " << 20 - jumlahditerima << endl;


}
