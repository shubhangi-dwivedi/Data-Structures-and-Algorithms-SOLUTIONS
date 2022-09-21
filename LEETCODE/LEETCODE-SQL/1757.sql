/* 1757. Recyclable and Low Fat Products */
/* https://leetcode.com/problems/recyclable-and-low-fat-products/ */

/* Write your PL/SQL query statement below */

/*Method-1 (using =) */
select product_id 
from Products
where
low_fats='Y' and recyclable='Y';

/* Method-2 (using in) */
select product_id
from Products
where 
low_fats in ('Y') and recyclable in ('Y');

/* Method-3 (using like) */
select product_id 
from Products 
where 
low_fats like 'Y%' and recyclable like 'Y%';