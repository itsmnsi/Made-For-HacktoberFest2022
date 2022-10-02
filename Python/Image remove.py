from os import listdir
from PIL import Image

bad_files = []
for foldername in listdir('PATH_HERE'):
    for filename in listdir("PATH_HERE"):
#         print(filename)
        if filename.endswith('.jpg'):
            try:
                img = Image.open('PATH_HERE') # open the image file
                img.verify() # verify that it is, in fact an image
            except (IOError, SyntaxError) as e:
                print('Bad file:', filename) # print out the names of corrupt files
                bad_files.append(filename)





