print("Enter the Number: ")
num = int(input())
tot = 0

while num:
  num = int(num/10)
  tot = tot+1

print("\nTotal Digit: ")
print(tot)
