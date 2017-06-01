#pragma once
class ILawyer
{
public:
	//ILawyer();
	//~ILawyer();
	virtual void Defend() = 0;
	virtual void GetPaid(double amount) = 0;
	virtual void SpeakOut() = 0;
};

