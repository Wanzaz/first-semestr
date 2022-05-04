

def fill():
    array = []
    for i in range(1, 50):
        array.append(i)
    for i in range(50, -1, -1):
        array.append(i)
    print(array)

def backwards():
    array = []
    for i in range(1, 50):
        array.append(i)
    print(array)
    print(array[::-1])

backwards()

