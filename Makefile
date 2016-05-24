all: 
	g++ main.cpp -Wall -o main -lncurses


clean:
	rm -rf main *.log
