
from iox.io11 import io11

def out(obj):
	io11.out('updated' + obj)
	io11.out(obj)

io11.out('self print')

