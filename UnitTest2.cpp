#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
			int t;
			const int n = 4;
			int i = 2;
			int r[n] = { 20,1,-5,9 };
			t = Sum(r, n, i);
			Assert::AreEqual(t, 9);
		}
	};
}
