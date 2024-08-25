SELECT s.name NAME, SUM(t.amount) AS BALANCE
FROM users s
INNER JOIN transactions t ON t.account = s.account
GROUP BY s.name
HAVING SUM(t.amount) > 10000
;