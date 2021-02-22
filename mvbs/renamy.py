import os

path =  os.getcwd()

manifest = open('manifest.txt', 'w')
for (root,dirs,files) in os.walk('.', topdown=True):         
        for f in files:
            #if f != 'manifest.txt':
            #    os.rename(os.path.join(root, f), os.path.join(root, f.lower()))            
            if len(root)==1:                                
                fname = (root[1:]+f).replace('\\', '/') #.lower()       
                manifest.write(fname + '\n')
            
            else: 
                fname = (root[2:]+'/'+f).replace('\\', '/') #.lower()
                manifest.write(fname + '\n') 
                
manifest.close()    

    
    