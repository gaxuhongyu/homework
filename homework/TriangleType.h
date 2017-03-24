#pragma once
class TriangleType
{
public:

	/**
	* Input Triangle sides length
	* @param [in] s1 Triangle side lengths one
	* @param [in] s2 Triangle side lengths two
	* @param [in] s3 Triangle side lengths three
	*/
	TriangleType(int s1, int s2, int s3);
	~TriangleType();

	/**
	* check Triangle type.
	* @return is mark triangle type
	* @retval -1 is not a triangle
	* @retval 0  Equilateral triangle
	* @retval 1  An isosceles triangle
	* @retval 2  Ordinary triangle
	*/
	int GetTriangleType();

	/**
	* Set Triangle sides length
	* @param [in] s1 Triangle side lengths one
	* @param [in] s2 Triangle side lengths two
	* @param [in] s3 Triangle side lengths three
	*/
	void SetTriangleSideLength(int s1, int s2, int s3);
private:
	int iSide1;
	int iSide2;
	int iSide3;
};

