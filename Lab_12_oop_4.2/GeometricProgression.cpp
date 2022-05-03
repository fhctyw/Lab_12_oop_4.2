#include "GeometricProgression.h"

double GeometricProgression::calcElement(int j) const
{
    return getA() * pow(getR(), j);
}

ostream& GeometricProgression::print(ostream& out) const
{
    return (out << "GeometricProgression" << endl);
}
