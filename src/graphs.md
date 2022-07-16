# Graphs

A graph is a data structure that is used to show relationships between objects or concept.
Operations can be used in order to implement all other data structure as a graph. This is possible due to the 
very flexible nature of graphs. 

## Description

Contains edges and vertices. Vertices are used to denote objects and edges used to represent connections,
relationships between objects. Like edges can be used to denote roads and vertices used to denote cities, 
buildings in a street. Sometimes weights can be applied to edges in order to emulate a sort of cost or benefit.
Like the weight can be used to denote length of road that is represented by the edge.

Edges can be either directed or non-directed. This means that they can be used to represent roads and destinations
or parents and children in a family tree.

Graphs can be denoted as a set of vertices and a set of 2 item sets that contain the connections of the edges.

$$
G = (V, E)
$$

### Relationships

There are two types of relationships. `Adjacency` is a connection between vertices in an undirected graph.
`Incidence` is connection between vertices in a directed graph. Vertex A incidents into Vertex B.

## Search Methods

## Algorithms and Sorting

## Applications and Implementations

### Counting Network Hops

Graph algorithms are used in order to determine the shortest number of hops that a packet should travel 
in order to reach a destination.

### Topological Sorting

Ordering the nodes in a graph into one dimensions in such as way that they are all in one line. Used to 
correctly configure correct order to do things that require a certain other things to be done first and in a 
certain order. 

### Hamiltonioan-cycle Problems

Includes traveling salesman problem in which a hypothetical salesman has to go to different cities and in the
shortest path and time possible.

### Conflict Serialization

Database optimization, attempts of ordering commands and instructions to database in a group and executing them 
in the correct and optimal manner. This is trying to make commands such that it gives the same results as if done
is a serial manner. 

