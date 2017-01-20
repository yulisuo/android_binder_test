#include "Test.h"

namespace android{

void TestRef::setNum(int n){
    num = n;
}

int main(){
    TestRef* pT = new TestRef;
    {
        sp<TestRef> spT(pT);
        wp<TestRef> wpT(spT);
    }
    return 0;
}

}
