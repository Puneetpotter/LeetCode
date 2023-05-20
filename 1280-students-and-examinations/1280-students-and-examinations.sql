# Write your MySQL query statement below
SELECT st.student_id, st.student_name, su.subject_name, COUNT(e.student_id) AS attended_exams 
FROM Students st 
CROSS JOIN Subjects su 
LEFT JOIN Examinations e ON st.student_id = e.student_id AND e.subject_name = su.subject_name 
GROUP BY su.subject_name, st.student_id, st.student_name
ORDER BY st.student_id, su.subject_name;