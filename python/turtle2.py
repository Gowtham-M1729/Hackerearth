import turtle 
wn = turtle.Screen() 
wn.bgcolor("orange") 
wn.title("Turtle") 
skk = turtle.Turtle() 
skk.color("blue") 

def sqrfunc(size): 
	for i in range(4): 
		skk.fd(size) 
		skk.left(60) 
		size = size-5

sqrfunc(146) 
sqrfunc(126) 
sqrfunc(106) 
sqrfunc(86) 
sqrfunc(66) 
sqrfunc(46) 
sqrfunc(26) 
turtle.speed(1000)
#turtle.color("red")
for i in range(50): 
	turtle.circle(2*i) 
	turtle.circle(-2*i) 
	turtle.left(60) 

turtle.exitonclick() 

