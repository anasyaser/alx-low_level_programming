<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
  <li><a href="/rltoken/XLLmLISlteUIxrLzNdm3_Q" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
  <li><a href="/rltoken/JEqzgE_pPe48rvbspGL-2g" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/wZXKCWgm5hGCD0ZKtZAOrQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
  <li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
  <li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
  <li>What are the differences between static and shared libraries</li>
  <li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
  <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
  <li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
  <li>You are not allowed to publish any content of this project.</li>
  <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>C</h3>

<ul>
  <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
  <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
  <li>All your files should end with a new line</li>
  <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
  <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
  <li>You are not allowed to use global variables</li>
  <li>No more than 5 functions per file</li>
  <li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
  <li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
  <li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
  <li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
  <li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
  <li>Don&rsquo;t forget to push your header file</li>
</ul>

<h3>Bash</h3>

<ul>
  <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
  <li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
  <li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
  <li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
  <li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
  <li>All your files must be executable</li>
</ul>

<h3 class="panel-title">
  0. A library is not a luxury but one of the necessities of life
</h3>

<p>Create the dynamic library libdynamic.so containing all the functions listed below:</p>

<pre><code>int _putchar(char c);
    int _islower(int c);
    int _isalpha(int c);
    int _abs(int n);
    int _isupper(int c);
    int _isdigit(int c);
    int _strlen(char *s);
    void _puts(char *s);
    char *_strcpy(char *dest, char *src);
    int _atoi(char *s);
    char *_strcat(char *dest, char *src);
    char *_strncat(char *dest, char *src, int n);
    char *_strncpy(char *dest, char *src, int n);
    int _strcmp(char *s1, char *s2);
    char *_memset(char *s, char b, unsigned int n);
    char *_memcpy(char *dest, char *src, unsigned int n);
    char *_strchr(char *s, char c);
    unsigned int _strspn(char *s, char *accept);
    char *_strpbrk(char *s, char *accept);
    char *_strstr(char *haystack, char *needle);
</code></pre>

<p>If you haven&rsquo;t coded all of the above functions create empty ones, with the right prototype.<br>
  Don&rsquo;t forget to push your <code>main.h</code> file in your repository, containing at least all the prototypes of the above functions.</p>

<pre><code>julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
    -rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so
    julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so 
    0000000000000a90 T _abs
    0000000000000aa9 T _atoi
    0000000000202048 B __bss_start
    w __cxa_finalize
    0000000000202048 D _edata
    0000000000202050 B _end
    00000000000011f8 T _fini
    w __gmon_start__
    0000000000000900 T _init
    0000000000000bd7 T _isalpha
    0000000000000c04 T _isdigit
    0000000000000c25 T _islower
    0000000000000c46 T _isupper
    w _ITM_deregisterTMCloneTable
    w _ITM_registerTMCloneTable
    w _Jv_RegisterClasses
    0000000000000c67 T _memcpy
    0000000000000caa T _memset
    0000000000000ce9 T _putchar
    0000000000000d0e T _puts
    0000000000000d4a T _strcat
    0000000000000dcf T _strchr
    0000000000000e21 T _strcmp
    0000000000000e89 T _strcpy
    0000000000000eeb T _strlen
    0000000000000f15 T _strncat
    0000000000000fa5 T _strncpy
    0000000000001029 T _strpbrk
    000000000000109d T _strspn
    0000000000001176 T _strstr
    U write
    julien@ubuntu:~/0x18. Dynamic libraries$ cat 0-main.c
    #include &quot;main.h&quot;
    #include &lt;stdio.h&gt;

    /**
    * main - check the code
    *
    * Return: Always EXIT_SUCCESS.
    */
    int main(void)
    {
    printf(&quot;%d\n&quot;, _strlen(&quot;My Dyn Lib&quot;));
    return (EXIT_SUCCESS);
    }
    julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
    julien@ubuntu:~/0x18. Dynamic libraries$ ldd len 
    linux-vdso.so.1 =&gt;  (0x00007fff5d1d2000)
    libdynamic.so =&gt; not found
    libc.so.6 =&gt; /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
    julien@ubuntu:~/0x18. Dynamic libraries$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
    julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
    linux-vdso.so.1 =&gt;  (0x00007fff41ae9000)
    libdynamic.so =&gt; ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 =&gt; /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
    julien@ubuntu:~/0x18. Dynamic libraries$ ./len 
    10
    julien@ubuntu:~/0x18. Dynamic libraries$ 
</code></pre>

<p><strong>Repo:</strong></p>
<ul>
  <li>GitHub repository: <code>alx-low_level_programming</code></li>
  <li>Directory: <code>0x18-dynamic_libraries</code></li>
  <li>File: <code>libdynamic.so, main.h</code></li>
</ul>

<h3 class="panel-title">
  1. Without libraries what have we? We have no past and no future
</h3>


<p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.</p>

<pre><code>julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
    abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
    atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
    julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
    julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
    0000000000000a90 T _abs
    0000000000000aa9 T _atoi
    0000000000202048 B __bss_start
    0000000000202048 D _edata
    0000000000202050 B _end
    00000000000011f8 T _fini
    0000000000000900 T _init
    0000000000000bd7 T _isalpha
    0000000000000c04 T _isdigit
    0000000000000c25 T _islower
    0000000000000c46 T _isupper
    0000000000000c67 T _memcpy
    0000000000000caa T _memset
    0000000000000ce9 T _putchar
    0000000000000d0e T _puts
    0000000000000d4a T _strcat
    0000000000000dcf T _strchr
    0000000000000e21 T _strcmp
    0000000000000e89 T _strcpy
    0000000000000eeb T _strlen
    0000000000000f15 T _strncat
    0000000000000fa5 T _strncpy
    0000000000001029 T _strpbrk
    000000000000109d T _strspn
    0000000000001176 T _strstr
    julien@ubuntu:~/0x18. Dynamic libraries$ 
</code></pre>


<p><strong>Repo:</strong></p>
<ul>
  <li>GitHub repository: <code>alx-low_level_programming</code></li>
  <li>Directory: <code>0x18-dynamic_libraries</code></li>
  <li>File: <code>1-create_dynamic_lib.sh</code></li>
</ul>

<h3 class="panel-title">
  2. Let&#39;s call C functions from Python
</h3>


<p>I know, you&rsquo;re missing C when coding in Python. So let&rsquo;s fix that!</p>

<!-- [!brokenimg](https://images4.alphacoders.com/118/thumb-1920-11826.jpg) -->

<p>Create a dynamic library that contains C functions that can be called from Python. See example for more detail.</p>

<pre><code>julien@ubuntu:~/0x18$ cat 100-tests.py
    import random
    import ctypes

    cops = ctypes.CDLL(&#39;./100-operations.so&#39;)
    a = random.randint(-111, 111)
    b = random.randint(-111, 111)
    print(&quot;{} + {} = {}&quot;.format(a, b, cops.add(a, b)))
    print(&quot;{} - {} = {}&quot;.format(a, b, cops.sub(a, b)))
    print(&quot;{} x {} = {}&quot;.format(a, b, cops.mul(a, b)))
    print(&quot;{} / {} = {}&quot;.format(a, b, cops.div(a, b)))
    print(&quot;{} % {} = {}&quot;.format(a, b, cops.mod(a, b)))
    julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
    66 + -76 = -10
    66 - -76 = 142
    66 x -76 = -5016
    66 / -76 = 0
    66 % -76 = 66
    julien@ubuntu:~/0x18$ python3 100-tests.py 
    -34 + -57 = -91
    -34 - -57 = 23
    -34 x -57 = 1938
    -34 / -57 = 0
    -34 % -57 = -34
    julien@ubuntu:~/0x18$ python3 100-tests.py 
    -5 + -72 = -77
    -5 - -72 = 67
    -5 x -72 = 360
    -5 / -72 = 0
    -5 % -72 = -5
    julien@ubuntu:~/0x18$ python3 100-tests.py 
    39 + -62 = -23
    39 - -62 = 101
    39 x -62 = -2418
    39 / -62 = 0
    39 % -62 = 39
    julien@ubuntu:~/0x18$ 
</code></pre>


<p><strong>Repo:</strong></p>
<ul>
  <li>GitHub repository: <code>alx-low_level_programming</code></li>
  <li>Directory: <code>0x18-dynamic_libraries</code></li>
  <li>File: <code>100-operations.so</code></li>
</ul>

<h3 class="panel-title">
  3. Code injection: Win the Giga Millions!
</h3>


<p><img src="http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg" /></p>

<p>I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?</p>

<ul>
  <li>Our mole got us a copy of the program, you can download it <a href="https://github.com/alx-tools/0x18.c" title="here" target="_blank">here</a>. Our mole also gave us a piece of documentation:</li>
</ul>

<pre><code>/* Giga Millions program                                                                                    
    * Players may pick six numbers from two separate pools of numbers:                                                
    * - five different numbers from 1 to 75 and                                                                       
    * - one number from 1 to 15                                                                                       
    * You win the jackpot by matching all six winning numbers in a drawing.                                           
    * Your chances to win the jackpot is 1 in 258,890,850                                                             
    *                                                                                                                 
    * usage: ./gm n1 n2 n3 n4 n5 bonus
</code></pre>

<ul>
  <li>You can&rsquo;t modify the program <code>gm</code> itself as Master Sysadmin Sylvain (MSS) always checks its <a href="/rltoken/uFp7pQzfyzDA7z2cVOKIaQ" title="MD5" target="_blank">MD5</a> before running it</li>
  <li>The system is an <code>Linux Ubuntu 16.04</code></li>
  <li>The server has internet access</li>
  <li>Our mole will be only able to run two commands from a shell script, without being detected by MSS</li>
  <li>Your shell script should be maximum 3 lines long. You are not allowed to use <code>;</code>, <code>&amp;&amp;</code>, <code>||</code>, <code>|</code>, &#96; (it would be detected by MSS), and have a maximum of two commands</li>
  <li>Our mole has only the authorization to upload one file on the server. It will be your shell script</li>
  <li>Our mole will run your shell script this way: <code>mss@gm_server$ . ./101-make_me_win.sh</code></li>
  <li>Our mole will run your shell script from the same directory containing the program <code>gm</code>, exactly 98 seconds before MSS runs <code>gm</code> with my numbers: <code>./gm 9 8 10 24 75 9</code></li>
  <li>MSS will use the same terminal and session than our mole</li>
  <li>Before running the <code>gm</code> program, MSS always check the content of the directory</li>
  <li>MSS always exit after running the program <code>gm</code></li>
  <li>TL;DR; This is what is going to happen</li>
</ul>

<pre><code>mss@gm_server$ . ./101-make_me_win.sh
    mss@gm_server$ rm 101-make_me_win.sh
    mss@gm_server$ ls -la
    . .. gm
    mss@gm_server$ history -c
    mss@gm_server$ clear
    mss@gm_server$ ls -la
    . .. gm
    mss@gm_server$ md5sum gm
    d52e6c18e0723f5b025a75dea19ef365  gm
    mss@gm_server$ ./gm 9 8 10 24 75 9
    --&gt; Please make me win!
    mss@gm_server$ exit
</code></pre>

<p>Tip: <code>LD_PRELOAD</code></p>


<p><strong>Repo:</strong></p>
<ul>
  <li>GitHub repository: <code>alx-low_level_programming</code></li>
  <li>Directory: <code>0x18-dynamic_libraries</code></li>
  <li>File: <code>101-make_me_win.sh</code></li>
</ul>
