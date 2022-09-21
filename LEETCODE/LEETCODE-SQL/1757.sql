//1757. Recyclable and Low Fat Products
//https://leetcode.com/problems/recyclable-and-low-fat-products/

/* Write your PL/SQL query statement below */
select product_id 
from Products
where
low_fats='Y' and recyclable='Y';