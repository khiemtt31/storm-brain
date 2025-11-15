# storm-brain
For enhancing my capability of problem-solving skill ♥.

## C++ Setup for Codeforces

This repository provides a structured environment for solving Codeforces problems in C++.

### Directory Structure

```
storm-brain/
├── codeforces/           # Main directory for Codeforces solutions
│   ├── template.cpp      # Template file for quick starts
│   └── examples/         # Example solutions
├── Makefile              # Build automation
└── README.md
```

### Getting Started

#### 1. Prerequisites
Make sure you have a C++ compiler installed:
- **Linux/Mac**: `g++` (usually pre-installed)
- **Windows**: MinGW or WSL

Verify installation:
```bash
g++ --version
```

#### 2. Using the Template

To start solving a new problem:

```bash
# Copy the template to your problem file
cp codeforces/template.cpp codeforces/problem_name.cpp

# Or organize by contest
cp codeforces/template.cpp codeforces/contest_id/problem_a.cpp
```

#### 3. Compiling and Running

Using the Makefile (recommended):

```bash
# Compile a solution
make compile FILE=codeforces/problem_name.cpp

# Compile and run
make run FILE=codeforces/problem_name.cpp

# Clean compiled files
make clean
```

Or compile directly with g++:

```bash
g++ -std=c++17 -O2 -Wall -Wextra codeforces/problem_name.cpp -o codeforces/problem_name.out
./codeforces/problem_name.out
```

#### 4. Template Features

The template includes commonly used macros and shortcuts:
- `ll` - long long
- `vi` - vector<int>
- `vll` - vector<long long>
- `pii` - pair<int, int>
- `pb` - push_back
- `all(x)` - x.begin(), x.end()
- Fast I/O setup with `fastio`

#### 5. Example

Check out `codeforces/examples/a_plus_b.cpp` for a simple example:

```bash
# Run the example
make run FILE=codeforces/examples/a_plus_b.cpp

# Input: 3 5
# Output: 8
```

### Tips

- Use `bits/stdc++.h` for competitive programming (includes all standard libraries)
- Enable fast I/O with `fastio` for time-sensitive problems
- Organize solutions by contest or difficulty level
- Test with sample inputs before submitting

### Workflow

1. Create a new file from the template
2. Read the problem and implement the `solve()` function
3. Test with sample inputs
4. Submit to Codeforces

Happy coding! 🚀
