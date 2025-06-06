<h2><a href="https://www.geeksforgeeks.org/problems/print-nodes-having-k-leaves/0">Print Nodes having K leaves</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree and an integer value <strong>K</strong>, the task is to <strong>find all nodes</strong> data in the given binary tree<strong> having exactly K leaves </strong>in <strong>sub-tree rooted with them</strong>.</span></p>

<p><span style="font-size:18px"><strong>NOTE:&nbsp;</strong>Nodes should be printed in the order in which they appear in postorder traversal.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 1
&nbsp;     0
&nbsp;   /   \
&nbsp;  1     2<strong>
Output: </strong>-1<strong>
Explanation: </strong>There&nbsp;is no node in this
tree which has one leaf in the sub tree
below it.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>K = 2
&nbsp;         0
&nbsp;       /   \
&nbsp;      1     2
&nbsp;          /  
&nbsp;         4
&nbsp;       /   \
&nbsp;      5     9<strong>
Output: </strong>4 2<strong>
Explanation: </strong>Nodes with data 2 and 4, have
2 leaves in the subtree below it.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">Just complete the function <strong>btWithKleaves()&nbsp;</strong>and returns the answer (as a vector in&nbsp;<strong>CPP,&nbsp;</strong>as an ArrayList in&nbsp;<strong>java,&nbsp;</strong>and as list in&nbsp;<strong>python)</strong></span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>If no node is found the list returned should contain only one value -1.<br>
<strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= K &lt;= 1000<br>
1 &lt;= value of nodes &lt;= 10000</span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;