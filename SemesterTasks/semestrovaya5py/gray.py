from PIL import Image, ImageDraw  

image = Image.open("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena.jpg") 
draw = ImageDraw.Draw(image)  
width = image.size[0]  
height = image.size[1]  
p = image.load() 
for i in range(width):
    for j in range(height):
        r = p[i, j][0]
        g = p[i, j][1]
        b = p[i, j][2]
        values = (r + g + b) / 3
        draw.point((i, j), (values, values, values))
image.save("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena_gray.jpg", "JPEG")
del draw
