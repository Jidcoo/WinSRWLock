#include "WinSRWLock.h"

WSHTTP::WinSRWLock::WinSRWLock()
{
	_lock_mask = NOT_INIT;
}


void WSHTTP::WinSRWLock::initLock()
{
	InitializeSRWLock(&_srwLock);
	_lock_mask = UNLOCK;
}

void WSHTTP::WinSRWLock::readLock()
{
	AcquireSRWLockShared(&_srwLock);
	_lock_mask = READ_LOCK;
}

void WSHTTP::WinSRWLock::writeLock()
{
	AcquireSRWLockExclusive(&_srwLock);
	_lock_mask = WRITE_LOCK;
}

void WSHTTP::WinSRWLock::readUnlock()
{
	ReleaseSRWLockShared(&_srwLock);
	_lock_mask = UNLOCK;
}

void WSHTTP::WinSRWLock::writeUnlock()
{

	ReleaseSRWLockExclusive(&_srwLock);
	_lock_mask = UNLOCK;
}

WSHTTP::MASK WSHTTP::WinSRWLock::getLockMask()
{
	return _lock_mask;
}
