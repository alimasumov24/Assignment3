
CXX = g++

CXXFLAGS = -Wall -Werror -std=c++11


SRC = Transformer.cpp Engine.cpp Weapon.cpp Autobot.cpp Decepticon.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = transformers


all: $(TARGET)


$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f $(OBJ) $(TARGET)




