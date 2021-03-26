Allocator.o: 
	g++ -Wall -g -c -fsanitize=address,undefined Allocator.cpp 
all: test_one 
test: test_one 
	./test_one 
test_one: Allocator.o 
	g++ -Wall -g -fsanitize=address,undefined Allocator.o test_one.cpp -o test_one 
clean: 
	-rm *.o test_one
