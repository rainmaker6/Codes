# importing rquired libraries 
import mysql.connector 

dataBase = mysql.connector.connect(host="localhost",user="root",password="shikhar") 

# preparing a cursor object 
c = dataBase.cursor() 
c.execute("DROP database IF EXISTS Mydata")
  
# creating database 
c.execute("CREATE DATABASE hello123")
c.execute("SHOW DATABASES")
c.close() 
