# ws_cpp
C Preprocessor Workshop for junior developers

# What included

* ***.pptx*** - presentation in PowerPoint

* ***.pdf*** - presentation in PDF

* ***.c, .h*** - short lessons and demo

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

## How to define macro from command line

If you need define macro ```TEST``` you should pass to gcc/cpp key ```-D``` as defined in the following example:

```bash
    gcc 1_simple.c -DTEST -o 1_simple.o
```

If you need setup some values you should use quotes as in following example (equals to ```#define TEST 4```):

```bash
    gcc 1_simple.c -DTEST="4" -o 1_simple.o
```
