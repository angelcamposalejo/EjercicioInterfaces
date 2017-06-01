#pragma once
#include "IWorker.h"
class Accountant :
	public IWorker
{
public:
	Accountant();
	~Accountant();
	void Work(int numHours);
	void ReceivePayment(double amount);
};

