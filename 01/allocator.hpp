#pragma once
#include <iostream>
#include <cstdlib>
class Allocator
{
char* memory;
size_t offset;
size_t maxsize;
public:
	Allocator()
	{
		memory = nullptr;
		offset = 0;
		maxsize = 0;
	}
	~Allocator();
	void makeAllocator(size_t maxSize);
	char* alloc(size_t size);
	void reset();
};