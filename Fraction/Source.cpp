#include <iostream>
using namespace std;

class Fraction
{
	int x;
	int y;

public:

	Fraction(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	~Fraction()
	{

	}

	void Print() const
	{
		cout << this->x << "/" << this->y<<endl;
	}

};



void main()
{
	setlocale(LC_ALL, "");
	Fraction A(2, 3);
	A.Print();
	
}