
import sys
sys.path.append('lib')



# import iox
# iox.io.out('hello world')
# fname = iox.io.inputx('enter file name')
# content = iox.io.inputx('enter file content')
# content1 = iox.io.inputx('enter file content')
# content2 = iox.io.inputx('enter file content')


# import iofilex
# lines = [content, content1, content2]

# iofilex.filex.writeLines(fname, lines)
# # iofilex.filex.write(fname, content)
# # print(iofilex.filex.read('readme.txt'))
# print(iofilex.filex.lines(fname))

# log
import logging
logging.basicConfig(format='%(asctime)s %(levelname)s %(message)s', level=logging.DEBUG, datefmt='%m/%d/%Y %I:%M:%S %p', filename='log.txt')

# console io
from iocls import *
x = iocls()
x.out(x.msg)

# file io
from iofilecls import *
filer = iofilecls()

try:
	x.out(filer.read('readm2e.txt'))

except Exception as e:
	x.out(e)
	x.out(' read fail.')
	logging.error(f'{__name__} - {e}')
else:
	x.out('read done')


