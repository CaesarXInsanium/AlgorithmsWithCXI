# Hash Tables

Hash tables are all based on the simple act of hashing data. Regardless of storage 
implementation, look-ups in hash table are incredibly fast and efficient. Any piece of data 
is accessed via a *key*, which yields a *value*.

Due to nature of the hashing function, lookup times are constant. Good hashing function almost 
never generate identical keys. Collision happens when two values get hashed to the same key.
This happens because sometimes it simply is not realistic to have a unique key for all values.
However, a proper implementation of a hash table has a way to deal with this fact.

## Chained Hash Tables

It is a simply an array of pointers to linked lists. It contains a pointer to a function that is
used to hash keys and another function that is used in order to compare values. Key is
passed to hashing function and this determines the bucket in which to place the value. Collisions
are resolved by appending to the linked list. Performance in only significantly impacted 
if the table is full or the number of buckets is too small.

### Example: Symbol Tables

Symbol tables are a way for compilers to maintain information about symbol encountered in program. Such
as when the preprocessor in the C compiler encounters a MACRO being used, and it needs to be evaluated 
and to have the section replaced with the correct thing.
The lexical analyzer will insert the symbols. Such an analyzer will take a string of characters and will group
them into different categories depending on the need.

Such an analyzer would work by continuously calling next_token, and receive a pointer to the next character.
If the pointer is NULL, then there are no more tokens and program exits. If there is a valid character, 
it is determined what type it is. It is grouped with similar tokens and then a Symbol will be returned.

## Open-Addressed Hash Tables

Open addressed hash tables is different from an open addressed hash table in that instead of storing
the values inside the linked lists, instead the data is stored in the main array instead.
The problem with chained hash tables is that with more collisions there will be reduction in performance. 
With enough data the hash table will not be as useful.
Open addressed hash tables solve this issued by *probing* that table, which means if an element is
set to be inserted, then the array will be probed until an empty spot is found. This result in
an increase in performance but only so far as there are enough slots in the array as to accommodate 
values. Also, as the open addressed hash table fill up, the performance can degrade but not as quickly as CHTBL.
At a certain point the open addressed table fills up and values can no longer be inserted.

### Probing

When it comes to proving, there are two ways to do it, there is the linear way which is jut to check every
single slot in the storage array. The problem with this is that values more often than not will not 
be spread out uniformly as expected.

Another method is double hashing, which as it's name implies is the act of having values twice. It tries 
one hash and if that does not work, and then it goes with the other hash function.



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

- Hash tables are for random item access but not for sequential access
  - hash tables are simply fancier versions of sets
- not so much a good hashing function but rather a hashing function that fits the need of the program is required in order to ensure that values are evenly distributed as much as possible
- worst case for open addressed function occur only when  
- `Direct-address Tables`: there is a direct one to one mapping between keys and values. 
- `Linear Congruential Generators`: random number generators that are useful in creating proper has functions
- `Quadratic Probing`: method of probing the open addressed hash table that is more efficient than linear probing but less than double hashing
- `Universal Hashing`: method where keys are generated randomly before a hash function is used so that there is never a predictable distribution.
