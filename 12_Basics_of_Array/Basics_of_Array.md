# Basics of Arrays in C

An array in C is a collection of elements of the same type stored in contiguous memory. Arrays provide a way to store multiple values under a single name and access them by index.

## Declaration and Initialization

- Declaration:

	type name[size];

  Example:

	int a[5]; // array of 5 integers

- Initialization:

	int a[5] = {1, 2, 3, 4, 5};
	int b[] = {10, 20, 30}; // size inferred (3)
	int c[5] = {0}; // sets all elements to 0

## Indexing

- Elements are accessed using 0-based indices: a[0] is the first element, a[4] is the fifth for a[5].
- Accessing out-of-bounds indices invokes undefined behavior.

## Memory Layout

- Elements are stored contiguously. The address of a[i] equals (base_address + i * sizeof(type)).
- The array name (e.g., a) in most expressions decays to a pointer to its first element (type *).

## Common Operations

- Iterate:

	for (int i = 0; i < n; ++i) {
		// use a[i]
	}

- Passing to functions: a function receives a pointer and (optionally) size.

	void print_array(int arr[], int n) {
		for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
	}

## Multidimensional Arrays

- Declaration: int m[3][4]; // 3 rows, 4 columns
- Access: m[i][j]

## Important Notes and Pitfalls

- Arrays do not track their own length. Pass sizes explicitly when needed.
- Cannot assign arrays with = after declaration (use memcpy or loop).
- Use sizeof(a)/sizeof(a[0]) to get element count only for arrays in the same scope where declared (not for pointers).
- Beware of buffer overflows; always ensure indices are within bounds.

## Example

```c
#include <stdio.h>

int main(void) {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
```

This covers the fundamental concepts to get started with arrays in C.
