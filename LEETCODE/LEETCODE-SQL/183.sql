/* 183. Customers Who Never Order */
/* https://leetcode.com/problems/customers-who-never-order/ */

/* Write your PL/SQL query statement below */

/* Methos-1 (using Left join) */
select 
c.name as Customers 
from customers c 
left join orders o 
on 
c.id = o.customerid
where 
o.id is null;

/* Method-2 (using subsquery) */
select name as Customers
from Customers 
where 
id not in(select customerId from Orders);