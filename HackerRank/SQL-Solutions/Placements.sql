select s.name 
from students s, friends f, packages p, packages p2 
where s.id = f.id and f.friend_id = p2.id and s.id = p.id and p.salary < p2.salary 
order by p2.salary;