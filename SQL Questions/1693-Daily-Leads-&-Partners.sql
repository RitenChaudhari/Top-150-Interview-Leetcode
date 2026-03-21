SELECT date_id,make_name, SUM(DISTINCT lead_id) AS unique_leads, SUM( DISTINCT partner_id) AS unique_partners
FROM DailySales 
GROUP BY date_id,make_name;