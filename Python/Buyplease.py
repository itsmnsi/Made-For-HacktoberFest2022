#Time Complexity of program= O(1)
import sys

a = int(sys.argv[1]) #No of pen
b = int(sys.argv[2]) #No of pencils
x = int(sys.argv[3]) #Quantity of pen
y = int(sys.argv[4]) #Quantity of pencils

a = a*x #Total amount payable for pen
b = b*y #Toatal amount payable for pencils

#Net total Chef has to pay to buy the items
print(a+b)
