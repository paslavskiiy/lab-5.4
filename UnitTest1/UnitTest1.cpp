#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.4/lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g = S0(1, 25);
			Assert::AreNotEqual(g,1.41);
		}
	};
}
