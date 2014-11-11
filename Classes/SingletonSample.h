/* Singletons have one one reference */
//any object that is accessing this one
//will be accessing the same instance
//this means that all local variables will
//be the same
//we can also access this object from anywhere in our
//program
//Alternative to singleton is //single instance//...
#ifndef _SINGLETONSAMPLE_H_
#define _SINGLETONSAMPLE_H_

#include "cocos2d.h"

USING_NS_CC;
class SingletonSample
{
public:
	static SingletonSample* getInstance();

	void storeObject(CCNode* obj)
	{
		veryImportantGameObject = obj;
	}
	CCNode* getStoredObject()
	{
		return veryImportantGameObject;
	}

	
	

private:
	//hide the constructor and deconstructor
	SingletonSample(){};
	~SingletonSample(){};

	//store some node
	CCNode* veryImportantGameObject;
};

#endif



