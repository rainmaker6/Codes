n=5
for i in range(1,n+1):
 for j in range(1,n+1):
  print(i,end=" ")
 print(" ")
11111
22222
33333
44444
55555

12345
12345
12345
12345

n=5
for i in range(1,n+1):
 for j in range(1,i+1):
  print(j,end=" ")
 print(" ")
 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

n=5
for i in range(1,n+1):
 for j in range(1,i+1):
  print("*",end=" ")
 print(" ")
 
*
**
***
****
*****

n=65
for i in range(1,6):
 for j in range(1,i+1):
  print(chr(n),end=" ")
  n+=1
 print("\r")
#\r next row

A
B C
D E F
G H I J
K L M N O 

############################################
n=65
for i in range(1,6):
 for j in range(n,n+i):
  print(chr(j),end=" ")
 print("\r")
 
for i in range(1,6):
 for j in range(1,i+1): 
  print(chr(ord('A')+j-1),end=" ")
 print(" ")
############################################
A
A B
A B C
A B C D
A B C D E


n=6
for i in range(1,n):
 for j in range(1,n-i+1):
  print(i,end=" ")
 print("\r")
11111
2222
333
44
5

n=6
for i in range(1,n):
 for j in range(1,n-i+1):
  print(j,end=" ")
 print("\r")
12345
1234
123
12
1

n=6
for i in range(1,n):
 for j in range(1,n-i+1):
  print(n-i,end=" ")
 print("\r")
55555
4444
333
22
1

n=6
for i in range(1,n):
 for j in range(1,n-i+1):
  print(n-j,end=" ")
 print("\r")
54321
5432
543
54


n=6
x=65
for i in range(1,n):
 for j in range(1,n-i+1):
  print(chr(x),end=" ")
  x+=1
 print("\r")
ABCDE
FGHI
JKL
MN
O
#################################
for i in range(1,6):
 for j in range(1,i+1): 
  print(j*j),end=" ")
 print(" ")

print("Enter the no. of rows :")
n=int(input())
for i in range(1,n+1):
    for j in range(1,n+1):
        if(i+j==n+1):
            print("*",end=" ")
        elif(i+j>=n+1):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print(" ")

########################################
x=65
for i in range(1,6):
    for j in range(1,6-i):
        print(" ", end=" ")
    for k in range (1,i+1):
        print(chr(x), end=" ")
        x=x+1
    x=65
    print("")
    
    
    
    print("Enter the no. of rows :")
n=int(input())
for i in range(1,n+1):
    for j in range(1,n+1):
        if(i==j):
            print(" ",end=" ")
        elif(i>=j):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print(" ")

for n in range(5,0,-1):
    for j in range(1,6-n):
        print(" ", end=" ")
    for k in range (1,n+1):
        print("*", end=" ")
       
    print("")
    
    
    for n in range(5,0,-1):
    for j in range(1,6-n):
        print(" ", end=" ")
    for k in range (1,n+1):
        print(5-k+1, end=" ")
       
    print("")
    
    n=int(input("Enter value "))
for i in range(1, n+1):
    print(' '*(n-i) + '* '*(i))
    ###########################
    for i in range(1,6):
    for j in range(1,6-i):
        print(" ", end=" ")
    for k in range (1,i+1):
        print(i, end=" ")
    for l in range(2,i+1):
        print(i,end=" ")
    print("")
    ####
    for i in range(1,6):
    for j in range(1,6-i):
        print(" ", end=" ")
    for k in range (0,2*i-1):
        print(i, end=" ")


    print("")
    
    ##########################pant pattern
    
    
    #Enter no of rows
n=7
for i in range(1,n+1):
    t=65
    for j in range(1,n+1):
        if(i+j<=n+1):
            print(chr(t),end=" ")
            t=t+1
        else:
            print(" ",end=" ")
    t=65+n-2
    for j in range(n + 1, 2 * n):
        if (j-i>=n-1):
            print(chr(t), end=" ")
            t = t - 1
        else:
            print(" ", end=" ")
            t = t - 1
    print("\r")
    ##################################
qwerty ={  
         'a' : '1', 
         'b' : '2', 
         'c' : '3', 
         'd' : '4'
        } 
                                                       
for i,j in qwerty.items(): 
           print(i, ":", j)
print('\r')
for t,y in enumerate(['a','b','c']):
 print(t+1,y) 
print('\r')

for b,n in enumerate(('1','1','3')):
 print(b+1,n) 
print('\r')

t=['a','b','c']
y=['1','2','3','4']#it willn't go for 4th element in b as no element is present correspoding to it 
for q,w in zip(t,y):
 print('What is your {0}? It is {1}.'.format(q,w))
print('\r')

for i in reversed(range(1,10,2)):#print reversed 9->1
 print(i)
print('\r')

t=['c','a','b']
for r in sorted(set(t)):#print sorted set converted to set then print
 print(r)
print('\r') 

###################factorial while
n=int(input("Enter a number:"))
f=1
s=1
while s<=n:
 f*=s
 s+=1
print(f)

###############palindrome number
n=int(input("Enter a number:"))
clone=n
newnum=0
while n!=0:
 r=n%10
 newnum*=10
 newnum+=r
 n//10#lower bound

if(n==clone):
 print("Yes\r")
else:
 print("No\r")
 
 ####################################
 s="hello"
print(s.capitalize())

s="HELLO"
print(s.casefold())


s="HELLO WORLD"
print(s.center(100))
#

s="HELLO WORLD"
print(s.count("O"))

s="HELLO WORLD"
print(s.index("O"))#pheli baar if not find it will generate error

s="HELLO WORLD"
print(s.find("d"))#-1 for no result

s="2759827509"
print(s.isalnum())#check full string if it contains alphabets(uppercase also)||numbers and both also spacing pe false

s="35 9272957"
print(s.isdigit())#check full string if it only contains numerics no spaces count only for strings

s="abdbFs"
print(s.islower())#check full string   

s="SKGOK"
print(s.isupper())#check full string  
################################
def f(*a):#tuple formed
 a[0]=a[0]+a[2]
 a[2]=a[0]-a[2]
 a[0]=a[0]-a[2]
 print(a[0],a[2])

f(int(input("Enter first value:")),int(input("Enter second value:")),int(input("Enter third value:")))


def f(*a):#tuple formed
 for i in range(0,3):
  print(a[i]," ")
f(int(input("Enter first value:")),int(input("Enter second value:")),int(input("Enter third value:")))

def f(a,b,c):# key value method position dependency removed
  print(a," ",b," ",c)
f(a=int(input("Enter first value:")),b=int(input("Enter second value:")),c=int(input("Enter third value:")))

def f(a,b,c):# not position dependent only key dependent
  print(a," ",b," ",c)
f(c=int(input("Enter first value:")),a=int(input("Enter second value:")),b=int(input("Enter third value:")))

def f(a="Hello"):# not position dependent only key dependent
  print(a)
f("ONE")
f()#default value Hello will b printed
f("TWO")
f("THREE")

def f(a,b):
 return a*b
print(f(int(input("Enter first value:")),int(input("Enter second value:"))))


def f(a):
 b=[]
 for i in a:
  if i not in b:
   b.append(i);
 return b
 
l=list(input("Enter list:"))# space is also a unique charachter
print(f(l))

def f(a):
 b=[]
 for i in a:
  if i not in b:
   b.append(i);
 return b

print(f(list(input("Enter list:"))))# space is also a unique charachter
###########################################
def fib(n):  
 if n <= 1:  
  return n  
 else:  
  return(fib(n-1)+fib(n-2))  
n=int(input("Enter value:"))  
if n<= 0:  
   print("Wrong value Entered !")  
else:  
  print("Fibonacci sequence:")  
  for i in range(n):  
    print(fib(i))  
#################################################
def f():
 x=10
 print(x)
#save it it will be like a module
#to use it in another file
import a#file name
a.fun():#using its function


#############################
###########################swapping using modules(tuple) 

def f(x): 

k=list(x) 

a=k[0] 

k[0]=k[3] 

k[3]=a 

return k 

  

x=("a","b","c","d") 

print(f(x)) 

############ 

Import a 

y=("a","b","c","d") 

a.f(y) 
##########################
try:
 print(x):
 print(a)
except NameError:
 print("Name Error hai")
except SyntaxError:
 print("galat likha hai")
except OSError:
 print("os kharab hai")
except:
 print("idk")
 ####################################
 try:#if no error in try and else exceuted agar error hai toh else nahi chalega except will run 
 a=10#except ka else hai
 #print(a)
except:
 print("Error")
else:
 print("idk")
 ##############################
try:
 #a=10
 print(a)
except:
 print("Error")
else:
 print("idk")
finally:
 print("always executed")
################################
try:
 x=int(input("Enter a number:"))
 if(x%2==0):
  print("Even Number")
 else:
  print(a)
except NameError:
 print(x,":is a Odd Number")
else:
 print("Not a number")
#########################################################
try:
 x=int(input("Enter a number:"))
 if(x<0):
  raise Exception("No Numbers below 0")
 if((x&1)^1):
  print("No Error Block")
 else:
  print(a)
except NameError:
 print("Error Block")
 print(x,":is a Odd Number")
else:
 print(x,"is a Even Number")
#raise TYpeError("Type error occured")
##############################
try:
 x=int(input("Enter a number:"))
 if(x<0):
  raise TypeError("Type error occured")
 if((x&1)^1):
  print("No Error Block")
 else:
  print(a)
except NameError:
 print("Error Block")
 print(x,":is a Odd Number")
else:
 print(x,"is a Even Number")
#raise Exception("No Numbers below 0")
#######################
class c:
 a=5
 print(a)
c()#default constructor
###########
class c:
 a=5
q=c()#object
print(q.a)
###########################
class c:
  def __init__(self,name,age):#default constructor
   self.name=name
   self.age=age
  
p=c("Hello",69)
print(p.name)
print(p.age)
###################################
class c:
  def __init__(self,name,age):#default constructor
   self.n=name
   self.a=age#can write anything in place of self
  # print(xyz.n,xyz.a)
  x=20
  def displayname(self):
   print("My name is:"+self.n+self.a) 
  def printx(self):#self parameter is always necessary
   x=200
   print(x)
  
p=c("Hello","World")
p.displayname()
p.printx()
#print(p.n,p.a) 
print(p.x)
#######################################
class c:
  def __init__(self,name,age):#default constructor
   self.n=name
   self.a=age
  # print(xyz.n,xyz.a)
  x=20
  def displayname(self,mname):
   self.m=mname
   print("My name is:"+self.n+self.a+self.m) 
  def printx(self):
   x=200
   print(x)
  
p=c("Hello","World")
del p.a#delete a variable in class
print(p.a)
p.displayname("To")
p.printx()

#print(p.n,p.a) 
print(p.x)
################################
class c:
  def __init__(self,name,age):#default constructor
   self.n=name
   self.a=age
  # print(xyz.n,xyz.a)
  x=int(input("Enter a value:"))
  def displayname(self,mname):
   self.m=mname
   print("My name is:"+self.n+self.a+self.m) 
  def printx(self):
   x=200
   print(x)
  def printr(self,x):
   print(self.x)
  
p=c("Hello","World")
#del p.a#delete a variable in class
print(p.a)
p.displayname("To")
p.printx()
#print(p.n,p.a) 
print(p.x)
#############################################################
class c:
  h=[]
  def __init__(self,name,age):#default constructor
   self.n=name
   self.a=age
  def add_h(mself,name):
   mself.h.append(name)
   #print(self.h)
  # print(xyz.n,xyz.a)
  x=int(input("Enter a value:"))
  def displayname(self,mname):
   self.m=mname
   print("My name is:"+self.n+self.a+self.m) 
  def printx(self):
   x=200
   print(x)
  def printr(self,x):
   print(self.x)
  
p=c("Hello","World")
#del p.a#delete a variable in class
print(p.a)
p.displayname("To")
p.printx()
p.add_h('Hello')
p.add_h('World')
print(p.h)
#print(p.n,p.a) 
print(p.x)
#############################
class c: 

  __x=100 

   

p=c() 

print(p.x) 

###################### 

class c: 

  _x=100 

   

p=c() 

print(p.x) 

########################## 

class c: 

  def __init__(self,name,sal): 

   self.n=name 

   self.s=sal 

   

p=c("Hello",3000) 

print(p.s) 

############################# 
class c: 

  def __init__(self,name,sal): 

   self._n=name 

   self._s=sal 

   

p=c("Hello",3000) 

print(p._s) 
#############################
class c:#protected can be inherited
  def __init__(self,name,sal):
   self._n=name
   self._s=sal
  class d:
   def __init__(self,name,salary):
    self._name=n
    self._salary=sal
p=c("Hello",3000)
print(p._s)
print(p.d._name)
###################################
class a:
  __name=None
  __roll=None
  __branch=None
  def __init__(self,name="World",roll=66,branch="ECE"):#default
   self.__name=name 

   self.__roll=roll 

   self.__branch=branch 
  def __displayDetails(self):
   print(self.__name)
   print(self.__roll)
   print(self.__branch)
  def acessPrivateFunction(self):#access private members
   self.__displayDetails()

p=a("Hello",1234,"CSE")
p.acessPrivateFunction()
################################
class a:
  __name=None
  __roll=None
  __branch=None
  def __init__(self,name="World",roll=66,branch="ECE"):#default
   self.__name=name
   self.__roll=roll
   self.__branch=branch
  def __displayDetails(self):
   print(self.__name)
   print(self.__roll)
   print(self.__branch)
  def acessPrivateFunction(self):
   self.__displayDetails()

p=a("Hello",1234,"CSE")
p.acessPrivateFunction()

##########################
class rectangle:
  def __init__(self,length=1,breadth=1):#default
   self.l=length
   self.b=breadth
  def area(self):
   a_rectangle=self.l*self.b
   print(a_rectangle)
   
class square(rectangle):
 def __init__(self,length,breadth,side):
  self.s=side
  super().__init__(side,side)#all properties inherited
  rectangle.__init__(self,length,breadth)#rectangle class __init__ fxn inherited
 def area_s(self):
  area_s=self.s*self.s
  print(area_s)
p=rectangle(2,4)
p.area()
v=square(5,4,4)
v.area_s()
################################
class Order: 

def __init__(self,cart,customer): 

  self.cart=list(cart) 

  self.customer=customer 

def __iadd__(self,other): 

  self.cart.append(other) 

  return self 

o=Order(['a','b','c'],'d') 

o+='e' 

print(o.cart) 
############################################
class c:
 def area(self,x=None,y=None):
  if x!=None and y!=None:
   return x*y
  elif x!=None:
   return x*x
  else:
   return 0
obj=c()
print(obj.area())
print(obj.area(4))
print(obj.area(4,5))
################################################3
class T():
 def type(self):
  print("Vegetable")
 def color(self):
  print("Red")
class A():
 def type(self):
  print("Fruit")
 def color(self):
  print("Red")

def f(obj):
 obj.type()
 obj.color()

obj1=T()
obj2=A()
f(obj1)
f(obj2)
############################################
class India():
 def capital(self):
  print("New Delhi")
 def language(self):
  print("Hindi & English")

class USA():
 def capital(self):
  print("Washington DC")
 def language(self):
  print("English")

i=India()
u=USA()

for c in (i,u):
 c.capital()
c.language()
#############################################
class Bird:
 def intro(self):
  print("There are different types of birds")
 def flight(self):
   print("Most of the birds can fly but some cannot")
class Parrot(Bird):
 def flight(self):
  print("Parrot can fly")
class Penguin(Bird):
 def flight(self):
  print("Penguins do not fly")

b=Bird()
p=Parrot()
pen=Penguin()
b.intro()
b.flight()
p.intro()
p.flight()
pen.intro()
pen.flight()
###############################################
import mysql.connector 
mydb = mysql.connector.connect( 
host="localhost", 
user="root", 
password="shikhar",database="hello") 
cursor=mydb.cursor() 
#cursor.execute("DROP database IF EXISTS Mydatabase") 
#cursor.execute("CREATE database hello")
#cursor.execute("SHOW DATABASES")
#conn.close()
#cursor.execute("SHOW DATABASES")
#print(cursor.fetchall())
#cursor.execute("CREATE TABLE customers(name VARCHAR(255),address VARCHAR(255))")
#cursor.execute("DROP DATABASE ")
cursor.execute("INSERT INTO customers(name,address) VALUES (%s,%s)",("John","Highway 21"))
mydb.commit()
cursor.execute("SHOW TABLES")
for i in cursor:
 print(i)
mydb.close()
##############################
import mysql.connector 
mydb = mysql.connector.connect( 
host="localhost", 
user="root", 
password="shikhar",database="hello") 
cursor=mydb.cursor() 
#cursor.execute("DROP database IF EXISTS Mydatabase") 
#cursor.execute("CREATE database hello")
#cursor.execute("SHOW DATABASES")
#conn.close()
#cursor.execute("SHOW DATABASES")
#print(cursor.fetchall())
#cursor.execute("CREATE TABLE customers(name VARCHAR(255),address VARCHAR(255))")
#cursor.execute("DROP DATABASE ")
cursor.execute("DROP TABLE customers")
cursor.execute("CREATE TABLE customers(name VARCHAR(255),address VARCHAR(255),ph VARCHAR(255))")
sql="INSERT INTO customers(name,address,ph) VALUES (%s,%s,%s)"
val=[
("a","1a",'1'),
("b","2b",'2'),
("c","3c",'2')
]
cursor.executemany(sql,val)
mydb.commit()
print(cursor.rowcount,"row inserted")
mydb.close()
###################################################
import mysql.connector 
mydb = mysql.connector.connect( 
host="localhost", 
user="root", 
password="shikhar",database="hello") 
cursor=mydb.cursor() 
#cursor.execute("DROP database IF EXISTS Mydatabase") 
#cursor.execute("CREATE database hello")
#cursor.execute("SHOW DATABASES")
#conn.close()
#cursor.execute("SHOW DATABASES")
#print(cursor.fetchall())
#cursor.execute("CREATE TABLE customers(name VARCHAR(255),address VARCHAR(255))")
#cursor.execute("DROP DATABASE ")
cursor.execute("DROP TABLE customers")
cursor.execute("CREATE TABLE customers(name VARCHAR(255),address VARCHAR(255),ph VARCHAR(255),sex VARCHAR(255))")
sql="INSERT INTO customers(name,address,ph,sex) VALUES (%s,%s,%s,%s)"
val=[
("a","1a",'1','1'),
("b","2b",'2','1'),
("c","3c",'2','1')
]
cursor.executemany(sql,val)
mydb.commit()
print(cursor.rowcount,"row inserted")
mydb.close()
#############################################################
import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

print("Opened database sucessfully") 

mydb.close() 

##################################################### 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

c.execute("SHOW DATABASES") 

for x in c: 

print(x) 

mydb.close() 

######################################################## 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

cursor.execute("CREATE TABLE customers(r_no int,name text,address char(30));")  

print("TAble created successfully") 

mydb.commit() 

mydb.close() 

################################################################## 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

cursor.execute("CREATE TABLE faculty(f_id int NOT NULL,f_name text,f_address char(30),f_contact int);")  

print("TAble created successfully") 

mydb.commit() 

mydb.close() 

##################################################################### 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

#real floating value 

c.execute("create table faculty(f_id int,f_name text,f_address char(30),f_no int);")  

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (1,'Hello','Tax',34);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (2,'fajos','fasf',54);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (3,'faojk','Tfa',765);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (4,'aofjo','gfr',3434);") 

print("Records created successfully") 

mydb.commit() 

mydb.close() 

################################################################## 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

#real floating value 

c.execute("create table faculty(f_id int,f_name text,f_address char(30),f_no int);")  

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (1,'Hello','Tax',34);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (2,'fajos','fasf',54);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (3,'faojk','Tfa',765);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (4,'aofjo','gfr',3434);") 

c.execute("select * from faculty;") 

print(c.fetchall()) 

mydb.commit() 

mydb.close() 

############################################################# 

import mysql.connector  

mydb = psycopg2.connect(  

user="postgres", 

password="shikhar", 

host="127.0.0.1",  

port="5432")  

c=mydb.cursor() 

#real floating value 

c.execute("create table faculty(f_id int,f_name text,f_address char(30),f_no int);")  

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (1,'Hello','Tax',34);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (2,'fajos','fasf',54);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (3,'faojk','Tfa',765);") 

c.execute("INSERT INTO faculty (ID,NAME,ADDRESS,SALARY) VALUES (4,'aofjo','gfr',3434);") 

c.execute("select * from faculty;") 

print(c.fetchall()) 

d=(c.fetchall()) 

for i in d: 

print(i) 

mydb.commit() 

mydb.close() 

################################################## 

 import tkinter
top=tkinter.Tk()
top.mainloop()
########################################################
import tkinter as tk
qin=tk.Tk()
greeting=tk.Label(text="Shikhar, Vashistha")
greeting.pack()#to attach label with window
qin.mainloop()#stay long
############################################################
import tkinter as tk
qin=tk.Tk()
greeting=tk.Label(text="Shikhar, Vashistha",
foreground="white",
background="black"
)
greeting.pack()#to attach with window
qin.mainloop()#stay long
##############################################################
import tkinter as tk
qin=tk.Tk()
greeting=tk.Label(text="Shikhar, Vashistha",
fg="#000000",
bg="#FFFFFF",#hexadecimal also
width="10",
height="10"
)
greeting.pack()#to attach with window
qin.mainloop()#stay long
##############################################
import tkinter as tk
qin=tk.Tk()
x=tk.Entry(text="Submit",#edit text
fg="yellow",
bg="blue",#hexadecimal also
width="50",
)
x.pack()#to attach with window
qin.mainloop()#stay long

##########################################################
import tkinter as tk
def write():
 print("Written")
 
window=tk.Tk()
frame=tk.Frame(window)
frame.pack()

x=tk.Button(frame,
text="QUIT",
fg="white",
bg="black",
command=quit
)

x.pack(side=tk.LEFT)

y=tk.Button(frame,
text="HELLO",
command=write)

y.pack(side=tk.LEFT)

window.mainloop()

############################################################
import tkinter as tk
counter=0 
def counter_label(label):
 cnt=0
 def count():
   global counter
   counter+=1
   label.config(text=str(counter))
   label.after(1000,count)
 count()
win=tk.Tk()
win.title("Counting Seconds")
x=tk.Label(win,fg="dark green")
x.pack()
counter_label(x)
b=tk.Button(win,text='Stop',width=25,command=win.destroy)
b.pack()
win.mainloop()


###############################################################

import tkinter as tk
win=tk.Tk()
x="Hello"
msg=tk.Message(win,text=x)
msg.config(bg='lightgreen',font=('times',24,'italic'),width=10)
msg.pack()
win.mainloop()
################################################################
#radio button
import tkinter as tk
win=tk.Tk()
x=tk.IntVar()#check value of variable
tk.Label(win,text="Choose",justify=tk.LEFT,padx=20).pack()
tk.Radiobutton(win,text="Python",padx=20,variable=x,value=1).pack(anchor=tk.W)
tk.Radiobutton(win,text="C++",padx=20,variable=x,value=2).pack(anchor=tk.W)
win.mainloop()
##############################################################
import tkinter as tk

root = tk.Tk()

v = tk.IntVar()
v.set(1)  # initializing the choice, i.e. Python

languages = [
    ("Python",1),
    ("Perl",2),
    ("Java",3),
    ("C++",4),
    ("C",5)
]

def ShowChoice():
    print(v.get())

tk.Label(root, 
         text="""Choose your favourite 
programming language:""",
         justify = tk.LEFT,
         padx = 20).pack()

for val, language in enumerate(languages):
    tk.Radiobutton(root, 
                  text=language,
                  indicatoron=0,
                  padx = 20, 
                  variable=v, 
                  command=ShowChoice,
                  value=val).pack(anchor=tk.W)


root.mainloop()
#############################################################
#message box
import tkinter as tk
from tkinter import messagebox as mb

def answer():
    mb.showerror("Answer", "Sorry, no answer available")

def callback():
    if mb.askyesno('Verify', 'Really quit?'):
        mb.showwarning('Yes', 'Not yet implemented')
    else:
        mb.showinfo('No', 'Quit has been cancelled')

tk.Button(text='Quit', command=callback).pack(fill=tk.X)
tk.Button(text='Answer', command=answer).pack(fill=tk.X)
tk.mainloop()
































