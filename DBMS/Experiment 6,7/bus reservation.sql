DROP DATABASE IF EXISTS 19WH1A1267;
CREATE SCHEMA 19WH1A1267;
USE 19WH1A1267;
CREATE TABLE Busb(bus_no VARCHAR(20),Sourc VARCHAR(20),destination VARCHAR(20),bcolour VARCHAR(20));
INSERT INTO Busb VALUES('TS123','hyderabad','banglore','blue');
INSERT INTO Busb VALUES('TS124','hyderabad','vizag','red');
INSERT INTO Busb VALUES('TS125','banglore','rajahmandry','blue');
INSERT INTO Busb VALUES('TS126','vizag','guntur','blue');
INSERT INTO Busb VALUES('TS127','vijayawada','tirupati','green');
SELECT * FROM Busb;
DELETE FROM Busb B WHERE B.Sourc='hyderabad';
SELECT * FROM Busb;
CREATE TABLE Passenger(p_name VARCHAR(20),p_id INT,gender VARCHAR(20),age INT,p_destination VARCHAR(20));
INSERT INTO Passenger VALUES('Raju',1234,'male',38,'hyderabad');
INSERT INTO Passenger VALUES('Rocky',1235,'male',42,'tirupati');
INSERT INTO Passenger VALUES('Rani',1238,'female',20,'hyderabad');
INSERT INTO Passenger VALUES('Ananya',1267,'female',43,'varanasi');
INSERT INTO Passenger VALUES('Raghu',1284,'male',47,'guntur');
SELECT * FROM Passenger;
DELETE FROM Passenger P WHERE p.age=50;
SELECT * FROM Passenger;
CREATE TABLE ticket(t_id INT,t_cost INT,destination VARCHAR(20),seatno VARCHAR(20),p_id INT);
INSERT INTO ticket VALUES(1234,234,'vizag','L12',1234);
INSERT INTO ticket VALUES(1237,568,'hyderabad','R19',1235);
INSERT INTO ticket VALUES(1294,894,'banglore','L21',1238);
INSERT INTO ticket VALUES(1256,765,'karnataka','L17',1267);
INSERT INTO ticket VALUES(1284,567,'varanasi','R12',1284);
SELECT * FROM ticket;
DELETE FROM ticket T WHERE t_id=1234;
SELECT * FROM ticket;
ALTER TABLE ticket ADD COLUMN seats INT;
SELECT * FROM ticket;
UPDATE ticket T SET T.t_cost = t_cost+1;
SELECT * FROM ticket;
SELECT DISTINCT P.p_id FROM Passenger P ;
SELECT P.p_name FROM Passenger P WHERE P.gender = 'male';
SELECT T.t_id,P.p_name FROM ticket T,Passenger P WHERE P.p_id = T.p_id;
SELECT T.t_id FROM ticket T ,Passenger P WHERE P.p_name LIKE 'R%h' AND P.p_id = T.p_id ;
 SELECT P.p_name FROM Passenger P WHERE  P.age >= 30 AND  P.age <= 45;
 SELECT P.p_name FROM Passenger P WHERE P.p_name LIKE 'A%';
 SELECT P.p_name FROM Passenger P ORDER BY p_name ASC;









