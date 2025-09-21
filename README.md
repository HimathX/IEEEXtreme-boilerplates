# IEEEXtreme Boilerplates 🚀

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![GitHub stars](https://img.shields.io/github/stars/HimathX/IEEEXtreme-boilerplates.svg)](https://github.com/HimathX/IEEEXtreme-boilerplates/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/HimathX/IEEEXtreme-boilerplates.svg)](https://github.com/HimathX/IEEEXtreme-boilerplates/network)

A comprehensive collection of boilerplate code templates and utilities for competitive programming in IEEE Xtreme competition. This repository provides ready-to-use code snippets, algorithms, and data structures to help participants quickly implement solutions during the contest.

## 📋 Table of Contents

- [Features](#-features)
- [Quick Start](#-quick-start)
- [Folder Structure](#-folder-structure)
- [Usage Examples](#-usage-examples)
- [Supported Languages](#-supported-languages)
- [Contributing](#-contributing)
- [License](#-license)

## ✨ Features

- **Multi-language Support**: Boilerplates available in C++, Python, Java, and JavaScript
- **Algorithm Templates**: Pre-implemented common algorithms (sorting, searching, graph algorithms)
- **Data Structure Implementations**: Ready-to-use data structures (stacks, queues, trees, graphs)
- **Mathematical Utilities**: Number theory, combinatorics, and geometry functions
- **Input/Output Helpers**: Fast I/O templates for competitive programming
- **Time-tested Solutions**: All templates are optimized for contest environments
- **Clean Code Structure**: Well-documented and easily customizable templates
- **Contest-ready**: Designed specifically for IEEE Xtreme time constraints

## 🚀 Quick Start

### Prerequisites

Make sure you have the following installed on your system:
- **C++**: GCC 7.0+ or Clang 6.0+
- **Python**: Python 3.6+
- **Java**: JDK 8+
- **Node.js**: Version 12+ (for JavaScript)

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/HimathX/IEEEXtreme-boilerplates.git
   cd IEEEXtreme-boilerplates
   ```

2. **Choose your preferred language directory**:
   ```bash
   cd cpp/    # For C++ templates
   cd python/ # For Python templates
   cd java/   # For Java templates
   cd js/     # For JavaScript templates
   ```

3. **Copy the template you need**:
   ```bash
   cp template.cpp my_solution.cpp  # Example for C++
   ```

4. **Start coding**:
   Edit the template file and implement your solution!

## 📁 Folder Structure

```
IEEEXtreme-boilerplates/
├── cpp/
│   ├── algorithms/
│   │   ├── sorting/
│   │   ├── searching/
│   │   ├── graph/
│   │   └── dynamic_programming/
│   ├── data_structures/
│   │   ├── trees/
│   │   ├── graphs/
│   │   └── advanced/
│   ├── math/
│   │   ├── number_theory/
│   │   ├── geometry/
│   │   └── combinatorics/
│   ├── utilities/
│   │   ├── io_helpers/
│   │   └── debugging/
│   └── template.cpp
├── python/
│   ├── algorithms/
│   ├── data_structures/
│   ├── math/
│   ├── utilities/
│   └── template.py
├── java/
│   ├── algorithms/
│   ├── data_structures/
│   ├── math/
│   ├── utilities/
│   └── Template.java
├── js/
│   ├── algorithms/
│   ├── data_structures/
│   ├── math/
│   ├── utilities/
│   └── template.js
├── docs/
│   ├── algorithms.md
│   ├── data_structures.md
│   └── tips_and_tricks.md
├── examples/
│   ├── sample_problems/
│   └── solutions/
├── LICENSE
└── README.md
```

## 💡 Usage Examples

### Basic Template Usage (C++)

```cpp
#include "cpp/template.cpp"

int main() {
    fastIO();
    
    int n;
    cin >> n;
    
    // Your solution here
    
    return 0;
}
```

### Using Algorithm Templates

```cpp
// Example: Using binary search template
#include "cpp/algorithms/searching/binary_search.cpp"

vector<int> arr = {1, 3, 5, 7, 9, 11};
int target = 7;
int result = binarySearch(arr, target);
```

### Data Structure Usage

```cpp
// Example: Using segment tree for range queries
#include "cpp/data_structures/trees/segment_tree.cpp"

SegmentTree st(arr);
int sum = st.query(l, r);  // Range sum query
st.update(i, val);         // Point update
```

### Mathematical Utilities

```python
# Example: Using number theory functions in Python
from python.math.number_theory import gcd, lcm, is_prime, sieve

# Generate primes up to n
primes = sieve(1000000)

# Check if number is prime
if is_prime(n):
    print("Prime number")
```

## 🌐 Supported Languages

| Language | Version | Template File | Key Features |
|----------|---------|---------------|--------------|
| **C++** | C++14+ | `template.cpp` | Fast I/O, STL containers, algorithms |
| **Python** | 3.6+ | `template.py` | Built-in data structures, libraries |
| **Java** | JDK 8+ | `Template.java` | Collections framework, BigInteger |
| **JavaScript** | ES6+ | `template.js` | Modern syntax, built-in methods |

## 🤝 Contributing

We welcome contributions from the competitive programming community! Here's how you can help:

1. **Fork the repository**
2. **Create a feature branch**: `git checkout -b feature/new-algorithm`
3. **Add your template/algorithm** with proper documentation
4. **Test your code** with sample inputs
5. **Commit your changes**: `git commit -m "Add new algorithm template"`
6. **Push to the branch**: `git push origin feature/new-algorithm`
7. **Open a Pull Request**

### Contribution Guidelines

- Follow the existing code style and structure
- Add comments explaining the algorithm/data structure
- Include time and space complexity information
- Provide usage examples in the comments
- Test your code with multiple test cases

## 📄 License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- IEEE Computer Society for organizing the IEEEXtreme competition
- Competitive programming community for inspiration and best practices
- Contributors who help maintain and improve this repository

## 📞 Support

If you have questions or need help:
- Open an [issue](https://github.com/HimathX/IEEEXtreme-boilerplates/issues) on GitHub
- Check the [documentation](docs/) for detailed explanations
- Review [example solutions](examples/) for reference

---

⭐ **Star this repository** if you find it helpful for your IEEE Xtreme preparation!

Happy coding and good luck in the competition! 🎯