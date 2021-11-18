#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr7.1a\lab_7.1a.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** t = new int* [2];
			for (int i = 0; i < 2; i++)
				t[i] = new int[2];

			t[0][0] = 1;
			t[0][1] = 4;
			t[1][0] = 4;
			t[1][1] = 2;

			int S = 0;
			int k = 0;
			int expected = 2;
			
			Calc(t, 2, 2, S, k);
			Assert::AreEqual(expected, k);
		}
	};
}
