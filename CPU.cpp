#include "CPU.h"
#include <iostream>
#include "cmath"

CPU::CPU()
{
	WinCount = 0;
}

void CPU::SetHand()
{
	Hand = rand() % 3;
}

void CPU::AddWinCount()
{
	WinCount++;
}

int CPU::GetHand()
{
	return Hand;
}

int CPU::GetWinCount()
{
	return WinCount;
}

