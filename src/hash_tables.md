# Hash Tables

Hash tables are all based on the simple act of hashing data. Regardless of storage 
implementation, look-ups in hash table are incredibly fast and efficient. Any piece of data 
is accessed via a *key*, which yields a *value*.

Due to nature of the hashing function, lookup times are constant. Good hashing function almost 
never generate identical keys. Collision happens when two values get hashed to the same key.
This happens because sometimes it simply is not realistic to have a unique key for all values.
However, a proper implementation of a hash table has a way to deal with this fact.

## Chained Hash Tables

it is a simply an array of pointers to linked lists. It contains a pointer to a function that is
used to hash keys and another function that is used in order to compare values. Key is
passed to hashing function and this determines the bucket in which to place the value. Collisions
are resolved by appending to the linked list. Performance in only significantly impacted 
if the table is full or the number of buckets is too small.

## Open-Addressed Hash Tables

## Proper Selection of Hash Function to avoid Collision

The goal of the hash function is to minimize the number of collisions. 
The proper way to reduce collision is to maintain an equal distribution of all the values across all the buckets.
We also have to balance this with the number of available buckets in which to place the thing. The
`load factor` is what is used in order to calculate how much a chained hash table can address.
This determines the minimum number of items require before a collision is expected.

```
a = n / m
```

Where n is a number of elements in table and m is a number of positions in which elements 
may be hashed.

One of the key strategies to look into when choosing a hashing function is a number of items
one expects to place into the dictionary in total.
There are multiple methods for choosing a hashing function one is the Division method.
Often times hashing functions are implemented using bitwise operations.

### Division method

```
h(k) = k mod m
```

If a table has m number of positions. We have key k by doing k mod m. It is better to 
avoid using values of m that are powers of 2. 

### Multiplication method

Multiplying the integer *k* by constant A in range 0 < A < 1. Multiply result against number of 
positions in array and take floor of result.

```
b(k) = floor(m (kA mod 1)), where 0 < A < 1
```

## Other Facts
