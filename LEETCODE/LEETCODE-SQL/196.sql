/* 196. Delete Duplicate Emails */
/* https://leetcode.com/problems/delete-duplicate-emails/ */

/*
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your PL/SQL query statement below
 */

DELETE FROM person p WHERE p.id <> (SELECT MIN(id) FROM person WHERE email = p.email);