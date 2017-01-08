from PIL import Image, ImageDraw  # Подключим необходимые библиотеки.

image = Image.open("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena.jpg")  # Открываем изображение.
draw = ImageDraw.Draw(image)  # Создаем инструмент для рисования.
width = image.size[0]  # Определяем ширину.
height = image.size[1]  # Определяем высоту.
p = image.load()  # Выгружаем значения пикселей.
for i in range(width):
    for j in range(height):
        r = p[i, j][0]
        g = p[i, j][1]
        b = p[i, j][2]
        values = (r + g + b) / 3
        draw.point((i, j), (values, values, values))
image.save("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena_gray.jpg", "JPEG")
del draw
