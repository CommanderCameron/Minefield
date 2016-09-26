/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
		minefield.placeMine(i,j);
		ASSERT_EQ( MINE_HIDDEN, minefield.get(i,j) );
		}
	}
}
