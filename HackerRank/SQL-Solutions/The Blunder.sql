/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT CEIL((AVG(SALARY)) - AVG(REPLACE(SALARY,0,''))) FROM EMPLOYEES;