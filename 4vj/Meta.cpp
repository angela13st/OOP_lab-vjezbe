
#include <iostream>
#include <stdlib.h>
#include "Meta.h"

void Meta::Stvaranje()
{
	tockabx = tockaax + sirina;
	tockaby = tockaay;
	tockadx = tockaax;
	tockady = tockaay + visina;
	tockacx = tockabx;
	tockacy = tockaby + visina;
}
