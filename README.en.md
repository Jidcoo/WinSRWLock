# WinSRWLock

#### Description
ReetrantReadWriteLock in windows os

#### How to use

1.  add the lib header file
```cpp
#include <WinSRWLock.h>
```
2.  using 
```cpp
void use(){
   WinSRWLock lock;
   //init the lock
   lock.initLock();
   //apply the read lock
   lock.readLock();
   //......
   //release the read lock
   lock.readUnlock();
   //apply the write lock
   lock.writeLock();
   //.......
   //release the write lock
   lock.writeUnLock();
}
```
