#pragma once
#include <iostream>
#include "cmath"

class CPU
{
	int Hand;
	int WinCount;

public:
	CPU();
	void SetHand();
	void AddWinCount();
	int GetHand();
	int GetWinCount();
};

