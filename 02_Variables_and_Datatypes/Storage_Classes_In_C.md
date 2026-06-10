# Storage Classes in C

Storage classes in C specify the scope, lifetime, and linkage of variables and functions. There are four main storage classes: `auto`, `register`, `static`, and `extern`.

## 1. Auto Storage Class

**Definition:** Variables declared with `auto` are stored in memory and have automatic storage duration.

**Characteristics:**
- Default storage class for local variables
- Scope is limited to the block where declared
- Lifetime is from declaration to end of block
- Value is uninitialized (garbage value) if not explicitly initialized

**Syntax:**
```c
auto int x = 10;  // or simply: int x = 10;
```

**Example:**
```c
void function() {
    auto int num = 5;  // automatically destroyed when function ends
}
```

## 2. Register Storage Class

**Definition:** Variables declared with `register` are stored in CPU registers for faster access.

**Characteristics:**
- Faster access than memory (stored in registers)
- Limited storage space
- Scope is local to the block
- Cannot take address using `&` operator
- Cannot be used with global scope

**Syntax:**
```c
register int counter = 0;
```

**Example:**
```c
for (register int i = 0; i < 1000; i++) {
    sum += array[i];  // fast loop iteration
}
```

## 3. Static Storage Class

**Definition:** Variables declared with `static` have static storage duration and persistent lifetime.

**Characteristics:**
- Retain value between function calls
- Initialized only once
- Default value is 0 (for global and local static variables)
- Scope depends on declaration location:
  - Local static: scope limited to block
  - Global static: scope limited to file (internal linkage)

**Syntax:**
```c
static int count = 0;
```

**Examples:**

**Local Static:**
```c
void increment() {
    static int count = 0;  // initialized once, retains value
    count++;
    printf("%d\n", count);  // prints 1, 2, 3, ... on successive calls
}
```

**Global Static:**
```c
static int globalVar = 100;  // visible only in this file
```

## 4. Extern Storage Class

**Definition:** Variables declared with `extern` refer to global variables defined in another file.

**Characteristics:**
- Provides external linkage
- Variable must be defined in another translation unit
- Default initialization value is 0
- Multiple files can access the same variable

**Syntax:**
```c
extern int globalVar;  // declaration, not definition
```

**Example:**

**File1.c:**
```c
int globalVar = 50;  // definition
```

**File2.c:**
```c
extern int globalVar;  // declaration (use from File1.c)
void display() {
    printf("%d\n", globalVar);
}
```

## Storage Classes Comparison Table

| Feature | Auto | Register | Static | Extern |
|---------|------|----------|--------|--------|
| **Scope** | Local | Local | Local/Global | Global |
| **Lifetime** | Function | Function | Program | Program |
| **Storage** | Memory | Register | Memory | Memory |
| **Initial Value** | Garbage | Garbage | 0 | 0 |
| **Default** | Yes | No | No | No |
| **Can Use &** | Yes | No | Yes | Yes |

## Key Differences

- **Auto vs Register:** Register is faster but limited; Auto is default for local variables.
- **Static vs Extern:** Static hides variables within scope; Extern makes variables accessible across files.
- **Local Static vs Global Static:** Local static retains value between calls; global static restricts visibility to the file.

## Best Practices

1. Use `register` for frequently accessed loop variables in performance-critical code.
2. Use `static` for:
   - Counters that persist between function calls
   - Limiting variable visibility to a file
3. Use `extern` to share variables between multiple source files.
4. Avoid global variables; use `extern` sparingly for better code maintainability.
