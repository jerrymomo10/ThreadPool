#ifndef _TEST_WORK_H_
#define _TEST_WORK_H_

#include "work.h"

class TestWork: public WorkBase {

public:
    TestWork(): m_add_number(7) {
        WorkBase("TestWork");
    }
    
    TestWork* clone() {
        return new TestWork(*this);
    }
    
    void do_work(ofstream& os);

private:
    int m_add_number;

};

#endif /* _TEST_WORK_H_ */
