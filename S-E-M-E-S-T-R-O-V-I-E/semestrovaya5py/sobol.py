from PIL import Image, ImageDraw
import math

image = Image.open("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena.jpg")  
draw = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
C = image.load()

for i in range(height-2):
    for j in range(width-2):
        Gx = (C[i + 2, j][0] + C[i + 2, j + 1][0] + C[i + 2, j + 2][0]) - (C[i, j][0] + C[i, j + 1][0] + C[i, j + 2][0])
        Gy = (C[i, j + 2][0] + C[i + 1, j + 2][0] + C[i + 2, j + 2][0]) - (C[i, j][0] + C[i + 1, j][0] + C[i + 2, j][0])
        G = int(math.sqrt(Gx * Gx + Gy * Gy))
        draw.point((i, j), (G, G, G))
image.save("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lenasobol.jpg", "JPEG")
del draw
