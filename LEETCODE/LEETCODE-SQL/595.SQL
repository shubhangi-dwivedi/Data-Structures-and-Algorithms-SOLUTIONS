//595. Big Countries
//https://leetcode.com/problems/big-countries/

/* Write your PL/SQL query statement below */
select name,population,area 
from World
where 
area>=3000000 or population>=25000000;