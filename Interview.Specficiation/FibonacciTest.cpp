#include "pch.h"
#include "CppUnitTest.h"

#include "Fibonacci.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InterviewSpecficiation {
TEST_CLASS(FibonacciTest) {
public:

    TEST_METHOD(GivenTheNumberNFibonacciReturnsTheNthFibonacciNumber)
    {
        Assert::AreEqual(0, Fibonacci::Get(0));
        Assert::AreEqual(1, Fibonacci::Get(1));
        Assert::AreEqual(1, Fibonacci::Get(2));
        Assert::AreEqual(2, Fibonacci::Get(3));
        Assert::AreEqual(3, Fibonacci::Get(4));
        Assert::AreEqual(5, Fibonacci::Get(5));
        Assert::AreEqual(8, Fibonacci::Get(6));
        Assert::AreEqual(13, Fibonacci::Get(7));
        Assert::AreEqual(21, Fibonacci::Get(8));
        Assert::AreEqual(34, Fibonacci::Get(9));
    }

    //TEST_METHOD(GivenALargeNumberNFibonacciReturnsTheNthFibonacciNumber)
    //{
    //    Assert::AreEqual(Fibonacci::Get(46), 1836311903);
    //}
};
}
