# Sets

Sets are mathematical objects that can contain any number of things items, concepts.
As long as all members can mathematically be described as unique, then the list of things
is a set. Sets in computing are data structures that contain methods for determining
the uniqueness of the items in a set.

## Principles

A set as a data structure contains a buffer of storage of a number of unique members. These
are generally unordered. To learn more about sets study some Discrete Mathematics

### Terms and Definition
- `Empty Set`: set with no members
- `Universal Set`: set of all conceivable and inconceivable things that be described mathematically
- two sets are equal if they contain same number of items and same items
- `Subset`: set A is subset of B if and only is all members of A show up in B

## Operations

Almost all the operations are n and set algebra is computer in quadratic time.

- Union: join members of two sets and make sure only one copy remains with of all things
- intersection: join only members that show up in both sets
- difference: order dependent. A - B, remove all elements from B that exist in A

## Practice and Examples

Generally sets are implemented using linked lists, but other data structures can be used.
Hash Tables are generally most efficient than Sets but not what we are doing.

### Example: Set Covering

Set covering that sets that contains other sets or subsets. Super set can have coverage of
another set if and only if the conditions are met.
Imagine creating a team of the least amount of people with the widest range of skills.
Defining a set of subsets P which is a list of team members with their skills listed, and
we must make the smallest possible set C which contains all the skills required and define in set S.

## Other Facts

- due to the nature of boolean algebra some operations can be replaced with an other operation at the cost of performance in implementation
