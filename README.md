# WinSRWLock

#### 介绍
ReetrantReadWriteLock：
Windows系统下的读写锁封装

#### 使用说明

1.  添加头文件
#include <WinSRWLock.h>
2.  使用
void use(){
   WinSRWLock lock;
   //初始化
   lock.initLock();
   //申请读锁（共享锁）
   lock.readLock();
   //......
   //释放读锁
   lock.readUnlock();
   //申请写锁（排他锁）
   lock.writeLock();
   //.......
   //释放写锁
   lock.writeUnLock();
}



3.  xxxx


