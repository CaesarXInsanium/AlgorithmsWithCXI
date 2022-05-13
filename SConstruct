import os

env = Environment()
env.Append(CCFLAGS='-Wall -Wextra -Werror -g3 -pedantic -std=c11')
code = 'code'
dirs = os.listdir(code)

for d in dirs:
    glo = code +'/'+ d + '/*.c'
    print(glo)
    for source in Glob(glo):
        env.Program(source)

