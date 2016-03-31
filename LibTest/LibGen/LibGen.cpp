/*
 *  LibGen.cpp
 *  LibGen
 *
 *  Created by Praneeth Kolli on 3/31/16.
 *  Copyright © 2016 commvault. All rights reserved.
 *
 */

#include <iostream>
#include "LibGen.hpp"
#include "LibGenPriv.hpp"

void LibGen::HelloWorld(const char * s)
{
	 LibGenPriv *theObj = new LibGenPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void LibGenPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

