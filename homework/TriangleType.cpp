#include "stdafx.h"
#include "TriangleType.h"


TriangleType::TriangleType(int s1, int s2, int s3)
{
	iSide1 = s1;
	iSide2 = s2;
	iSide3 = s3;
}


int TriangleType::GetTriangleType()
{
	int iReturn = -1;
	if ((iSide1 + iSide2 <= iSide3) || (iSide2 + iSide3 <= iSide1) || (iSide1 + iSide3 <= iSide2))
	{
		iReturn = -1;
	}
	else
	{
		if (iSide1 == iSide2 && iSide2 == iSide3)
		{
			iReturn = 0;
		}
		else if ((iSide1 == iSide2) || (iSide2 == iSide3) || iSide1 == iSide3)
		{
			iReturn = 1;
		}
		else
			iReturn = 2;
	}
	return  iReturn;
}

void TriangleType::SetTriangleSideLength(int s1, int s2, int s3)
{
	iSide1 = s1;
	iSide2 = s2;
	iSide3 = s3;
}

TriangleType::~TriangleType()
{
}
