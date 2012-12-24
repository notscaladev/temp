#ifndef _GENERICPOOL_H_
#define _GENERICPOOL_H_

template<typename T>
class GenericPool
{
private:
	int m_Growth;
	int m_AvailableItemCountMaximum;
	int m_UnrecycledItemCount;
public:
	virtual T onAllocatePoolItem() = 0;
};
#endif // !_GENERICPOOL_H_
