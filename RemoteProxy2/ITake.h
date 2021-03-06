#pragma once
#include <iostream>
using namespace std;

enum TakeMode { TAKE = 0x01, CHANGE, GET };

class ITake
{
public:
	virtual string TakeAPicture() = 0;
	virtual void ChangeMode(bool mode) = 0;
	virtual bool GetMode() = 0;
};