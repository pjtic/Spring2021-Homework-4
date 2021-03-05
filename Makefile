all:	main.o
	g++ main.o -o Employee_Wages
main.o: main.cpp employee.cpp employee.h
	g++ -c main.cpp
clean:
	rm *.o
	rm Employee_Wages
