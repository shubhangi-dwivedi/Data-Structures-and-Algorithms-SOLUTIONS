//175. Combine Two Tables

/* Write your PL/SQL query statement below */
select FirstName, LastName,City, State from Person 
left outer join Address 
on 
Person.PersonId=Address.PersonId;