#include "restBlock.h"

class sphericalBlocks : public rectBlocks
{
public:
    sphericalBlocks(int l1, int w1, int h1) : rectBlocks(l1, w1, h1) {}
    void printArea();
};


//FUNCTION FOR FORMULA FOR THE SPHERICAL BASE RECTANGLE
void sphericalBlocks::printArea()
{
    const double pi = 3.14;
    int a1;
    int diam;
    int vol;
    diam = w1;
    a1 = 4 * pi * 1 / 2 * w1 * w1;
    vol = 4 / 3 * pi * w1 * w1 * w1;
    cout << "\\nTHE DIAMETERS OF THE SPHERICAL BASE RECTANGLE ARE : " << diam;
    cout << "\nTHE AREAS OF THE SPHERICAL BASE RECTANGLE ARE : " << a1;
    cout << "\nTHE VOLUMES OF THE SPHERICAL BASE RECTANGLE ARE : " << vol;

    //to sort the array
    std::vector<int> values{a1, diam, vol};
    std::sort(values.begin(), values.end());
    std::cin.get();
}