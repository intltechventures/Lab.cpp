/*
 * TestThread.cpp
 *
 * some thread-related references:
 * http://www.cplusplus.com/reference/mutex/lock/
 * http://www.cplusplus.com/reference/thread/thread/
 * https://www.tutorialcup.com/cplusplus/multithreading.htm
 *
 * http://stackoverflow.com/questions/266168/simple-example-of-threading-in-c
 *
 * Intel® Threading Building Blocks (Intel® TBB) lets you easily write parallel C++ programs that take full advantage of multicore performance, that are portable and composable, and that have future-proof scalability.
 * https://www.threadingbuildingblocks.org/
 *
 * http://www.boost.org/doc/libs/1_61_0/doc/html/thread.html
 *
 * https://solarianprogrammer.com/2011/12/16/cpp-11-thread-tutorial/
 *
 *
 *  Created on: May 25, 2016
 *      Author: Kelvin
 */
#include <iostream>
#include <cstdlib>
#include <thread>
#include <mutex>
using namespace std;

std::mutex foo, bar;

void hello() {
	cout << "Demo thread-safe behavior with <thread> and mutexes" << endl;
}

void count1() {
	for (int i = 0; i < 500; i++) {
		std::lock(foo, bar);
		cout << "Counter for Thread #1: " << i << endl;
		foo.unlock();
		bar.unlock();
	}
}

void count2() {
	for (int i = 0; i < 500; i++) {
		std::lock(bar, foo);
		cout << "Counter for Thread #2: " << i << endl;
		bar.unlock();
		foo.unlock();
	}
}

int main() {
	cout << "starting" << endl;
	std::thread first(count1);
	std::thread second(count2);
	cout << "threads are running \n" << endl;

	first.join();
	second.join();

	cout << "ending" << endl;
	return 0;
}
