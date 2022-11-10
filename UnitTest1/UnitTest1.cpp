#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{   
			int n = 21;
			int i = 0;
			int a[n];
			int Low = 15;
			int High = 85;
			Create(a, n, Low, High);
			Print(a, n);
			Sum(n, a);
		}
	};
}
