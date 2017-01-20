#ifndef ANDROID_TEST_H
#define ANDROID_TEST_H

#include <utils/RefBase.h>

namespace android{


class TestRef : public RefBase {
private:
    int num;
public:
    void setNum(int n);
};


}


#endif //ANDROID_TEST_H
