# Name-Reduction-Codechef

My solution to the problem:-

In an attempt to reduce the growing population, Archer was asked to come up with a plan. Archer being as intelligent as he is, came up with the following plan:

If N children, with names C1,C2,...,CN, are born to parents with names A and B, and you consider C to be the concatenation of all the names of the children, i.e. C=C1+C2+...+CN (where + is concatenation operator), then C should be a substring of one of the permutations of A+B.

You are given the task to verify whether the names parents propose to give their children are in fact permissible by Archer's plan or not.

Input
The first line contains an integer T, the number of test cases. T test cases follow. Each test case stats with a line containing two space separated strings A and B, denoting the names of the parents. The next line contains a single integer N denoting the number of children A and B are planning to have. Following this are N lines, the ith line containing Ci, the proposed name for the ith child.

Output
For each test case output a single line containing YES if the names are permissible by Archer's plan, otherwise print NO.

Constraints
1≤T≤100
1≤N≤1000
The lengths of all the strings including A, B, and all Ci will be in the range [1,40000], both inclusive. All these strings will contain only lowercase English letters.
The combined lengths of all names of children will not exceed the combined length of the names of their parents.

Sample Input 1 
3
tom marvoloriddle
2
lord
voldemort
cheap up
1
heapcup
bruce wayne
2
bat
man

Sample Output 1 
YES
YES
NO

Direct link to the problem:https://www.codechef.com/problems/NAME1
Direct link to the submission:https://www.codechef.com/viewsolution/64853600
