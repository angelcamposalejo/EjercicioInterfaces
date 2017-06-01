#pragma once
class IWorker
{
public:
	virtual void Work(int numHours) = 0;
	virtual void ReceivePayment(double amount) = 0;
};

