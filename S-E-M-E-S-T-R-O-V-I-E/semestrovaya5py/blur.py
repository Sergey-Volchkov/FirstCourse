from PIL import Image, ImageDraw  # Подключим необходимые библиотеки.

image = Image.open("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/lena.jpg")  # Открываем изображение.
draw = ImageDraw.Draw(image)  # Создаем инструмент для рисования.
width = image.size[0]  # Определяем ширину.
height = image.size[1]  # Определяем высоту.
p = image.load()  # Выгружаем значения пикселей.
rad = 3
i = 4

while i < width - 4:
    j=4
    while j < height-4:
        p1 = float((p[i - rad, j - rad][0] * 0.5 + p[i - rad, j][0] * 0.5 + p[i - rad, j + rad][0] * 0.5
                    + p[i, j - rad][0] * 0.5 + p[i, j][0] * 0.5 + p[i, j + rad][0] * 0.5
                    + p[i + rad, j - rad][0] * 0.5 + p[i + rad, j][0] * 0.5 + p[i + rad, j + rad][0]) * 0.5) / 3
        p2 = float((p[i - rad, j - rad][1] * 0.5 + p[i - rad, j][1] * 0.5 + p[i - rad, j + rad][1] * 0.5
                    + p[i, j - rad][1] * 0.5 + p[i, j][1] * 0.5 + p[i, j + rad][1] * 0.5
                    + p[i + rad, j - rad][1] * 0.5 + p[i + rad, j][1] * 0.5 + p[i + rad, j + rad][1]) * 0.5) / 3
        p3 = float((p[i - rad, j - rad][2] * 0.5 + p[i - rad, j][2] * 0.5 + p[i - rad, j + rad][2] * 0.5
                    + p[i, j - rad][2] * 0.5 + p[i, j][2] * 0.5 + p[i, j + rad][2] * 0.5
                    + p[i + rad, j - rad][2] * 0.5 + p[i + rad, j][2] * 0.5 + p[i + rad, j + rad][2]) * 0.5) / 3
        draw.point((i, j), (int(p1), int(p2), int(p3)))
        j += 1
    i += 1

image.save("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5py/len.jpg", "JPEG")
del draw
