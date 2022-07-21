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
`in degree` of a vertex describe the number of other edges that are attached to it. 
A cycle contains the same vertex twice of more. In a sense that connection of directed vertices
the same vertex is reached twice. Connected graphs are when all vertices can be reached in an undirected graph.
In a directed graph a strongly connected graph is when all vertices can be reached using at least one path.
`A bridge` is any edge whose result in a disconnected from the rest of the graph. It is the connection 
point from which a certain vertex or set of vertices can be reached. Bi-connected vertices have more than one 
to the rest of the graph.

The most common method of implementing graphs is using a linked list containing other linked lists.
In the main list contains the vertex that is being connected to. It also contains pointer to a side linked list.
This linked list contains items representing connections to other vertices. Each subsequent item is a 
pointer to another item in the main list.


## Search Methods

There are two main methods of searching for a specific item in the linked lists.

### Bread-first Search

Will take a look at all the other connections and their data from a rode vertex before attempting to
go recourse and search deeper. Useful for calculating minimum spanning trees and shortest paths.
This can be done using a queue to keep track of all the vertices that we are current searching.

### Depth-first Search

Will attempt to explore graph by first looking at the most undiscovered graph. It tries to go
as deep as possible first and then attempts to backtrack. As it fully discovers all the nodes.
It will add them to a list of vertices that have already been discovered.

## Algorithms and Sorting

## Applications and Implementations

### Counting Network Hops

Graph algorithms are used in order to determine the shortest number of hops that a packet should travel 
in order to reach a destination. This can be modeled using an undirected graph. Any graph can have any
form and number of paths to a destination. The simplest way to find the shortest path to a destination
is using breath first search.


### Topological Sorting

Ordering the nodes in a graph into one dimensions in such as way that they are all in one line. Used to 
correctly configure correct order to do things that require a certain other things to be done first and in a 
certain order. This can be used to determine dependency resolution as well as scheduling class so that 
there are not conflicts. This can be done using Depth-first search

### Hamiltonioan-cycle Problems

Includes traveling salesman problem in which a hypothetical salesman has to go to different cities and in the
shortest path and time possible.

### Conflict Serialization

Database optimization, attempts of ordering commands and instructions to database in a group and executing them 
in the correct and optimal manner. This is trying to make commands such that it gives the same results as if done
is a serial manner. 

## Other Facts

- `Hypergraphs` are simlar to undirected graph but contain hyperedges. This can connect any number of vertices.
- `Multigrahs` allow for multiple edges for each pair of vertices. 
- graphs can also be represented as a matrix of size VxV. In which each position can be marked with a flag that signifies a edge betweem corresponding vertices.
