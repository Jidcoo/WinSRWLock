#pragma once
/**
*┌──────────────────────────────────────────────────────────────┐
*│　Description:ReadWriteLock in WIN OS.Use in Multi- 
*│             Threading env.[Unexported]                                             
*│　Author:Jidcoo                                                
*│　Version:1.0                                                 
*│　Date:2021-09-16 13:19                                                 
*└──────────────────────────────────────────────────────────────┘
*┌──────────────────────────────────────────────────────────────┐
*│　[Update]                                                    
*│  Info:                                                        
*│  Date:                                                 
*└──────────────────────────────────────────────────────────────┘
*/
#include <windows.h>
namespace WSHTTP{
	typedef enum{NOT_INIT,UNLOCK,READ_LOCK,WRITE_LOCK} MASK;
	class WinSRWLock {
	public:
		WinSRWLock();
	public:
		void initLock();
		void readLock();
		void writeLock();
		void readUnlock();
		void writeUnlock();
		MASK getLockMask();
	private:
		MASK _lock_mask;
		SRWLOCK _srwLock;
	};
};
