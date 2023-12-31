#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # Ensure both tuples have at least 2 elements, filling with 0 if needed
    a = tuple_a + (0, 0)
    b = tuple_b + (0, 0)
    # Perform element-wise addition and return a new tuple
    result = (a[0] + b[0], a[1] + b[1])
    return result
