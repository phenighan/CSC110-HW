#include <iostream>
#include <fstream>
#include <iomanip>
#include "fraction.h"

//constructor with two default parameters
fraction::fraction (int n, int d)
{
   /* if (d == 0)
    {
        cout << "Error assigning denominator." << endl;
        return;
    } */
    numerator = n;
    denominator = d;
        /// mention this in class
    if(d < 0)   // check for a negative denominator & adjust
    {
        denominator = -d;   // uses a unary operator to change the sign
        numerator = -n;     //  "   "   "       "    "     "    "   "
    }
}
//destructor not used for now
fraction::~fraction()
{
}
//get numerator
int fraction::getNumer() const
{
    return numerator;
}
//get denominator
int fraction::getDenom() const
{
    return denominator;
}
//add function
fraction fraction::add(fraction a)
{
    int num1 =  numerator * a.denominator; //numerator to this fraction
    int num2 = a.numerator * denominator; //numerator to other fraction
    int denom = denominator * a.denominator; //denominator
    fraction result(num1 + num2, denom); //local object
    return result.reduce(result);
}
//used to reduce fractions
int fraction::gcf(int n, int d) //use Euler's gcf algorithm
{
    int resGCF;  //declaration of result
    int remainder = 0; //initialize remainder
    while (d !=0) //loops until denominator is zero
    {
        remainder = n%d; //remainder of n/d
        n = d; //assign denominator to numerator
        d = remainder; //assign remainder to denominator
    }
    resGCF = n; //assign numerator to result
    return resGCF; //return result GCF
}
void fraction::print() const
{
        cout << fixed << showpoint;
        cout << setprecision(6);
        //show each object just created
        cout << setw(4) << getNumer() << " /";
        cout << setw(4) << getDenom() << endl;
}

void fraction::print(ostream &fout) const
{
        fout << setw(4) << getNumer() << " /";
        fout << setw(4) << getDenom() << endl;

}

fraction fraction::reduce(fraction z)
{
    int cFactor = gcf(z.numerator, z.denominator);
    fraction result(z.numerator / cFactor, z.denominator / cFactor);
    return result;
}
