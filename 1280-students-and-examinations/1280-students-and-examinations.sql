SELECT s.student_id, s.student_name, su.subject_name, 
(SELECT COUNT(1) 
	FROM Examinations 
	# Don't forgot to connect TWO variables 
	WHERE student_id = s.student_id 
	AND subject_name = su.subject_name) AS attended_exams
FROM Students s
JOIN Subjects su
 ORDER BY s.student_id, su.subject_name