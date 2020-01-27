
class iofilecls:

	def read(self, filename):
		try:
			f = open(filename)
			content = f.read()

		except IOError:
			raise Exception('io error occured')
		finally:
			try:
				f.close()
			except:
				raise Exception('filenamee not found')


		print('end of func')
		return content


