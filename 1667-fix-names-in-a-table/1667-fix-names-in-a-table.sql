# Write your MySQL query statement 
SELECT user_id , CONCAT(UPPER(substring(name,1,1)) ,LOWER(substring(name,2,LENGTH(name)-1))) AS name FROM Users ORDER  BY USER_ID