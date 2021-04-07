create database cse3003;
/*show databases;*/
use cse3003;
create table customers(
	customer_id int not null,
    first_name varchar(255) not null,
    last_name varchar(255) not null,
    phone varchar(25),
    email varchar(255) not null,
    street varchar(255),
    city varchar(50),
    state varchar(10),
    zip_code varchar(10),
primary key (customer_id)	
);
/*desc customers;
drop table customers;
drop database cse3003;
show tables;*/
insert into customers (customer_id, first_name, last_name, phone, email, street, city, state, zip_code)
values (1, 'Debra', 'Burks','', 'debra.burks@yahoo.com', '9273 Thorne Ave', 'Orchard Park', 'NY','14127'),
	   (2, 'Kasha', 'Todd','', 'kasha.todd@yahoo.com', '910 Vine Street', 'Campbell', 'CA','95008'),
	   (3, 'Tameka', 'Fisher','', 'tameka.fisher@yahoo.com', '749C Honey Creek St', 'Redondo Beach', 'CA','90278'),
	   (4, 'Daryl', 'Spence','', 'daryl.spence@aol.com', '988 Pearl Lane','Uniondale', 'NY','11553'),
	   (5, 'Charolette', 'Rice','(916) 381-6003', 'charolette.rice@msn.com', '107 River Dr.', 'Sacremanto', 'CA','14127'),
       (6, 'Lyndsey', 'Bean','', 'lyndsey.bean@hotmail.com', '769 West Road','Fairport', 'NY','14450'),
       (7, 'Latasha', 'Hays','(716) 986-3359', 'latasha.hays@hotmail.com', '7014 Manor Station Rd.', 'Buffalo', 'NY','14125'),
       (8, 'Jacquline', 'Ducan','', 'jacquline.ducan@yahoo.com', '15 Brown Scustomer_idzip_codePRIMARYphonestreett.','Jackson Heights', 'NY','11372'),
       (9, 'Genoveva', 'Baldwin','', 'genoveva.baldwin@msn.com', '8550 Spruce Drive','Port Washington', 'NY','11050'),
       (10, 'Pamelia', 'Newman','', 'pamelia.newman@gmail.com', '476 Chestnut Ave.','Monore', 'NY','10950');
desc customers;
SELECT first_name, last_name FROM customers;
SELECT first_name, last_name, email FROM customers;
SELECT * FROM customers WHERE state = 'CA';
SELECT * FROM customers WHERE state = 'CA' ORDER BY first_name;
SELECT city,COUNT(*) FROM customers WHERE state='CA' GROUP BY city ORDER BY city; /*ORDER BY COUNT(*) DESC*/
SELECT city,COUNT(*) FROM customers WHERE state='CA' GROUP BY city HAVING COUNT(customer_id) ORDER BY city;
SELECT city,COUNT(*) FROM customers WHERE state ='CA' GROUP BY city HAVING COUNT(customer_id)>10 ORDER BY street;
CREATE TABLE orders (
order_id INT NOT NULL ,
Customer_id INT NOT NULL ,
OrderDate VARCHAR (10) ,
State VARCHAR (10) ,
zip_code VARCHAR (5) ,
PRIMARY KEY (customer_id)
);
INSERT INTO orders (order_id, Customer_id, OrderDate, State, zip_code)
VALUES (10308, 2,'1996-09-18','NY','95008'), (10309, 7,'1996-09-19','NY','14215'), (10310, 5,'1996-09-20','CA','95820');
/*drop table orders;*/
select orders.order_id, customers.first_name, orders.orderdate from orders inner join customers on orders.Customer_id=customers.customer_id;
select customers.first_name, orders.order_id from customers left join orders on customers.customer_id=orders.customer_id order by customers.first_name;
select customers.first_name, orders.order_id from customers right join orders on customers.customer_id=orders.customer_id order by customers.first_name;
select * from Customers

left join orders on customers.customer_id = orders.customer_id union select * from customers right join orders on customers.customer_id = orders.customer_id;
SELECT first_Name, last_Name, Phone FROM Customers WHERE Phone IS NULL;
SELECT first_Name, last_Name, Phone FROM Customers WHERE Phone IS NOT NULL;
SELECT count(customer_id), avg(customer_id), sum(customer_id), min(customer_id), max(customer_id) FROM customers;
CREATE TABLE Person ( ID int NOT NULL, LastName varchar(255) NOT NULL, FirstName varchar(255), Age int, PRIMARY KEY (ID,LastName));
CREATE TABLE Orderss
( OrderID int NOT NULL, OrderNumber int NOT NULL, PersonID int, PRIMARY KEY (OrderID), FOREIGN KEY (PersonID) REFERENCES Person(ID) );
drop table Person;
drop table orderss;
create table temp(
c1 int,
c2 varchar(30),
c3 varchar(50),
primary key(c1, c2)
);