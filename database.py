import mysql.connector 

conn=mysql.connector.connect(host="localhost",user="root",password="shikhar") 

cursor=conn.cursor() 

cursor.execute("SELECT DATABASE()") 

data=cursor.fetchone() 

print("connection established to:",data) 

conn.close()