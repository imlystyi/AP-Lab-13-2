// Якубовський Владислав, РІ-11, АП, ЛР 13.2.1
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_13_2_1/AP_Lab_13_2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab1321UT
{
	TEST_CLASS(APLab1321UT)
	{
	public:
		
		TEST_METHOD(TestMin)
		{
			int _min = MIN(5, 7);

			Assert::AreEqual(5, _min);
		}

		TEST_METHOD(TestMax)
		{
			int _max = MAX(5, 7);

			Assert::AreEqual(7, _max);
		}
	};
}
