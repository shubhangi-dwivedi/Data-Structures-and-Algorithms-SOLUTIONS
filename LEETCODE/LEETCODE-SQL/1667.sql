/* 1667. Fix Names in a Table */
/* https://leetcode.com/problems/fix-names-in-a-table/ */

/* Write your PL/SQL query statement below */
SELECT user_id, CONCAT(UPPER(SUBSTR(name, 1, 1)), LOWER(SUBSTR(name, 2))) AS name
FROM Users ORDER BY user_id;