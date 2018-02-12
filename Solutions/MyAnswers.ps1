$myData = Import-Csv ../../networkdata.csv

# Question 1 
$myData

# Question 2 
$myData.length

# Question 3
$myData | ForEach-Object { if ($_.password.length -lt 30){ $_ }}

# Question 4
$myData | ForEach-Object { if ($_.password.length -lt 30){ $_.password }}

# Question 5
$myData | ForEach-Object {if ($_."user name" -eq "Koressa") { $_ } }

# Question 6
$myData | ForEach-Object {if ($_."host ip address" -eq "10.10.16.74") { $_ } }


