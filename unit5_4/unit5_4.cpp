#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Університет/АП/Лабораторні/Тема 5(2)/vs/lab5_4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit54
{
	TEST_CLASS(unit54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 1;
			int t = (i + 1. / (i * i));
			Assert::AreEqual(t, 2);
		}
	};
}