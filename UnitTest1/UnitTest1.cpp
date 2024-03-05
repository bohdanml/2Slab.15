#include "pch.h"
#include "CppUnitTest.h"
#include "..//2Slab.15/pair.h"
#include "..//2Slab.15/rational.h"
#include "..//2Slab.15/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestAddition)
        {
            Rational r1;
            r1.Init(5, 7);
            Assert::AreEqual(r1.getFirst(), 5);
            Assert::AreEqual(r1.getSecond(), 7);
        }
	};
}
