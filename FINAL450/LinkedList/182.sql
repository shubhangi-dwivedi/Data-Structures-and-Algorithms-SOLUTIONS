//182. Duplicate Emails

/* Write your PL/SQL query statement below */
select Email from Person group by Email having count(Email)>1;