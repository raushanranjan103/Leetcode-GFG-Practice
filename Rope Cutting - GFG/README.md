# Rope Cutting
##  Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">You are given <strong>N</strong> ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Display the number of ropes left after every cut operation until the length of each rope is zero.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {5, 1, 1, 2, 3, 5} </span>
<span style="font-size:18px"><strong>Output :</strong> 4 3 2 </span>
<span style="font-size:18px"><strong>Explanation:</strong> In the first operation, the 
minimum ropes are 1 So, we reduce length 1 
from all of them after reducing we left with 
4 ropes and we do the same for rest. </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {5, 1, 6, 9, 8, 11, 2, 
                               2, 6, 5} <strong>
Output :</strong>  9 7 5 3 2 1</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>longest_Subsequence()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n),</strong>&nbsp;and return the number of ropes that are left after each operation with space if&nbsp;no ropes left after one operation, in this case, return&nbsp;0. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>