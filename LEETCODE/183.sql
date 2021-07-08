//183. Customers Who Never Order

/* Write your PL/SQL query statement below */
select c.name as Customers from Customers c 
left join 
Orders o on 
c.id=o.CustomerId 
where o.CustomerId is NULL;