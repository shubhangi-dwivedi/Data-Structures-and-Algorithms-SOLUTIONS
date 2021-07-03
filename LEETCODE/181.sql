/*181. Employees Earning More Than Their Managers*/

/*Oracle*/
/* Write your PL/SQL query statement below */
SELECT a.Name AS Employee FROM Employee  a, Employee  b
WHERE
a.ManagerId=b.Id 
AND
A.salary > b.salary