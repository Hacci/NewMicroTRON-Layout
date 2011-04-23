/*
 *  STLC++.cp
 *  STLC++
 *
 *  Created by intelMacminiX6 on 11/01/09.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include "STLC++.h"
#include "STLC++Priv.h"

void STLC__::HelloWorld(const char * s)
{
	 STLC__Priv *theObj = new STLC__Priv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void STLC__Priv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

