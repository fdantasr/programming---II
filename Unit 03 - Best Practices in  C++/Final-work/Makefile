# mingw32-make
# ./finalwork

all: finalwork

finalwork: main.o proto.o
	g++ -o finalwork main.o proto.o

main.o: main.cc 
	g++ -c main.cc 

proto.o: proto.cc 
	g++ -c proto.cc 


clean:
	rm -rf *.o *~ finalwork