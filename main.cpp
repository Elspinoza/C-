/*
Name: main.cpp

Goal: Cet programme permet de calculer la distance de deux point.

Date: 06/03/2022

Author: ACOLATSE K.M. Innocent

*/
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#define wlg 9


using namespace std;

int main()
{

    float xa,xb,ya,yb;
    float X,Y,D;
    char reponse;

    cout <<setiosflags(ios::showpoint|ios::fixed);
    cout <<setprecision(2);

    cout << "PROGRAMME CALCULANT LA DISTANCE ENTRE DEUX POINT\n\n" << endl;

    do
    {
        cout << "VEUILLEZ ENTREZ LES COORDONNEES DU POINT 'A'" << endl;

        cout << "\nAbcisse X = ";
        cin >> xa;
        cout << "\nOrdonnees Y = ";
        cin >> ya;

        cout << "\nVEUILLEZ ENTREZ LES COORDONNEES DU POINT 'B'" << endl;

        cout << "\nAbcisse X = ";
        cin >> xb;
        cout << "\nOrdonnees Y = ";
        cin >> yb;

        cout << "\n\t******************************************************\n" << endl;

        cout <<setw(wlg)<< "Coordonnees du point A" << "\t || " << "\tCoordonnees du point B"<< endl;
        cout <<setw(wlg)<< "X = "<<xa << "\t\t || " << "\t\tX = "<<xb<< endl;
        cout <<setw(wlg)<< "Y = "<<ya << "\t\t || " << "\t\tY = "<<yb<< endl;

        cout << "\n\t******************************************************\n" << endl;

        X = xa-xb;
        Y = ya-yb;

        D = sqrt(pow(X,2)+pow(Y,2));

        cout << "Distance entre les deux points est D = " << D <<endl;

                do
        {
            cout <<"Voulez-vous recommencer ? (O/N) : " ;
            cin>>reponse;
            reponse=toupper(reponse);
        }
        while(reponse!='O'&&reponse!='N');
    }
    while(reponse=='O');
        return 0;
}

