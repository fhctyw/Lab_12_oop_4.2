#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_4.2\Progression.h"
#include "..\Lab_12_oop_4.2\ArithmeticProgression.cpp"
#include "..\Lab_12_oop_4.2\GeometricProgression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			IProgression* p = new ArithmeticProgression(0, 2);
			Assert::AreEqual((int)p->calcElement(3), 6);
		}
	};
}
