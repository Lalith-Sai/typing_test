HEADER_DIR = include
SRC_DIR = src

output: main.o utilities.o testData.o
	g++ main.o utilities.o testData.o -o run

main.o: $(SRC_DIR)/main.cpp
	g++ -c $(SRC_DIR)/main.cpp

utilities.o: $(SRC_DIR)/utilities.cpp $(HEADER_DIR)/utilities.h
	g++ -c $(SRC_DIR)/utilities.cpp

testData.o: $(SRC_DIR)/testData.cpp $(HEADER_DIR)/testData.h
	g++ -c $(SRC_DIR)/testData.cpp

clean:
	rm *.o run