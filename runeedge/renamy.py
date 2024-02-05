import os

path =  os.getcwd()
filenames = os.listdir(path)

manifest = open('manifest.txt', 'w')

for filename in filenames:
    if filename != 'manifest.txt':
        os.rename(filename, filename.lower())
    manifest.write(filename.lower() + '\n')
    
    
manifest.close()    

    
    