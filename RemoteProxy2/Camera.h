#pragma once
#include "ITake.h"

class Camera :public ITake // 실제 개체
{
	bool mode;
public:
	Camera();
	virtual string TakeAPicture();
	virtual void ChangeMode(bool mode);
	virtual bool GetMode();
};