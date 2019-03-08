CXX	:= g++ -std=c++11 -g -O2 # debugging and optimization on

all: hw5

# See main for the deatils of computing power
hw5:  hw5.o power.o
	$(CXX) hw5.o power.o -o hw5

power.o: power.s
	$(GXX) power.s
clean:
	rm *.o *.exe hw5

