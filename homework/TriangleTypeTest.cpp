#include <gtest/gtest.h>
#include "TriangleType.h"

TEST()
{
	TriangleType*  Triangle = new TriangleType(0, 4, 5);
	EXPECT_EQ(Triangle->GetTriangleType, -1);

	Triangle->SetTriangleSideLength(2, 6, 9);
	EXPECT_EQ(Triangle->GetTriangleType, -1);

	Triangle->SetTriangleSideLength(1, 1, 1);
	EXPECT_EQ(Triangle->GetTriangleType, 0);

	Triangle->SetTriangleSideLength(3, 3, 4);
	EXPECT_EQ(Triangle->GetTriangleType, 1);

	Triangle->SetTriangleSideLength(3, 4, 5);
	EXPECT_EQ(Triangle->GetTriangleType, 2);

	delete Triangle;
}