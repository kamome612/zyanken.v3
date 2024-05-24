#include <stdio.h>
#include "Referee.h"

Referee* ref;

int main()
{
	srand(std::time(nullptr));
	ref = new Referee;
	ref->GameLoop();
	return 0;
}