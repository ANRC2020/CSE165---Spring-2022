s = ""

for line in open("words.txt"):
    s += line

arr = s.split(" ")
print(arr)