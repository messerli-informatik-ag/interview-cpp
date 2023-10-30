#include "pch.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class Fibonacci {

public:
    /**
     * \brief Calculate the n-th Fibonacci Number
     * a_0 = 0
     * a_1 = 1
     * a_n = a_n-1 + a_n-2
     */
    static int Get(int n)
    {
        return 0;
    }

private:
};


namespace InterviewSpecficiation {
TEST_CLASS(FibonacciTest) {
public:

    TEST_METHOD(GivenTheNumberNFibonacciReturnsTheNthFibonacciNumber)
    {
        Assert::AreEqual(Fibonacci::Get(0), 0);
        Assert::AreEqual(Fibonacci::Get(1), 1);
        Assert::AreEqual(Fibonacci::Get(2), 1);
        Assert::AreEqual(Fibonacci::Get(3), 2);
        Assert::AreEqual(Fibonacci::Get(4), 3);
        Assert::AreEqual(Fibonacci::Get(5), 5);
        Assert::AreEqual(Fibonacci::Get(6), 8);
        Assert::AreEqual(Fibonacci::Get(7), 13);
        Assert::AreEqual(Fibonacci::Get(8), 21);
        Assert::AreEqual(Fibonacci::Get(9), 34);
    }

    //TEST_METHOD(GivenALargeNumberNFibonacciReturnsTheNthFibonacciNumber)
    //{
    //    Assert::AreEqual(Fibonacci::Get(46), 1836311903);
    //}
};
}
