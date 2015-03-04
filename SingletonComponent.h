
#ifndef SINGLETONCOMPONENT_H
#define SINGLETONCOMPONENT_H

#include "ctkSingleton.h"

//---------------------------------------------------------------------------
class SingletonComponent
{
public:
  SingletonComponent();
  virtual ~SingletonComponent();

  void makeSomething(const char* clientName);

  /// Return the singleton instance with no reference counting.
  static SingletonComponent* GetInstance();

protected:
  CTK_SINGLETON_DECLARE(SingletonComponent)
  //static SingletonComponent* Instance;                             
  //static void classInitialize();                     
  //static void classFinalize();                       
  //friend class SingletonComponentInitialize;                     
  //typedef SingletonComponent Self;
};


//---------------------------------------------------------------------------
#define LIBSTATIC_EXPORT
CTK_SINGLETON_DECLARE_INITIALIZER(LIBSTATIC_EXPORT,SingletonComponent)
//class LIBSTATIC_EXPORT SingletonComponentInitialize                            
//{                                                                  
//public:                                                            
//  typedef SingletonComponentInitialize Self;                                   
//                                                                   
//  SingletonComponentInitialize();                                              
//  ~SingletonComponentInitialize();                                             
//private:                                                           
//  static unsigned int Count;                                       
//};                                                                 
//                                                                   
//static SingletonComponentInitialize SingletonComponentInitializer;

#endif
