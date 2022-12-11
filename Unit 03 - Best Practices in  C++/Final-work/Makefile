# mingw32-make
# ./teste

all: teste

teste: main.o proto.o
	g++ -o teste main.o proto.o

main.o: main.cc 
	g++ -c main.cc 

proto.o: proto.cc 
	g++ -c proto.cc 


clean:
	rm -rf *.o *~ teste