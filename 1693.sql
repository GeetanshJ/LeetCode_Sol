# Write your MySQL query statement below
SELECT 
    date_id,
    make_name,
    COUNT(DISTINCT lead_id) AS unique_leads,
    COUNT(DISTINCT partner_id) AS unique_partners
FROM dailysales
GROUP BY date_id, make_name
HAVING COUNT(DISTINCT lead_id) >= 1 AND COUNT(DISTINCT partner_id) >= 1;
