#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\caesar_cipher.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(CaesarCipher)
	{
	public:
		
		TEST_METHOD(CaesarCipherTest1)
		{
			const auto result = cipher("middle-Outz", 2);
			const string expected = "okffng-Qwvb";
			Assert::AreEqual(expected, result);
		}

	};
}