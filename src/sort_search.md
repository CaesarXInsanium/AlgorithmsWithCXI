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

Another divide and conquer algorithm. However, it will not sort in place, instead making a new copy
of the data in a new location that is sorted. Once again we start with a pile of unsorted stuff.

1. Divide data in half
2. Sort the two side by calling the sorting function recursively
3. Merge the two items

The merging process allows one to the separate item to be combined into one array. However, due to nature of
merge sort, space requirements are twice that of insertion and quick sort.

## Counting Sort

Linear sorting algorithm that is as efficient as it gets, works by counting number of times
an element occurs in a set. Can only work with data that can be expressed in integer form.
Elements of equal number are left alone and as such the algorithm is stable.

Elements must be stored in continuous block of memory. While counting sort is works in place,
additional memory must be allocated in order to store temporary data. 

## Radix Sort

Linear time sorting algorithm, sort data by going from most significant digit to the least significant digit.
Radix sort is a sort of wrapper sorted on another sorting algorithm since it sort by significant
digits. This is done in a way, so that there are as few comparisons and swaps as possible, so 
a stable secondary sorting algorithm, is need.

Requires data to representable as integers and that it can be subdivided into smaller pieces of data.
Implementation requires applying counting sort one position at a time. Sorting begins from the least
significant portion.

## Binary Search

Binary search is a technique that can only be used on sorted data in order to find specific data 
in a list or array. It works by guessing numbers at the midpoint until the correct number is found.

1. Calculate midpoint, retrieve value
2. compare value, if value is less than key, then calculate new midpoint between start and midpoint. If greater than do opposite
3. if value is equal to key, return index of value if not found return error

This method of searching for data is not efficient in a data structure where there are frequent 
insertions and deletions. For that use a binary search tree. The reasons that are is not efficient
is because the sorting algorithm must be run every single time that a new item is inserted.
Binary search is best for static and continuous memory regions.

We will implement a version of binary search that works by maintaining two
variables to determine the left and right bounds, each time that the key is not found the midpoint
between those bounds is calculated, and the cycle begins again.

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
  - and then searching for the correct word that is most likely.
  - Works by checking all words is a document against a dictionary list. If each word is found then it is spell correctly
  - if not, then spell suggestions must be calculated
- Spreadsheet
  - very fundamental to the way spreadsheets work, must display data in a form that is helpful to user's goals

## Further Questions and Answers

- Merge sort is the best way to sort data divided into chunks that is spread between different storage devices
- insertion sort is best when data is mostly already sorted and a single element is added in
- radix sort is best for character arrays.
- Quick sort is best for general use with random structures'
- radix sort can be best for byte base sorting using proper parameters
- bubble sort is inefficient algorithm
- heap sort is as good as quick sort except for some of the best implementations of quick sort
- intro sort behaves like quick sort but can switch over to using heap sort if it detects from conditions where it would be superior
