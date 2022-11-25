#include <iostream>
#include <iomanip>
using namespace std;

#define TAB "\t"


class Fraction
{
	double x, y; 

public:

	void set_x (double x) 
	{
		this->x = x;
	}
	
	double get_x () const
	{
		return x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	double get_y () const
	{
		return y;
	}

	void Print() const
	{
		cout << "X=" << setprecision(4) <<this->x << TAB <<"Y="<< this->y << endl;
	}

	Fraction()
	{
		//cout << "Default Constructor:\t" << this << endl;
	}

	Fraction(double x, double y)
	{
		this->x = x;
		this->y = y;
		//cout << "Constructor:\t" << this << endl;
	}

	~Fraction()
	{
		//cout << "Destructor:\t" << this << endl;
	}

	Fraction& operator= (const Fraction& other)
	{
		this->x=other.x;
		this->y = other.y;
		return *this;
	}
	
	/*Fraction operator++ ()
	{
		Fraction result;
		result.x = this->x++;
		result.y = this->y++;
		return result;
	}


	Fraction operator-- ()
	{
		Fraction result;
		result.x=this->x--;
		result.y = this->y--;
		return result;
	}*/
};

Fraction operator+ (const Fraction& A, const Fraction& B)
{
	Fraction result;
	result.set_x(A.get_x() + B.get_x());
	result.set_y(A.get_y() + B.get_y());
	return result;
}

Fraction operator- (const Fraction& A, const Fraction& B)
{
	Fraction result;
	result.set_x(A.get_x() - B.get_x());
	result.set_y(A.get_y() - B.get_y());
	return result;
}

Fraction operator* (const Fraction& A, const Fraction& B)
{
	Fraction result;
	result.set_x(A.get_x() * B.get_x());
	result.set_y(A.get_y() * B.get_y());
	return result;
}


Fraction operator/ (const Fraction& A, const Fraction& B)
{
	Fraction result;
	result.set_x(A.get_x() / B.get_x());
	result.set_y(A.get_y() / B.get_y());
	return result;
}




void main()
{
	setlocale(LC_ALL, "");
	Fraction A(2, 3);
	Fraction B(8, 10);
	Fraction C;
	//A.set_x(8.05);
	//B.set_x(2.1);
	//A.set_y(10.03);
	//B.set_y(5.15);
	//cout << "A = "<<A.get_x() << TAB << B.get_x() << endl;
	//cout << "B = "<<A.get_y() << TAB << B.get_y() << endl;
	A.Print();
	B.Print();
	cout << "\nA+B=C" << endl;
	C = A + B;
	C.Print();
	C = A - B;
	cout << "\nA-B=C" << endl;
	C.Print();
	C = A * B;
	cout << "\nA*B=C" << endl;
	C.Print();
	C = A / B;
	cout << "\nA/B=C" << endl;
	C.Print();
	/*C++;
	cout << "\nC++" << endl;
	C.Print();
	C--;
	cout << "\nC--" << endl;
	C.Print();*/

}