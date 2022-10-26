def  fibonacci(n):

	if n == 1  or n == 0:

		return n;

	else:

		return fibonacci(n-2) + fibonacci(n - 1)


num = int(input("Enter a positive integer : "))

if num < 0:
	print("Number is not valid")

i = 0

print("fibonacci secession: ")

for i in range(0, num):
	print(fibonacci(i))

# Crafted by Sagnik Sahoo © 2022
