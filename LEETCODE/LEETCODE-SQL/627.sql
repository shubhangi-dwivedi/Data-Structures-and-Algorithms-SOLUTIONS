/* 627. Swap Salary */
/* https://leetcode.com/problems/swap-salary/?envType=study-plan&id=sql-i */

/* Write your PL/SQL query statement below */
UPDATE Salary 
SET sex  = (
CASE 
    WHEN sex ='m' THEN 'f'
    ELSE 'm'
END );