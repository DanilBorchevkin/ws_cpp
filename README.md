# ws_cpp
C Preprocessor Workshop

## How to out preprocessed code

### Use cpp

```bash
    cpp <source file name> -o <output file name>
```

For example:

```bash
    cpp 1_simple.c -o 1_simple.cpp
```

### Use gcc

```bash
    gcc -E <source file name> -o <output file name>
```

For example:

```bash
    gcc - E 1_simple.c -o 1_simple.cpp
```