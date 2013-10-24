//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream>
#include "Axis.h"
#include "Rect.h"
#include "Triangle.h"

using namespace std;

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
	Rect n(5, 6);
	n.show();
	n.hide();
	n.setX(20);
	n.setY(10);
	n.show();

	Triangle t(15, 3);
	t.show();

	char x;
	
	return 0;
}
//---------------------------------------------------------------------------
