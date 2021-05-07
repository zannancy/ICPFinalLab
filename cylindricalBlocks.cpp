#include "restBlock.h"

class cylindricalBlocks : public rectBlocks
{
public:
    cylindricalBlocks(int l1, int w1, int h1) : rectBlocks(l1, w1, h1) {}
    void printArea();
};

void cylindricalBlocks::printArea()
{
    const double pi = 3.14;
    double sA;
    int diam;
    int l1;
    diam = w1;
    sA = 2 * pi * 1 / 2 * w1 * h1 + 2 * pi * 1 / 2 * w1 *;
    cout << "\\nTHE DIAMETERS OF THE SPHERICAL BASE RECTANGLE ARE : " << diam;
    cout << "\\nTHE SURFACE AREA OF THE CYLINDRICAL BASE RECTANGLE IS : " << sA;
    cout << "\\nTHE LENGTHS OF THE CYLINDRICAL BASE RECTANGLE ARE : " << l1;

    //to sort the array
    std::vector<int> values{s1, diam, l1};
    std::sort(values.begin(), values.end());
    std::cin.get();
}
