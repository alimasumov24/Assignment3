CC=g++
CFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS=-lgtest -lgtest_main -lpthread
SOURCES=Transformer.cpp Weapon.cpp Autobot.cpp Decepticon.cpp test_transformer.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tests

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


dependencies: $(SOURCES) $(HEADERS)
	$(CC) -MM $(SOURCES) > dependencies.mk

-include dependencies.mk

.PHONY: clean

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.