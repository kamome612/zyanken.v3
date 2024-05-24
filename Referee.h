#pragma once
#include "string"
#include "CPU.h"

using std::string;

namespace {
	const string sHand[3] = { "パー","チョキ","グー" };
	const int GameCount = 3;
};

class Referee
{
	CPU* p1;
	CPU* p2;
	int HandA;
	int HandB;
public:
	Referee();
	void VS();
	void GameLoop();
	void WinnerJudgement(int cntA,int cntB);
};

