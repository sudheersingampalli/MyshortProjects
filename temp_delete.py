import os
import shutil
temp = 'C:\\Users\\ssingamp\\AppData\\Local\\Temp'
for file in os.listdir(temp):
	complete_path = os.path.join(temp,file)
	try:
		if os.path.isdir(complete_path):
			print('dir-->',complete_path)
			shutil.rmtree(complete_path)
		else:
			print('file -->',complete_path)
			os.remove(complete_path)
	except:
		pass
print('Done!!')