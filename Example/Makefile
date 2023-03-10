# Simple MAkefile

GCC = g++
RM = rm -rf
COMPILE_FLAGS = -c -std=c++11
LINK_FLAGS = -o

all: target

target: ejemplo1

ejemplo1.o: ejemplo1.cpp 
	$(GCC) $(COMPILE_FLAGS) ejemplo1.cpp

ejemplo1: ejemplo1.o
	$(GCC) $(LINK_FLAGS) ejemplo1 ejemplo1.o

clean:
	$(RM) ejemplo1.o ejemplo1

