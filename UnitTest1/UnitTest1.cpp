#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestXOR_True)
		{
			PQR pqr;
			pqr.q = true;
			pqr.r = false;

			bool result = checkXOR(pqr);

			Assert::IsTrue(result);
		}

		TEST_METHOD(TestXOR_False)
		{
			PQR pqr;
			pqr.q = true;
			pqr.r = true;

			bool result = checkXOR(pqr);

			Assert::IsFalse(result);
		}

		TEST_METHOD(TestAND_True)
		{
			PQR pqr;
			pqr.p = true;
			pqr.q = true;
			pqr.r = false;

			bool result = checkAND(pqr);

			Assert::IsTrue(result);
		}

		TEST_METHOD(TestAND_False)
		{
			PQR pqr;
			pqr.p = false;
			pqr.q = true;
			pqr.r = false;

			bool result = checkAND(pqr);

			Assert::IsFalse(result);
		}

		TEST_METHOD(TestEndFuncHandle_True)
		{
			PQR pqr;
			pqr.p = false;
			pqr.q = false;
			pqr.r = false;

			bool result = endFuncHandle(pqr);

			Assert::IsTrue(result);
		}

		TEST_METHOD(TestEndFuncHandle_False)
		{
			PQR pqr;
			pqr.p = true;
			pqr.q = false;
			pqr.r = false;

			bool result = endFuncHandle(pqr);

			Assert::IsFalse(result);
		}
	};
}