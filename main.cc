#include <iostream>
#include <unistd.h>
#include "thread_pool.h"
#include "test_work.h"

using namespace std;

void test_manager_inc()
{
    ThreadPool* ptr = ThreadPool::create_instance()->set_manager_flag(true);
    ptr->initial();
    
    for (int i = 0; i < 3; ++i) {
        TestWork work;
        ptr->add_work(work);
    }
    
    sleep(600);
}

int main(int argc, char* argv[])
{
    test_manager_inc();
    return 0;
}
