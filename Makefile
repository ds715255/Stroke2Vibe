CXX ?= g++
CPPFLAGS ?= -Iinclude -I/usr/include/antlr4-runtime
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra
LDLIBS ?= -lantlr4-runtime

TARGET := Stroke2Vibe
SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(SOURCES:src/%.cpp=build/%.o)
DEPS := $(OBJECTS:.o=.d)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

build/%.o: src/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	$(RM) -r build $(TARGET)

-include $(DEPS)
