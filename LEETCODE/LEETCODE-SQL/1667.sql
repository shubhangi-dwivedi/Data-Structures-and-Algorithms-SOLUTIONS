/* 1667. Fix Names in a Table */
/* https://leetcode.com/problems/fix-names-in-a-table/ */

/* Write your PL/SQL query statement below */

/*Method-1*/
SELECT user_id, CONCAT(UPPER(SUBSTR(name, 1, 1)), LOWER(SUBSTR(name, 2))) AS name
FROM Users ORDER BY user_id;

/*Method-2*/
select user_id, initcap(name) as name from users order by user_id;