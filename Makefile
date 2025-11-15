# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra

# Default target
.PHONY: help
help:
	@echo "Codeforces C++ Build System"
	@echo "============================"
	@echo "Usage:"
	@echo "  make compile FILE=path/to/file.cpp   - Compile a specific C++ file"
	@echo "  make run FILE=path/to/file.cpp       - Compile and run a C++ file"
	@echo "  make clean                           - Remove compiled binaries"
	@echo ""
	@echo "Examples:"
	@echo "  make compile FILE=codeforces/problem1.cpp"
	@echo "  make run FILE=codeforces/problem1.cpp"

# Compile a single file
.PHONY: compile
compile:
	@if [ -z "$(FILE)" ]; then \
		echo "Error: Please specify FILE=path/to/file.cpp"; \
		exit 1; \
	fi
	@echo "Compiling $(FILE)..."
	$(CXX) $(CXXFLAGS) $(FILE) -o $(basename $(FILE)).out
	@echo "Compiled successfully: $(basename $(FILE)).out"

# Compile and run
.PHONY: run
run: compile
	@echo "Running $(basename $(FILE)).out..."
	@./$(basename $(FILE)).out

# Clean compiled files
.PHONY: clean
clean:
	@echo "Cleaning compiled files..."
	@find . -name "*.out" -type f -delete
	@find . -name "a.out" -type f -delete
	@echo "Clean complete!"
