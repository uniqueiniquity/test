// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
namespace TestFramework {
	class Demo {
	public:
		struct product {
			int weight;
			double price;
		} apple;

		int foo()
		{
			apple.weight = 5;
			apple.price = 42.4;
			//printf("hello world!");
			return apple.weight;
		}

	public:
		Demo() {
			apple.weight = 15;
			apple.price = 52.5;
			foo();
		}

	};
}

int main()
{
	TestFramework::Demo* d = new TestFramework::Demo();

	return 0;
}