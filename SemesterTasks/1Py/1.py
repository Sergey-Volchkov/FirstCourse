eps = 0.00001
sqrt = float(0)
root = float(0)
n = float(input())
while sqrt < n:
    root += eps
    sqrt = (root * root)
root = float(int(root * 1000) /1000)
print(root)