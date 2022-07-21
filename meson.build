project('C Algorithms', 'c',
  version: '1.0.0',
  license: 'GPL-3.0-or-later',
  default_options: [
    'warning_level=3',
    'werror=true',
    'buildtype=debugoptimized',
    'debug=true',
    #'optimization=3',
    'c_std=c11'
    ])

inc = include_directories('include')

foo_src = [
  'source/llist.c',
  'source/dlist.c',
  #  'source/clist.c',
  'source/frames.c',
  'source/stack.c',
  'source/queue.c',
  'source/set.c',
  'source/chtbl.c',
  'source/ohtbl.c',
  'source/bitree.c',
  'source/transverse.c',
  'source/bistree.c',
  'source/heap.c',
  'source/graph.c',
  'source/issort.c',
  ]

algoocxi = shared_library(
  'awcxi',
  foo_src,
  include_directories: inc,
  install : true,
  )

llisttest = executable('llist', 'tests/llist.c',
  include_directories: inc,
  link_with: algoocxi)
test('llist', llisttest)

dlist = executable('dlist', 'tests/dlist.c',
  include_directories: inc,
  link_with: algoocxi)
test('dlist', dlist )

# clist = executable('clist', 'tests/clist.c',
#
#   include_directories: inc,
#   link_with: algoocxi)
# test('clist', clist)

stack = executable('stack', 'tests/stack.c',
  include_directories: inc,
  link_with: algoocxi)
test('stack', stack)

queue = executable('queue', 'tests/queue.c',
  include_directories: inc,
  link_with: algoocxi)
test('queue', queue)

set = executable('set', 'tests/set.c',
  include_directories: inc,
  link_with: algoocxi)
test('set', set)

chtbl = executable('chtbl', 'tests/chtbl.c',
  include_directories: inc,
  link_with: algoocxi)
test('chtbl', chtbl)

ohtbl = executable('ohtbl', 'tests/ohtbl.c',
  include_directories: inc,
  link_with: algoocxi)
test('ohtbl', ohtbl)

bitree= executable('bitree', 'tests/bitree.c',
  include_directories: inc,
  link_with: algoocxi)
test('bitree', bitree)

bistree= executable('bistree', 'tests/bistree.c',
  include_directories: inc,
  link_with: algoocxi)
test('bistree', bistree)

heap = executable('heap', 'tests/heap.c',
  include_directories: inc,
  link_with: algoocxi)
test('heap', heap)

graph = executable('graph', 'tests/graph.c',
  include_directories: inc,
  link_with: algoocxi)
test('graph', graph)

issort = executable('issort', 'tests/issort.c',
  include_directories: inc,
  link_with: algoocxi)
test('issort', issort)

