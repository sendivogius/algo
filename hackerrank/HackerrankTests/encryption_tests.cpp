#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\encryption.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(Encryption)
	{
	public:
		
		TEST_METHOD(EncryptionTest1)
		{
			const string to_enc = "ifmanwasmeanttostayonthegroundgodwouldhavegivenusroots";
			const string result = "imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau ";
			Assert::IsTrue(encrypt(to_enc) == result);
		}

		TEST_METHOD(EncryptionTest2)
		{
			const string to_enc = "haveaniceday";
			const string result = "hae and via ecy ";
			Assert::IsTrue(encrypt(to_enc) == result);
		}

		TEST_METHOD(EncryptionTest3)
		{
			const string to_enc = "feedthedog";
			const string result = "fto ehg ee dd ";
			Assert::IsTrue(encrypt(to_enc) == result);
		}

		TEST_METHOD(EncryptionTest4)
		{
			const string to_enc = "chillout";
			const string result = "clu hlt io ";
			Assert::IsTrue(encrypt(to_enc) == result);
		}	};
}