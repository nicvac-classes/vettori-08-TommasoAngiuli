#include <iostream>
using namespace std;
int main() 
{
    int n, i, imin, tempimin, imax, somma, tempimax;
    double media, t;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    string nomi[n], nazioni[n];
    double tempi[n];
    i = 0;
    while (i <= n - 1) {
        cout << "inserisci nome, nazionalità e tempo del " << i + 1 << " atleta" << endl;
        cin >> nomi[i];
        cin >> nazioni[i];
        cin >> tempi[i];
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        cout << "il " << i + 1 << "° atleta si chiama " << nomi[i] << " ha nazionalità " << nazioni[i] << " e tempo " << tempi[i] << endl;
        i = i + 1;
    }
    imin = 0;
    tempimin = (int) tempi[0];
    imax = 0;
    tempimax = (int) tempi[0];
    somma = 0;
    i = 0;
    while (i <= n - 1) {
        if (tempi[i] < tempimin) {
            imin = i;
            tempimin = (int) tempi[i];
        }
        if (tempi[i] > tempimax) {
            imax = i;
            tempimax = (int) tempi[i];
        }
        somma = (int) (somma + tempi[i]);
        i = i + 1;
    }
    media = (double) somma / n;
    cout << "l'atleta vincitore è " << nomi[imin] << " ha nazionalità " << nazioni[imin] << " e tempo " << tempi[imin] << " mentre l'atleta con tempo maggiore è " << nomi[imax] << " ha nazionalità " << nazioni[imax] << " e tempo " << tempi[imax] << endl;
    cout << "la media dei tempi è " << media << endl;
    i = 0;
    while (i <= n - 1) {
        if (tempi[i] <= media) {
            cout << "l'atleta " << nomi[i] << " ha nazionalità " << nazioni[i] << " e tempo " << tempi[i] << " e ha tempo inferiore alla media" << endl;
        }
        i = i + 1;
    }
    cout << "inserisci un tempo T in secondi" << endl;
    cin >> t;
    i = 0;
    while (i <= n - 1) {
        if (tempi[i] <= t) {
            cout << "l'atleta " << nomi[i] << " ha nazionalità " << nazioni[i] << " e tempo " << tempi[i] << " e ha tempo inferiore a T" << endl;
        }
        i = i + 1;
    }
}