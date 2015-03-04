#include "Component2.h"

// STD includes
#include <iostream>

#include "SingletonComponent.h"

//---------------------------------------------------------------------------
Component2::Component2()
{
  std::cout << "Component2: ctor" << std::endl;
  SingletonComponent::GetInstance()->makeSomething("Component2-ctor");
}

//---------------------------------------------------------------------------
Component2::~Component2()
{
  std::cout << "Component2: dtor" << std::endl;
}


