import os

path =  os.getcwd()
#filenames = os.listdir(path)


manifest = open('manifest.txt', 'w')
for (root,dirs,files) in os.walk('.', topdown=True):         
        for f in files:
            if len(root)==1:
                fname = (root[1:]+f).replace('\\', '/').lower()
                #print (root[1:]+f)         
                manifest.write(fname + '\n')
            else: 
                fname = (root[2:]+'/'+f).replace('\\', '/').lower()
                manifest.write(fname + '\n')
                #print (root[2:]+f)         
        
    
    
#manifest.close()    

    
    