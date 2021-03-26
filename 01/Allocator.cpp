#include "allocator.hpp"
Allocator::~Allocator()
{
	if (memory)
		delete[]memory;
}
void Allocator::makeAllocator(size_t maxSize)
{
	if (memory == nullptr)
	{
		memory = new char[maxSize];
		maxsize = maxSize;
	}
	else
	{
		delete []memory;
		memory = new char[maxSize];
		maxsize = maxSize;
	}
}
char* Allocator::alloc(size_t size)
{
	if (offset + size > maxsize)
		return nullptr;
	else
	{
		int buf = offset;
		offset += size;
		return memory + buf;
	}
}
void Allocator::reset()
{
	offset = 0;
}