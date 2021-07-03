/*596. Classes More Than 5 Students*/
/* Write your PL/SQL query statement below */

select class from courses group by class having count(distinct student)>= 5;