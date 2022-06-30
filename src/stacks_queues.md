# Stacks and Queues

Sometimes data needs to be accessed in a manner corresponding to which it is received.
Whether we want a first in first out, or first in last out approach.

For example a function stack is a method of organizing function calls in such a way
that when one function returns its value is passed to the stack memory of another and that function is left
to finish execution. Hard to explain in text.

## Stacks

Stores and retrieves data in a first in last out fashion. Or Last in first out. 
Similar to real stack of cards. To get one at bottom, all cards above must be removed.
There are two ways to implement Stacks. One is with linked lists and another is with array lists.

## Queues

Stores and retrieves data in a first in first out manner. First element to ever be 
placed in queue will be the first to be popped. Think of it like a line of people 
at a store. The first people to arrive will be the first once to be able to enter the store

Queues support 2 operations. To enqueue means to add item to end of stack. To dequeue is to
remove the head of queue and work on the next item

## Dequeue

Behaves as both a stack and and queue. Where data can be place on either head or tail


## Event Handling

Major example of using queues is event handling. This is so applications are capable of 
handling events in the same order that they are sent. Event handles have two
functions that they must implement. An event receiver in order to queue it and an
event processor in order to perform application logic and dequeue it. Event handling can be both
synchronous and asynchronous. Then there is a dispatch function pointer that is passed
in order to determine what exactly to do with the events

## Semaphores

## X Window System

## Producer-consumer Problem

## Function calls in C

## Abstract Stack Machines
