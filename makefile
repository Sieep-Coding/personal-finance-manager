CXX := g++
CXXFLAGS := -std=c++11 -Wall

SRCS := main.cpp account.cpp transaction.cpp finance_manager.cpp
OBJS := $(SRCS:.cpp=.o)
EXEC := finance_manager

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
