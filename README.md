🧪 Experiment 4: Bitwise Operators in C++

✅ Aim:

To write a C++ program that demonstrates the use of bitwise operators such as AND, OR, XOR, NOT, left shift, and right shift, and understand how binary-level operations work in C++.

🧠 Theory:

Bitwise operators are used to perform operations on individual bits of integer data. These operators work directly at the binary level, making them extremely fast and useful for low-level programming, memory optimization, and hardware control.

Bitwise operations are only applicable to integer types (int, short, long, etc.). When used, the numbers are first converted to their binary representations, and the operation is performed bit by bit.

🔹 Types of Bitwise Operators in C++:
C++ provides six bitwise operators that operate directly on the binary representations of integers. These are:

Bitwise AND (&)

Sets each bit to 1 only if both bits are 1.

Example: 5 & 3 → 1 (0101 & 0011 = 0001)

Bitwise OR (|)

Sets each bit to 1 if at least one of the bits is 1.

Example: 5 | 3 → 7 (0101 | 0011 = 0111)

Bitwise XOR (^)

Sets each bit to 1 if only one of the bits is 1 (exclusive OR).

Example: 5 ^ 3 → 6 (0101 ^ 0011 = 0110)

Bitwise NOT (~)

Inverts all the bits (1 becomes 0, 0 becomes 1).

Example: ~5 → -6 (in 2’s complement form)

Left Shift (<<)

Shifts bits to the left, adding zeros on the right. Equivalent to multiplying by powers of 2.

Example: 5 << 1 → 10 (0101 << 1 = 1010)

Right Shift (>>)

Shifts bits to the right, discarding bits from the right. Equivalent to dividing by powers of 2.

Example: 5 >> 1 → 2 (0101 >> 1 = 0010)

📘 Conclusion:

In this experiment, we learned how to use bitwise operators in C++. These operators allow direct manipulation of binary data, which is useful in performance optimization, cryptography, and systems programming. Understanding bitwise logic is essential for low-level and embedded development.

