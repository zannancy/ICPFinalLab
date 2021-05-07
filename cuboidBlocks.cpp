#include "restBlock.h"

class cuboidBlocks : public rectBlocks

{
public:
    cuboidBlocks(int l1, int w1, int h1) : rectBlocks(l1, w1, h1) {}
    void printArea();
};




