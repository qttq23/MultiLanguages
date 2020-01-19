

def read(filename):
	f = open(filename)
	content = f.read()

	f.close()
	return content

def lines(filename):
	f = open(filename)
	lines = ''
	for line in f:
		lines += line
	f.close()


	return lines


def write(filename, content):
	f = open(filename, 'w')
	f.write(content)
	f.close()

def writeLines(filename, lines):
	f = open(filename, 'w')
	for line in lines:
		f.write(line + '\n')

	f.close()




	