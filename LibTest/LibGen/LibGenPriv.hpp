/*
 *  LibGenPriv.hpp
 *  LibGen
 *
 *  Created by Praneeth Kolli on 3/31/16.
 *  Copyright © 2016 commvault. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class LibGenPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
