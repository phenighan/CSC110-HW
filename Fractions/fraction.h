/* fraction.h  (Header file for the class, fraction)
   Written by Paris Henighan
   Conditions:  a fraction has an integer numerator and denominator
   The class will demonstrate all fraction operations from elem. school
*/

#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
using namespace std;

class fraction
{
   public:
   	fraction (int n = 0, int d = 1);	// constructor with 2 default params
	~fraction();                     	// destructor explained more in class
    fraction add(fraction);         	// adds two fractions returning a third
    fraction subtract(fraction);   	    // subtracts two fractions returning third
    fraction multiply(fraction);    	// multiplies two fractions returning third
    fraction divide(fraction);		    // divides two fractions returning a third
    fraction makeFraction(double);  	// converts any decimal to a fraction
	fraction makeImproperFraction(int, fraction); // input a whole & fract -> improper
	fraction getInverse();           // swaps the numerator and denominator
	fraction reduce(fraction);       // reduces the fraction to lowest terms
	double getDecimal() const;       // return fraction's decimal equivalent;
	void setNumer(int);              // sets the private member numerator
	void setDenom(int);              // sets the private member denominator
	int getNumer() const;            // gets the private member numerator
	int getDenom() const;            // gets the private member denominator
	void print() const;              // prints the fraction to the console
	void print(ostream&) const;      // prints the fraction to the file

   private: //must be public in order for zero in denominator to end program
	int numerator;                   // private int member for numerator
	int denominator;                 // private int member for denominator
	int gcf(int, int);               // private function for greatest comm factor
};



#endif // FRACTION_H_INCLUDED
