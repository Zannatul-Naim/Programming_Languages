# program to reverse a string.

print("Enter the String: ", end = "")
str = input()

strRev = ""
for ch in str:
    strRev = ch + strRev

str = strRev
print("\nReverse =", str)
