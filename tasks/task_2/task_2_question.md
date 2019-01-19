# PROBLEM STATEMENT 
Somewhere in a parallel universe exists another earth called EARTHX, mightier than ours, with people having fingers the size of a man and the clock having symbols 24 times that of our clocks’. But IIITAX is equally famous among the engineering aspirants of EARTHX. </br>
A new batch of students has arrived IIITAX. All the newbies are very anxious to attend their first lecture of highly celebrated Bhattacharya sir. But what they got was the wrath of legendary Abdullah sir. Their coming classes were a lot cumbersome as they had to calculate everyday what they had to carry to their next class in their bags. </br> </br>
Each student has been assigned a number x, number of distinct notebooks that the student has to carry in his bag. Along with the notebooks, the students must carry pens and pencils. The count of pencils must exactly be equal to the count of divisors of x. Abdullah sir can ask any student to take out k notebooks where k is equal to the largest prime divisor of x. For every unique combination of k notebooks, a student must carry a unique pen. </br></br> 
The electronics lab assistants of IIITAX have invented a new device called TINDERX like the one in KOI MIL GAYA which is able to communicate with parallel universes. Since the newbies are very afraid of getting F grades in LALX, they have contacted you through TINDERX for help.</br></br>
## INPUT
First line contains n – number of students.</br>
Second line contains n integers, where ith integer represents the number x assigned to ith student by Abdullah sir.</br></br>
## OUTPUT
Print n lines where ith line should contain 3 integers in the order of number of notebooks, pencils and pens. The student with less notebooks be preferred during printing the details.</br>
 
Note: Since number of pens will be quite large, you should take its modulo with 109+7. </br>
</br>
## SAMPLE TESTCASE:
### Input: </br> 
3 </br>
4 2 3 </br>

### Output: </br> 
2 2 1 </br>
3 2 1 </br>
4 3 6 </br>

### Explanation: </br>
For 4. </br>
Its divisors are 1,2 & 4. Hence pencils = 3. </br>
Its largest prime divisor is 2. And there are 6 ways of choosing 2 notebooks out of. Hence pens = 6. </br>
Similarly for 2 & 3 pens & pencils can be calculated. </br>
Since 2 is less than 3 and 4, hence details of 2 is printed first followed by 3 & 4. </br>
