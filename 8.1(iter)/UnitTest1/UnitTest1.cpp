#include "pch.h"
#include "CppUnitTest.h"
#include <cstring>
#include "../8.1(iter)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindFourthFromEndDotIndex)
        {
            char str[] = "This.is.a.sample.string.with.multiple.dots.";
            int len = strlen(str);

            int result = FindFourthFromEndDotIndex(str, len);

            Assert::AreEqual(23, result);
        }

        TEST_METHOD(TestReplaceDotsWithStars)
        {
            char str[] = "This.is.a.sample.string.with.multiple.dots.";
            int len = strlen(str);
            char expected[] = "This**s****ample**tring**ith**ultiple**ots*";
            char result[101]; 

            strcpy_s(result, str);
            ReplaceDotsWithStars(result, len);
            result[len] = '\0'; 

            Assert::AreEqual(expected, result);
        }
    };
}