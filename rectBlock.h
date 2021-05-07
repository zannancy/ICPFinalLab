#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


class rectBlocks
{
protected:
  int l;
  int w;
  int h;

public:
  //CONSTRUCTOR FOR rectBlocks
  rectBlocks(int l1, int w1, int h1)
  {
    l = l1;
    w = w1;
    h = h1;
  }
  std::vector<int> values{l1, w1, h1};
  std::sort(values.begin(), values.end());
  std::cin.get();
};

void readFromFile(char file_name[], int storage[], int &noOfEn);
void sphericalBlocks::printArea() 
void cylindricalBlocks::printArea()




