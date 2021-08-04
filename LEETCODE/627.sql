/*627. Swap Salary*/
/*ORACLE*/

/* Write your PL/SQL query statement below */
update salary set sex=case when(sex='m') then 'f'
when(sex='f') then 'm'
end;