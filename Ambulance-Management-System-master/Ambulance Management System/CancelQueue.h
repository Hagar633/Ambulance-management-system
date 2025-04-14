#pragma once
#include "LinkedQueue.h"
template <typename T>

class CancelQueue :public LinkedQueue<T>
{
public:
	bool Cancel(int& PID);
};



