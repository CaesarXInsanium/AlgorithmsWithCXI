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

libalgo_cxi = shared_library(
  'libalgo_cxi',
  foo_src,
  include_directories: inc,
  install : true,
  c_args: build_args,
  )

llisttest = executable('llist', 'tests/llist.c',
  include_directories: inc,
  link_with: libalgo_cxi)
test('linked_list', llisttest)

dlist = executable('dlist', 'tests/dlist.c',
  include_directories: inc,
  link_with: libalgo_cxi)
test('dlist', dlist )

# clist = executable('clist', 'tests/clist.c',
#
#   include_directories: inc,
#   link_with: libalgo_cxi)
# test('clist', clist)

stack = executable('stack', 'tests/stack.c',
  include_directories: inc,
  link_with: libalgo_cxi)
test('stack', stack)

queue = executable('queue', 'tests/queue.c',
  include_directories: inc,
  link_with: libalgo_cxi)
test('queue', queue)

set = executable('set', 'tests/set.c',
  include_directories: inc,
  link_with: libalgo_cxi)
test('set', set)
