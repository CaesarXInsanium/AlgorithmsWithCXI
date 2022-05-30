# Analysis of Algorithms

Most common way for the peformace of an algorithm to be analysised is to use time and memopry usage.
This way different algiorithms that can be used to solve the same class of problem can be compared. 

## Worst case anaalysis

peformance of algorithm can depend on the size of handed data or complexity.

- generally algorithms are classified with their worst case peformace, meaning of all different time recordings possible for an algorithm to take place, the longest time is considered
- usually different classes of algorithms peform the same at best case, even inefficient ones.
- average case has no meaning in a theoritcal sense, only in a practical sense, with actual programs doing actual work

## O-notation

Most common form of notation used to denote the peformace of an algorithm. Denotes uppor bound of function g(x) as x approaches infinity.
I think there are several fundamental classes of growth function, linear, expoential, quadratic and factorial.
I think that Big O notation denotes which of these our function g(x) best fits. Most concerned witb growth rate.

$$
O(n)
$$

- constant terms are ignored
- all excpt the largest acclerators are ignored
- this is becase as the value *n* becomes larger, smaller terms become more and more insignificat in relation to the larger term

## Computational Complexity

Peformace of algorithm is the measurement of resources needed to peform it. Generally less resourcews used the better.

- O(n) notation does not say much about total time an algorithm would actually run, only deals with growth rate
- some algorithms that have worse O(n) notation can out peform algorithms with better O(n)
- the definition of 'best algorithm' is arbitrary and really depends on the needs at hand and the requirements for whatever algorithm
- 

$$
O(n!) > O(2^n) > O(n\log(n)) > O(n) > O(\log (n)) > O(1)
$$


## Analysis Example: Insertion Sort

Insertion sort by looping trough the array checking to find them smallest element.
Once it is found it is swapped with the first element. Then we ignored the first element and search for next smallest
element. Swap it out with the second element.

Time that is takes for insertion sort to work is T(n) = size - 1 for search the next largest element.

## Questions and Answers that are Awesome

- Order of Complexities
  - constant, logorithmic, linear, logistic, quadratic, cubic, expoential, factorial


### Vocabulary

- `Recurrences`: recursive calls of a function, formal term
- `NP Completness`: idea that if solutions to some problems can be verified, then an algorithm to solve that problem



