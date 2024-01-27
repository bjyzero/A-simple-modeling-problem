# 一个重要的取模问题
* * * 
### 问题描述
小雷拿到了一个数组，他计算了一下数组的和，感觉和也太大了，所以他准备对数组中的每个元素进行取余操作，让数组的和变得小一点。<br />

具体来说，给定一个数组a，共有q此操作，每次操作给定一个值x，对数组的每个元素对x进行一次取模，输出每次操作后，数组所有元素的和。<br />

### 输入格式
第一行有两个整数n,q,代表数组a的元素个数和操作个数。<br />

第二行输入n个元素，代表数组a。<br />

第三行输入q个元素，代表q次操作。<br />

### 输出格式
输出仅一行，包含q个由空格分开的整数，第i个整数代表第q_i次操作后的结果。<br />

### 样例输入
5 3  
1 2 3 4 5  
4 2 1  

### 样例输出
7 3 0  

### 说明
初始数组为 [1,2,3,4,5],和为15.  

进行第一次x为4的取模操作后，数组变为[1,2,3,0,1]，和为7.  

进行第二次x为2的取模操作后，数组变为[1,0,1,0,1]，和为3。  

进行第三次x为1的取模操作后，数组变为[0,0,0,0,0]，和为0。  

### 评测数据规模
对于50%的数据，1<=n<=10^3, 1<=q<=10^3, 0<=a_i<=10^5, 0<=q_i<=10^5。  

对于100%的数据，1<=n<=10^5, 1<=q<=10^5, 0<=a_i<=10^9, 0<=q_i<=10^0。  

### 运行限制
<table>
  <tr>
    <th> 语言</th>
    <th> 最大运行时间</th>
    <th> 最大运行内存</th>
  </tr>
  <tr>
    <th> C++</th>
    <th> 1s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> C</th>
    <th> 1s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> Java</th>
    <th> 2s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> Python3</th>
    <th> 3s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> PyPy3</th>
    <th> 3s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> Go</th>
    <th> 3s</th>
    <th> 256M</th>
  </tr>
  <tr>
    <th> JavaScript</th>
    <th> 3s</th>
    <th> 256M</th>
  </tr>
</table>