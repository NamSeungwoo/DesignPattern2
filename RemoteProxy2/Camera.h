#pragma once
#include "ITake.h"

class Camera :public ITake // ���� ��ü
{
	bool mode;
public:
	Camera();
	virtual string TakeAPicture();
	virtual void ChangeMode(bool mode);
	virtual bool GetMode();
};