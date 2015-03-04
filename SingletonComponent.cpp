
// STD includes
#include <iostream>
#include <stdio.h>

#include "SingletonComponent.h"

//---------------------------------------------------------------------------
SingletonComponent::SingletonComponent()
{
  // See http://stackoverflow.com/questions/12318693/c-segmentation-fault-when-using-cout-in-static-variable-initialization
  std::cout << "SingletonComponent: ctor" << std::endl;
}

//---------------------------------------------------------------------------
SingletonComponent::~SingletonComponent()
{
  std::cout << "SingletonComponent: dtor" << std::endl;
}

//---------------------------------------------------------------------------
void SingletonComponent::makeSomething(const char* clientName)
{
  std::cout << "SingletonComponent[" << this << "] makeSomething"
            << " (called from " << clientName << ")" << std::endl;
}

//---------------------------------------------------------------------------
SingletonComponent* SingletonComponent::GetInstance()
{
  return SingletonComponent::Instance;
}

//---------------------------------------------------------------------------
CTK_SINGLETON_DEFINE(SingletonComponent)
//void SingletonComponent::classInitialize() 
//{                                                   
//  Self::Instance = new SingletonComponent;                        
//}                                                   
//                                                    
//void SingletonComponent::classFinalize()                          
//{                                                   
//  delete Self::Instance;                            
//}                                                   

//SingletonComponentInitialize::SingletonComponentInitialize()                
//{                                                   
//  if(++Self::Count == 1)                            
//    { SingletonComponent::classInitialize(); }                    
//}                                                   
//                                                    
//SingletonComponentInitialize::~SingletonComponentInitialize()               
//{                                                   
//  if(--Self::Count == 0)                            
//    { SingletonComponent::classFinalize(); }                      
//}                                                   
//                                                    
//unsigned int SingletonComponentInitialize::Count;               
//SingletonComponent* SingletonComponent::Instance;                                                  

