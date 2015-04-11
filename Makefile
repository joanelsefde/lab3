f74034033: A.o f74034033.o
	g++ -o A f74034033.o A.o
A.o: A.cpp A.h
	g++ -c A.cpp
f74034033.o: f74034033.cpp A.h
	g++ -c f74034033.cpp
clean:
	rm A *.o
