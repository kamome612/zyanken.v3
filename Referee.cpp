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
		std::cout << "�v���C���[�P�������܂���" << std::endl;
	}
	else if (HandA < HandB) {
		p2->AddWinCount();
		std::cout << "�v���C���[�Q�������܂���" << std::endl;
	}
	else {
		std::cout << "���������ł��I" << std::endl;
	}
}

void Referee::GameLoop()
{
	p1 = new CPU;
	p2 = new CPU;
	for (int i = 0; i < GameCount; i++) {
		std::cout <<"�y" << i + 1 << "���ځz";
		VS();
	}
	WinnerJudgement(p1->GetWinCount(), p2->GetWinCount());
}

void Referee::WinnerJudgement(int cntA,int cntB)
{
	std::cout << "�y�W�����P���I���z" << std::endl;
	if (cntA > cntB) {
		std::cout << cntA << "��" << cntB << "�Ńv���C���[1�̏����ł��I" << std::endl;
	}
	else if (cntA < cntB) {
		std::cout << cntA << "��" << cntB << "�Ńv���C���[2�̏����ł��I" << std::endl;
	}
	else {
		std::cout << cntA << "��" << cntB << "�ň��������ł��I" << std::endl;
	}
}
