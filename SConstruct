import os

env = Environment(CPPPATH=['include'])
env.Append(CCFLAGS='-Wall -Wextra -Werror -g3 -pedantic -std=c11')
env.Tool('compilation_db')
env.CompilationDatabase()
code = 'code/'
dirs = os.listdir(code)

for d in dirs:
    if os.path.isdir(code + d):
        glo = code + d + '/*.c'
        for source in Glob(glo):
            env.Program(source)

