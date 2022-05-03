#include <iostream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"
using namespace std;

ostream& operator<<(ostream& out, const IProgression& prog)
{
	return prog.print(out);
}

int main()
{
	IProgression** arr = new IProgression * [2];
	arr[0] = new ArithmeticProgression(0, 2.3);
	arr[1] = new GeometricProgression(1, 3);

	cout << *arr[0] << *arr[1] << endl;

	for (size_t i = 0; i < 10; i++)
	{
		cout << "arith[" << i << "] = " << dynamic_cast<ArithmeticProgression*>(arr[0])->calcElement(i) << endl
			<< "geom[" << i << "] = " << dynamic_cast<GeometricProgression*>(arr[1])->calcElement(i) << endl << endl;
	}

	return 0;
}