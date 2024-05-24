#include "Referee.h"

Referee::Referee()
{
}

void Referee::VS()
{
	p1->SetHand();
	p2->SetHand();
	HandA = p1->GetHand();
	HandB = p2->GetHand();
	std::cout << sHand[HandA] << " VS. " << sHand[HandB] << std::endl;
	if (HandA == 2 && HandB == 0) {
		HandA = 0;
		HandB = 1;
	}
	else if (HandA == 0 && HandB == 2) {
		HandA = 1;
		HandB = 0;
	}
	if (HandA > HandB) {
		p1->AddWinCount();
		std::cout << "プレイヤー１が勝ちました" << std::endl;
	}
	else if (HandA < HandB) {
		p2->AddWinCount();
		std::cout << "プレイヤー２が勝ちました" << std::endl;
	}
	else {
		std::cout << "引き分けです！" << std::endl;
	}
}

void Referee::GameLoop()
{
	p1 = new CPU;
	p2 = new CPU;
	for (int i = 0; i < GameCount; i++) {
		std::cout <<"【" << i + 1 << "回戦目】";
		VS();
	}
	WinnerJudgement(p1->GetWinCount(), p2->GetWinCount());
}

void Referee::WinnerJudgement(int cntA,int cntB)
{
	std::cout << "【ジャンケン終了】" << std::endl;
	if (cntA > cntB) {
		std::cout << cntA << "対" << cntB << "でプレイヤー1の勝利です！" << std::endl;
	}
	else if (cntA < cntB) {
		std::cout << cntA << "対" << cntB << "でプレイヤー2の勝利です！" << std::endl;
	}
	else {
		std::cout << cntA << "対" << cntB << "で引き分けです！" << std::endl;
	}
}
