#pragma once

#include "llist.h"
#include "set.h"
#include <stdlib.h>

typedef struct AdjList_ {
  void *vertex;
  Set adjacent;
} AdjList;

// Implemented using linked list of adgencet Lists.
typedef struct Graph_ {
  int vcount;
  int ecount;
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  List adjlists;
} Graph;

typedef enum VertexColor_ { white, gray, black } VertexColor;

// Initializes allocated memory pointer to that it my be used with other graph
// operations. Compare() function must return 1 if key1 == key2 and 0 otherwise.
// Destroy() function must free data pointer provided inside the graphs
void graph_init(Graph *graph, int (*match)(const void *key1, const void *key2),
                void (*destroy)(void *data));

// Will call the destroy on all the held data. Will delete all the connections
// and fill the memory back up with zeroes. Will finaly deallocate the Graph
// pointer.
void graph_destroy(Graph *graph);

// Returns 0 if insertion is successful, 1 if it already exists and -1 otherise.
// Will insert new vertex into graph data structure. anywhere in the graph.
int graph_ins_vertex(Graph *graph, const void *data);

// Returns 0 if inserting edge is successful, 1 if edge already exists and -1
// otherwise. will declare a connection between two vertices inside of a graph.
// Both vertices must exist in Graph before this operation is called.
int graph_ins_edge(Graph *graph, const void *data1, const void *data2);

// Returns 0 if removal of vertex is successful, -1 otherwise. Will remove a
// vertex from a Graph, if and only if there are no more connections.
int graph_rem_vertex(Graph *graph, void **data);

// Returns 0 if successful, -1 otherwise. Will remove a connection between the
// declared vertices. Data will point to the data stored in adjacency list.
int graph_rem_edge(Graph *graph, const void *data1, const void **data2);

// Returns 0 if successful, -1 otherwise. Returns list of vertices adjacent to
// specified vertex. Returned using a AdjList struct.
int graph_adjlist(const Graph *graph, const void *data, AdjList **adjlist);

// Returns 1 if second vertex is adjacent to the first vertex, 0 otherwise.
// Determines if the two vertices are adjacent to each other.
int graph_is_adjencent(const Graph *graph, const void *data1,
                       const void *data2);

// Returns a list of AdjLists that are valid in the graph.
#define graph_adjlists(graph) ((graph)->adjlists)

// Returns number of vertices in graph
#define graph_vcount(graph) ((graph)->vcount)

// Returns number of edges in Graph
#define graph_ecount(graph) ((graph)->ecount)
