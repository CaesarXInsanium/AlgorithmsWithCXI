# Sorting and Searching

Sorting is the act of ordering a set of items by some sort of rule, generally used to sort numbers 
in a particular. A function must be implemented in order to tell if an item is greater than, equal
or less than another item. Such actions are sorted in to two camps, comparison sorts and linear-time
sorts. Not all sorting algorithms overly rely on comparisons in order to place items in the correct
order. Linear sorting algorithms really on certain characteristics about the data to be true
in order for the sorting to be reliable. In-place sorts don't copy data and instead move data
around inside the occupied memory. While the opposite approach make an entirely new copy of
all the relevant data in to a new memory location.

Sorting is generally done for the purposes of keeping a set of data organized in order to search
for specific item inside the array more efficiency. While linear search in a small set of data can
be sufficient, this does not scale well and eventually there will come a point in which searching
must be made faster. This is where binary search comes in.

## Insertion Sort

Insertion sort works by starting with an unsorted array. Allocated space for new sorted array.

1. Take an item any item and place into sorted array
2. take another item in unsorted array and compare against items in sorted array and insert into correct location
3. repeat

This approach is not good for large unsorted data but very efficient for data that is already partially sorted.
Insertion sort works incremental and can work inside linked lists.

The implementation is around a nested loop, with some variables taking control of some cursor
pointers in order to keep track of the correct location.

## Quick sort

This is a divide and conquer sort of algorithm. It works by break the problem down into smaller
and smaller chunks recursively and generally the best one for most use cases.

1. Divide: Partition data into two partitions
2. Conquer: sort two the two partitions by calling quick sort on the smaller partitions
3. Combine: join the two partitions into one partition since they are both now sort

While in theory quick sort has the same complexity as insertion sort, it is generally better than
insertion sort. Quick sort only really works if the portions are always the same size each time.
Choosing a median by choosing three random values from array and choosing their. Of course
the average case running time depends on whether the elements are randomly distributed.

The fundamental theory of how quick sort works is by recursively partitioning a set of elements
and then once finished they are to be joined. Quick sort can sort in place. 



## Merge Sort

## Counting Sort

## Radix Sort

## Binary Search

## Applications

- Order Statistics
  - finding the nth smallest/largest item in a set
- Directory Listing
  - items in a directory must be sorted in some form or another before being displayed
  - ls is implemented using a simple function that takes listings in a directory and sorts them by a particular order
- Database Systems
  - storing and retrieving data must be kept at the maximum efficiency
- Spell Checkers
  - sorting possible correct spellings of a word from most likely to the least likely
- Spreadsheet
  - very fundamental to the way spreadsheets work, must display data in a form that is helpful to user's goals

