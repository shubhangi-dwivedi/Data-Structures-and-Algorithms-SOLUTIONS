/*ORACLE*/
/*627. Swap Salary*/

/* Write your PL/SQL query statement below */
update salary set sex=case when(sex='m') then 'f'
when(sex='f') then 'm'
end;