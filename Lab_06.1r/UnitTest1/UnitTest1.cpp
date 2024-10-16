#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1r/Lab_06.1r.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			const int size = 23;
			int b[size] = { 66,34,13,32,67,74,35,64,34,76,91,24,65,34,65,34,65,76,43,65,76,32,23 };	
			int i = 0;
			int sum = SumElements(b, size,i);
			Assert::AreEqual(sum, 1123);
		}
	};
}