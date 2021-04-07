/*mysql -u root -p*/
use cse3003;
SELECT * FROM employee;
SELECT * FROM department;
SELECT * FROM dept_locations;
SELECT * FROM works_on;
SELECT * FROM projects;
SELECT * FROM dependent;
create table employee(
	Fname char(50) not null,
    Minit char(3) not null,
    Lname char(50) not null,
    Ssn int,
    Bdate varchar(100) not null,
    Address varchar(100),
    Sex char(2),
    Salary int,
    Super_ssn int,
    Dno int,
primary key (Fname)	
);
create table department(
	Dname char(50) not null,
    Dnumber int,
    Mgr_ssn int,
    Mgr_start_date varchar(20) ,    
primary key (Dname)	
);
create table dept_locations(	
    Dnumber int,
    Dlocation char(50) ,    
primary key (Dnumber)	
);
create table works_on(	
    Essn int,
    Pno int,
    Hours float	
);
create table projects(
	Pname char(50),
    Pnumber int, 
    Plocation varchar(50),
    Dnum int,
    primary key(Pname)
);
create table dependent(
	Essn int,
    Dependent_name char(20),
    sex char(2),
    Bdate varchar(30),
    Relationship char(50)
);
insert into employee (Fname, Minit, Lname, Ssn, Bdate, Address, Sex, Salary, Super_ssn, Dno)
values ('John', 'B', 'Smith',123456789, '1965-01-09', '731 Fondren, Houston, TX', 'M', 30000, 333445555, 5),
	   ('Franklin', 'T', 'Wong', 333445555, '1955-12-08', '638 Voss, Houston, TX', 'M', 40000, 888665555, 5),
	   ('Alicia', 'J', 'Zelaya', 999887777, '1968-01-19', '3321 Castle, Spring, TX', 'F', 25000, 987654321, 4),
	   ('Jennifer', 'S', 'Wallace', 987654321, '1941-06-20', '291 Berry, Bellaire, TX', 'F', 43000, 888665555, 4),
	   ('Ramesh', 'K', 'Narayan', 66884444, '1962-09-15', '975 Fire Oak, Humble, TX', 'M', 38000, 333445555, 5),
       ('Joyce', 'A', 'English', 453453453, '1972-07-31', '5631 Rice, Houston, TX', 'F', 25000, 333445555, 5),
       ('Ahmad', 'V', 'Jabbar', 987987987, '1969-03-29', '980 Dallas, Houston, TX', 'M', 25000, 987654321, 4),
       ('James', 'E', 'Borg', 888665555, '1937-11-10', '450 Stone, Houston, TX', 'M', 55000,NULL, 1);
       
insert into department (Dname, Dnumber, Mgr_ssn, Mgr_start_date)
values ('Research', 5, 333445555, '1988-05-22'),
	   ('Administration', 4, 987654321, '1995-01-01'),
       ('Headquarters', 1, 888665555, '1981-06-19');
insert into dept_locations(Dnumber, Dlocation)
values (1, 'Houston'),
	   (2, 'Stafford'),
	   (3, 'Bellaire'),
	   (4, 'Sugarland'),
	   (5, 'Houston');
insert into works_on (Essn, Pno, Hours)
values  (123456789, 1, 32.5),
		(123456789, 2, 7.5),
        (666884444, 3, 40.0),
        (453453453, 1, 20.0),
        (453453453, 2, 20.0),
        (333445555, 2, 10.0),
        (333445555, 3, 10.0),
        (333445555, 10, 10.0),
        (333445555, 20, 10.0),
        (999887777, 30, 30.0),
        (999887777, 10, 10.0),
        (987987987, 10, 35.0),
        (987987987, 30, 5.0),
        (987654321, 30, 20.0),
        (987654321, 20, 15.0),
        (888665555, 20, NULL);        
insert into projects (Pname, Pnumber, Plocation, Dnum)
values ('ProductX', 1, 'Bellaire', 5),
	   ('ProductY', 2, 'Sugarland', 5),
       ('ProductZ', 3 , 'Houston', 5),
       ('Computerization', 10 , 'Stafford', 4),
       ('Reorganization', 20, 'Houston', 1),
       ('Newbenefits', 30, 'Houston', 4);
insert into dependent (Essn, Dependent_name, Sex, Bdate, Relationship)
values (333445555, 'Alice', 'F', '1986-04-05', 'Daughter'),
	   (333445555, 'Theodore', 'M', '1983-10-25', 'Son'),
       (333445555, 'Joy', 'F', '1958-05-03', 'Spouse'),
       (987654321, 'Abner', 'M', '1942-02-28', 'Spouse'),
       (123456789, 'Michael', 'M', '1988-01-04', 'Son'),
       (123456789, 'Alice', 'F', '1988-12-30', 'Daughter'),
       (123456789, 'Elizabeth', 'F', '1967-05-05', 'Spouse');
       
/*Query 1-Retrieve the name and address of all employees who work for the ‘Research’ department*/
SELECT Fname, Minit, Lname, Address FROM employee,department WHERE department.Dname = 'Research' AND department.Dnumber = employee.Dno;
/*Query 2-For every project located in ‘Stafford’, list the project number, the controlling department number, and the department manager’s last name, address, and birth date*/
SELECT p.Pnumber, p.Dnum, e.Lname, e.Address, e.Bdate FROM projects p, department d, employee e WHERE p.Dnum = d.Dnumber AND d.Mgr_ssn = e.Ssn AND p.Plocation='Stafford';
/*Query 3-For each employee, retrieve the employee’s first and last name and the first and last name of his or her immediate supervisor.*/
SELECT e.Fname, e.Lname, s.Fname, s.Lname FROM employee s, employee e WHERE e.Super_ssn = s.Ssn;
/*Query 4-Select all combinations of EMPLOYEE Ssn and DEPARTMENT Dname in the database */
SELECT e.ssn, d.dname FROM employee e, department d;
/*Query 5-Make a list of all project numbers for projects that involve an employee whose last name is ‘Smith’, either as a worker or as a manager of the department that controls the project.*/
(SELECT DISTINCT Pnumber FROM projects, department, employee WHERE Dnum = Dnumber AND Mgr_ssn = Ssn AND Lname = 'Smith') UNION (SELECT DISTINCT Pnumber FROM projects, works_on, employee WHERE Pnumber = Pno AND Essn = Ssn AND Lname = 'Smith');
/*Query 6-Retrieve all employees whose address is in Houston, Texas*/
SELECT Fname, Lname FROM employee WHERE Address LIKE '%Houston, TX%';
/*Query 7-Retrieve all employees in department 5 whose salary is between $30,000 and $40,000.*/
SELECT Fname, Lname, Salary From employee WHERE (Salary between 30000 AND 40000) AND Dno=5;
/*Query 8- Retrieve a list of employees and the projects they are working on, ordered by department and, within each department, ordered alphabetically by last name, then first name.*/
SELECT d.Dname, e.Lname, e.Fname, p.Pname FROM department d, employee e, works_on w, projects p WHERE d.Dnumber=e.Dno AND e.Ssn=w.Essn AND w.Pno=p.Pnumber ORDER BY d.Dname DESC, e.Lname ASC, e.Fname ASC;