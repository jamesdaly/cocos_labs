#include "SingletonSample.h"


//instance of the object to be used
SingletonSample* singletonInstance = 0;

SingletonSample* SingletonSample::getInstance()
{
	//if the instance is null
	//create the instance 
	//otherwise
	//return the instance
	if(singletonInstance == 0)
	{
		singletonInstance = new SingletonSample();
	}
	return singletonInstance;
}

