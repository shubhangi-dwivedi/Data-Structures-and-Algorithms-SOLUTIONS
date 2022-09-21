/* 584. Find Customer Referee */
/* https://leetcode.com/problems/find-customer-referee/ */

/* Write your PL/SQL query statement below */

/* Method-1 using(!=)*/
select name 
from Customer
where
referee_id!=2 or referee_id is NULL;

/* Method-2 (using <>)*/
select name 
from Customer
where
referee_id <> 2 or referee_id is NULL;

/* Method-3 (using not in)*/
select name 
from Customer
where
referee_id not in 2 or referee_id is NULL;