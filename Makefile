climb: climb.o
	g++ -g -o climb climb.o

climb.o: climb.cc
	g++ -g -c climb.cc


clean:
	\rm *.o
	\rm climb
