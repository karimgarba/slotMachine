# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++11 -Wall
# Directories
SRCDIR = src
INCDIR = include
BUILDDIR = build
# Executable name
TARGET = slotMachineGame

# Files to compile
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(SRCS:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)
DEPS = $(wildcard $(INCDIR)/*.h)

# Build target
all: $(TARGET)

# Rule to create the build directory
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Rule to compile source files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS) | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

# Rule to link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ -lsqlite3

# Clean rule
clean:
	rm -rf $(BUILDDIR) $(TARGET)

# Phony targets
.PHONY: all clean
