#ifndef _COLORPOOL_H
#define _COLORPOOL_H_

template<typename C> class GenericPool {
protected:
	C onAllocatePoolItem();

	void onHandleRecycleItem(C* c);
};
#endif // !_COLORPOOL_H
