import os
path =  os.getcwd()

manifest = open('manifest.txt', 'w')
for (root,dirs,files) in os.walk('.', topdown=True):         
        for f in files:
            if f != 'manifest.txt':
                if len(root)==1:
                    fname = (root[1:]+f).replace('\\', '/')
                    #print (root[1:]+f)                             
                    os.rename(fname, fname.lower())                
                    manifest.write(fname.lower() + '\n')
                else: 
                    fname = (root[2:]+'/'+f).replace('\\', '/')
                    #print (root[2:]+f)  
                    os.rename(fname, fname.lower())
                    manifest.write(fname.lower() + '\n')
                                 
manifest.close()    

    
    