#include "test_work.h"
#include "thread_pool.h"

void TestWork::do_work(ofstream& os)
{
    ThreadPool* p_thread_pool = ThreadPool::create_instance();
    
    WorkBase* work;
    for (int i = 0; i < m_add_number; ++i) {
        work = static_cast<WorkBase*> (new TestWork());
        p_thread_pool->add_work(work);
    }
    
    sleep(10);
}
