A: a.o A.o
	g++ -o a A.o a.o

a.o: a.cpp a.h	
	g++ -c a.cpp

A.o: A.cpp a.h	
	g++ -c A.cpp
clean:
	rm*.o 
