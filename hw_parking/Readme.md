(Parking Charges)
A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an additional $0.50 per hour for each hour or part thereof in excess of three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a neat tabular format and should calculate and print the total of yesterday’s receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs should appear in the following format:

Car        Hours        Charge
1            1.5             2.00
2            4.0             2.50
3            24.0           10.00
TOTAL   29.5           14.50
_____________________________________
##All Park Garage
|Hours | Charge|
|------|------|
| 0-3 | $2.00|
|4+ | +$.5 / hour|
|19-24 | $10.00|

Each car could be an object containing the number of hours parked
Charge to park is hours parked ((<= 19) - 3 * .5) + 2.00
