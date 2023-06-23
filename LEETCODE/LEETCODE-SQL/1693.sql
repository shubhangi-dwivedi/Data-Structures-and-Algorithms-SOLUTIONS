/* 1693. Daily Leads and Partners */
/* https://leetcode.com/problems/daily-leads-and-partners/description/ */

/* Method -1 */
/* Using to_char so that time is removed in output*/
select to_char(date_id, 'yyyy-mm-dd') as date_id, 
make_name,
count(distinct(lead_id)) as unique_leads, 
count(distict(partner_id)) as unique_partners 
from DailySales
group by date_id,make_name;