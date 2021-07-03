select trim(lpad(' *',level*2,'* ')) 
from dual connect by level < 21;