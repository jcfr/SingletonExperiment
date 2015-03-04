#include "Component1.h"

// STD includes
#include <iostream>

#include "SingletonComponent.h"

//---------------------------------------------------------------------------
Component1::Component1()
{
  std::cout << "Component1: ctor" << std::endl;
  SingletonComponent::GetInstance()->makeSomething("Component1-ctor");
}

//---------------------------------------------------------------------------
Component1::~Component1()
{
  std::cout << "Component1: dtor" << std::endl;
}
