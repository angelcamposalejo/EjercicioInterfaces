#pragma once
#include "IWorker.h"
class Electrician :
	public IWorker
{
public:
	Electrician();
	~Electrician();
	void Work(int numHours);
	void ReceivePayment(double amount);
};

