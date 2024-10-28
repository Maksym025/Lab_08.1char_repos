#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1char/Lab_08.1char.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = "whilewhile";  
			int count = Count(str);         
			Assert::AreEqual(count, 2);    
		}
	};
}
