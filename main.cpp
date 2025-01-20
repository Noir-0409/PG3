#include <stdio.h>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mutex_;
std::condition_variable condition_;
int threadID = 1;

void executeThread(int threadID) {

    std::unique_lock<std::mutex> lock(mutex_);
    condition_.wait(lock, [threadID]() { return threadID == threadID; });
    std::cout << "thread" << threadID << std::endl;
    threadID++;
    condition_.notify_all();

}

int main() {

    std::thread thread1(executeThread, 1);
    std::thread thread2(executeThread, 2);
    std::thread thread3(executeThread, 3);

    thread1.join();
    thread2.join();
    thread3.join();

    return 0;

}
