name = "Anup"

print(len(name))
print(name[0])
print(name[-1])
print(name.upper())
print(name.lower())
print(name[1:3])


🔹 Q3. Remove the first and last character from a string using slicing.

Input: "AnupTiwari"
Output: "nupTiwar"


text = "AnupTiwari"
result = text[1:-1]
print(result)


🔹 Q7. From a string, remove characters at odd indices.

Input: "abcdefgh"
Output: "aceg"

text = "abcdefgh"
result = text[::2]
print(result)