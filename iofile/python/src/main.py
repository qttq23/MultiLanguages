
import sys
sys.path.append('lib')



import iox
iox.io.out('hello world')
fname = iox.io.inputx('enter file name')
content = iox.io.inputx('enter file content')
content1 = iox.io.inputx('enter file content')
content2 = iox.io.inputx('enter file content')


import iofilex
lines = [content, content1, content2]

iofilex.filex.writeLines(fname, lines)
# iofilex.filex.write(fname, content)
# print(iofilex.filex.read('readme.txt'))
print(iofilex.filex.lines(fname))







