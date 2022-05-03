#include "ArithmeticProgression.h"

double ArithmeticProgression::calcElement(int j) const
{
    return getA() + j * getD();
}

ostream& ArithmeticProgression::print(ostream& out) const
{
    return (out << "ArithmeticProgression" << endl);
}
