#include "classBasic.h"
#include <iostream>

using namespace std;
using namespace ContosoData;

void ContosoData::Func(ObjectManger om)
{
    om.DoSomething();
}

void ObjectManger::DoSomething()
{
    cout << "DO something " << endl;
}

int main()
{
    ObjectManger om;
    om.DoSomething();
}