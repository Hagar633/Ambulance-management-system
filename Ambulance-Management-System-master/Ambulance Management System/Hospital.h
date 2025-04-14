#pragma once
#include "LinkedQueue.h"
#include "priQueue.h"
#include "Patient.h"
#include "CancelQueue.h"
#include "Car.h"


class Hospital
{
private:
	LinkedQueue<Patient*> SP;
	priQueue<Patient*> EP;
	CancelQueue<Patient*> NP;
	LinkedQueue<Car*> NC;
	LinkedQueue<Car*> SC;
	int n_NC;
	int n_SC;
	int s_NC;
	int s_SC;

public:
	Hospital(int NC, int speed_NC, int SC, int speed_SC);
};

