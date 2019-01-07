#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BowlingGame/GameClass.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;




namespace BowlingGameTest
{		
	TEST_CLASS(UnitTest1)
	{
	private:
		Game g;
		void rollMany(unsigned int n, unsigned int pins)
		{
			for (int i = 0; i < n; i++)
				g.roll(pins);
		}
	public:
		TEST_METHOD(gutterGame)
		{
			rollMany(20, 0);
			Assert::IsTrue(g.Score() == 0);
		}
		TEST_METHOD(allOne)
		{
			rollMany(20, 1);
			Assert::IsTrue(g.Score() == 20);
		}
		TEST_METHOD(oneSpare)
		{
			g.roll(5);
			g.roll(5);	// spare
			g.roll(3);
			rollMany(17, 0);
			Assert::IsTrue(g.Score() == 16);
		}

	};
}