project('C Algorithms', 'c',
  version: '1.0.0',
  license: 'GPLv3',
  default_options: ['warning_level=3'])

build_args = [
    '-Wall',
    '-Werror',
    '-g3',
    '-pedantic'
  ]
inc = include_directories('include')

foo_src = [
  'include/linked_list.c',
  'include/dlist.c',
  #  'include/clist.c',
  'include/frames.c',
  'include/stack.c',
  'include/queue.c',
  'include/set.c'
  ]

algoocxi = shared_library(
  'algoocxi',
  foo_src,
  include_directories: inc,
  install : true,
  c_args: build_args,
  )

llisttest = executable('llist', 'tests/llist.c',
  include_directories: inc,
  link_with: algoocxi)
test('linked_list', llisttest)

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
