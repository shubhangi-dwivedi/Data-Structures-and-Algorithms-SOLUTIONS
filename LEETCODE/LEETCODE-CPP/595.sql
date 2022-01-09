/*595. Big Countries*/
/* Write your PL/SQL query statement below */

Select name,population,area from World where area > 3000000 OR population > 25000000;