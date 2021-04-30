main: main.o printer.o misc.o entity.o livingentity.o miscFunc.o bullet.o
	g++ -o main main.o printer.o misc.o entity.o livingentity.o miscFunc.o bullet.o -lcurses
	rm *.o

main.o: main.cpp
	g++ -c -Wall main.cpp

printer.o: ./classes/printer.cpp
	g++ -c -Wall ./classes/printer.cpp

misc.o: ./classes/misc.cpp
	g++ -c -Wall ./classes/misc.cpp

entity.o: ./classes/entities/entity.cpp
	g++ -c -Wall ./classes/entities/entity.cpp

livingentity.o: ./classes/entities/livingentity.cpp
	g++ -c -Wall ./classes/entities/livingentity.cpp

miscFunc.o: ./classes/miscFunc.cpp
	g++ -c -Wall ./classes/miscFunc.cpp

bullet.o: ./classes/entities/bullet.cpp
	g++ -c -Wall ./classes/entities/bullet.cpp

clean:
	rm *.o