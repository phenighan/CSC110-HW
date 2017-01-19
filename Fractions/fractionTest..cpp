#include <iostream>
#include <iomanip>
#include <fstream>
#include "fraction.h"

using namespace std;

ifstream fin ("fractionIn.txt");
ofstream fout ("fractionOut.txt");

int main()
{
    int a, b, c, d;
    double deci;
    int e, f;
    //priming read
    fin >> a >> b >> c >> d >> deci >> e >> f;
    while (!fin.eof()) //loops while data is in file
    {
        fraction g(a, b);
        fraction p(c, d);
        //show each object just created
        g.print();
        p.print();
        g.print(fout);
        p.print(fout);
         //the sum of g&p
        fraction s = g.add(p);
        //cout << g.getNumer() << " / " << g.getDenom();
        s.print();
        s.print(fout);
        cout << "=====================" << endl << endl;
        fout << "=====================" << endl << endl;
        fin >> a >> b >> c >> d >> deci >> e >> f;
    }


 /*   if (g.denominator == 0)
    {
        cout << "Error assigning denominator." << endl;
        return 0;
    } */ //int denominator must be public in order for this to work

    /// why can't the client find the gcf?
    //cout << s.gcf() << endl;
    fin.close();
    fout.close();
    return 0;
}
/*
{
    int numerator1, denominator1, numerator2, denominator2, whole1, whole2;
    double decimal;
    readProcess(numerator1, denominator1, numerator2, denominator2, decimal, whole1, whole2);
    fin.close();
    fout.close();
    return 0;
}
void readProcess(int &n1, int &d1, int &n2,  ) */
