#KochDrawV22.py
import turtle
def Koch(size, n):
    if n == 0:
        turtle.fd(size)
    else:
        for angle in [0, 60, -120, 60]:
            turtle.left(angle)
            Koch(size/3,n-1)
def main():
    turtle.setup(800,700)
    turtle.penup()
    turtle.goto(-300,150)
    turtle.pendown()
    turtle.pensize(2)
    level = 4
    Koch(500,level)
    turtle.right(120)
    Koch(500,level)
    turtle.right(120)
    Koch(500,level)
    turtle.hideturtle()
main()
