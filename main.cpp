

import turtle
window = turtle.Screen()


pent = turtle.Turtle()
pent.color("black")
pent.begin_fill()
for i in range(5):
    pent.forward(150)
    pent.left(72)
pent.end_fill()

pent.color("blue")
pent.begin_fill()
pent.goto(0,0)
pent.goto(75,-25)
pent.goto(150,0)
pent.end_fill()

pent.color("dark red")
pent.begin_fill()
pent.goto(150,0)
pent.goto(200,60)
pent.goto(196.35,142.66)
pent.end_fill()

pent.color("gray")
pent.begin_fill()
pent.goto(196.35,142.66)
pent.goto(150,210)
pent.goto(75,230.83)
pent.end_fill()

pent.color("dark blue")
pent.begin_fill()
pent.goto(75,230.83)
pent.goto(0,210)
pent.goto(-46.35,142.66)
pent.end_fill()

pent.color("purple")
pent.begin_fill()
pent.goto(-46.35,142.66)
pent.goto(-45,60)
pent.goto(0,0)
pent.end_fill()

pent.color("yellow")
pent.begin_fill()
pent.goto(0,0)
pent.goto(75,100)
pent.goto(150,0)
pent.end_fill()

pent.color("orange")
pent.begin_fill()
pent.goto(150,0)
pent.goto(75,100)
pent.goto(196.35,142.66)
pent.end_fill()

pent.color("red")
pent.begin_fill()
pent.goto(196.35,142.66)
pent.goto(75,100)
pent.goto(75,230.83)
pent.end_fill()

pent.color("lime green")
pent.begin_fill()
pent.goto(75,230.83)
pent.goto(75,100)
pent.goto(-46.35,142.66)
pent.end_fill()

pent.color("blue")
pent.begin_fill()
pent.goto(-46.35,142.66)
pent.goto(75,100)
pent.goto(0,0)
pent.end_fill()




import turtle
window = turtle.Screen()

//#dodecahedron
do = turtle.Turtle()
do.color("aqua")
do.begin_fill()
for i in range(5):
    do.forward(150)
    do.left(72)
    print(do.pos())
do.end_fill()

for i in range(5):
    do.forward(150)
    do.right(54)
    do.forward(50)
    print(do.pos())
    do.backward(50)
    do.left(54)
    do.left(72)

do.color("black")
do.begin_fill()
do.goto(0,0)
do.goto(-29.39,-40.45)
do.goto(75,-65)
do.goto(179.39,-40.45)
do.goto(150,0)
do.end_fill()

do.color("blue")
do.begin_fill()
do.goto(150,0)
do.goto(179.39,-40.45)
do.goto(235,51)
do.goto(243.91,158.11)
do.goto(196.35,142.66)
do.end_fill()

do.color("yellow")
do.begin_fill()
do.goto(196.35, 142.66)
do.goto(243.91,158.11)
do.goto(174,239)
do.goto(75,280.83)
do.goto(75,230.83)
do.end_fill()

do.color("purple")
do.begin_fill()
do.goto(75,230.83)
do.goto(75,280.83)
do.goto(-24,239)
do.goto(-93.91,158.11)
do.goto(-46.35,142.66)
do.end_fill()

do.color("black")
do.begin_fill()
do.goto(-46.35,142.66)
do.goto(-93.91,158.11)
do.goto(-85,51)
do.goto(-29.39,-40.45)
do.goto(0,0)
do.end_fill()