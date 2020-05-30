
#include "iostream"

#include "VSPtr.h"
#include "VSPtr.cpp"

#include "List.h"
#include "List.cpp"

#include "GarbageCollector.cpp"

using namespace std;
int main() {
    VSPtr<int> myPtr =VSPtr<int>::New();
    VSPtr<int> myPtr2 =VSPtr<int>::New();
    return 0;
}
