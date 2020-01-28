
import logging

class iofilecls:

	def read(self, filename):
		try:
			f = open(filename)
			content = f.read()

		except IOError:
			raise IOError('io error occured')
		finally:
			try:
				f.close()
			except:
				logging.error(f'{__name__} - cannot close file')
				# raise FileNotFoundError('filename not found')
				raise MyException('filename not found')


		print('end of func')
		return content


class MyException(Exception):

	def __init__(self, msg):
		self.msg = msg
		self.msg2 = msg


