import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.pencolor("skyblue")
t.speed(0)
n = 1

while n < 500:
    t.forward(n)
    t.left(120)
    t.left(1)
    n +=1
turtle.done()