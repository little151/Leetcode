# Write your MySQL query statement below
SELECT id,
    SUM(CASE WHEN month = 'jan' THEN revenue END) AS Jan_Revenue,
    SUM(CASE WHEN month = 'feb' THEN revenue END) AS Feb_Revenue,
    SUM(CASE WHEN month = 'mar' THEN revenue END) AS Mar_Revenue,
    SUM(CASE WHEN month = 'apr' THEN revenue END) AS Apr_Revenue,
    SUM(CASE WHEN month = 'may' THEN revenue END) AS May_Revenue,
    SUM(CASE WHEN month = 'jun' THEN revenue END) AS Jun_Revenue,
    SUM(CASE WHEN month = 'jul' THEN revenue END) AS Jul_Revenue,
    SUM(CASE WHEN month = 'aug' THEN revenue END) AS Aug_Revenue,
    SUM(CASE WHEN month = 'sep' THEN revenue END) AS Sep_Revenue,
    SUM(CASE WHEN month = 'oct' THEN revenue END) AS Oct_Revenue,
    SUM(CASE WHEN month = 'nov' THEN revenue END) AS Nov_Revenue,
    SUM(CASE WHEN month = 'dec' THEN revenue END) AS Dec_Revenue
FROM department
GROUP BY id
ORDER BY id;