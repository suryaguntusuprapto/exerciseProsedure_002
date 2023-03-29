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