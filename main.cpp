#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <string>
using namespace std;

struct Probka
{
    double t;
    double x;
    Probka (double t1, double x1)
    {
        t=t1;
        x=x1;
    }
};

typedef vector<Probka> Dane;

vector < Probka > wczytaj(string n)
{

    Dane tablica;

    ifstream plik (n);
    string linia;
    while (getline(plik,linia))
    {
        double t,x;
    }
    plik.close();
    return tablica;

}


int main(int argc, char* argv[])
{


if (argc != 2){
    return -1;

}
    cout << argv[1] << endl;
    Dane dane = wczytaj (argv[1]);

    return 0;

}
