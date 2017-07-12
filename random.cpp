#include "random.h"

#include <iostream>

using namespace std;

int randnum(int max)
{
	int randomnumber = rand();
	float random = static_cast<float>((randomnumber % max) + 1);
	int myrandom = static_cast<int>(random);
	return myrandom;
}


