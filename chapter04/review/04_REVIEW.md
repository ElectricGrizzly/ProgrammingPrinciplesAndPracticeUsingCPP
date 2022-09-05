# Chapter 3 Review
<ol>
    <li>
        <details>
            <summary><strong>What is a computation?</strong></summary>
            <p>The execution of some code, usually taking some input and producing some output based on the given input.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What do we mean by inputs and outputs to a computation? Give examples.</strong></summary>
            <p>The input is the given parameters to a computation the directly influences the given output.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are the three requirements a programmer should keep in mind when expressing computations?</strong></summary>
            <p>Computations should be expressed correctly, simply, and efficiently.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What does an expression do?</strong></summary>
            <p>An expression  computes a value from a number of operands.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is the difference between a statement and an expression, ad described in this chapter?</strong></summary>
            <p>An expression computes a value from a number of operands, while a statement controls code flow and allows for multiple expressions to be utilized.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?</strong></summary>
            <p>
                An lvalue is an expression that may appear on the left-hand side of an assignment that may be modified. These operators require an lvalue because the operation may modify the value.
                <ul>
                    <li>++a - pre-increment</li>
                    <li>--a - pre-decrement</li>
                    <li>a++ - post-increment</li>
                    <li>a-- - post-decrement</li>
                    <li>&a - address of</li>
                    <li>a%b - modulo</li>
                    <li>a=b - assignment</li>
                    <li>a*b - multiplication</li>
                    <li>a/b - division</li>
                    <li>a+b - addition</li>
                    <li>a-b - subtraction</li>
                </ul>
            </p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a constant expression?</strong></summary>
            <p>A named object which you can't give a new value.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a literal?</strong></summary>
            <p>A value presented directly in code, rather than indirectly through a variable or function call.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a symbolic constant and why do we use them?</strong></summary>
            <p>A symbolic constant is a name given to some numeric, character, string, or other type of constant.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a magic constant? Give examples.</strong></summary>
            <p>A non-obvious literal in code.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are some operators that we can use for integers and floating-point values?</strong></summary>
            <p>
                <ul>
                    <li>a+b</li>
                    <li>a-b</li>
                    <li>a&lt;b></li>
                    <li>a&lt;=b</li>
                    <li>a&gt;b</li>
                    <li>a&gt;=b</li>
                    <li>a==b</li>
                    <li>a!=b</li>
                    <li>a&&b</li>
                    <li>a||b</li>
                </ul>
            </p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What operators can be used on integers but not on floating-point values?</strong></summary>
            <p>The modulo (%) operator.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are some operators that can be used for strings?</strong></summary>
            <p>
                <ul>
                    <li>a+b</li>
                    <li>a&lt;b></li>
                    <li>a&lt;=b</li>
                    <li>a&gt;b</li>
                    <li>a&gt;=b</li>
                    <li>a==b</li>
                    <li>a!=b</li>
                    <li>a&&b</li>
                    <li>a||b</li>
                </ul>
            </p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>When would a programmer prefer a swtich-statment to an if-statement</strong></summary>
            <p>When there are a large number of constants to compare against to control code flow then a switch-statement provides an more optimized solution than an if-else ladder.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are some common problems with switch-statements?</strong></summary>
            <p>
                <ul>
                    <li>The values for case labels must be constants expressions.</li>
                    <li>The value of which we switch must be of an integer, char, or enumeration type</li>
                    <li>You cannot use the same value for two case labels.</li>
                    <li>You can use several case labels for a single case</li>
                    <li>Every case must end in a break and the compiler will not remind you if you do not.</li>
                </ul>
            </p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is the function of each part of the header line in a for-loop, and in what sequence are they executed.</strong></summary>
            <p>Each part of the header line in a for-loop is separated by a semi-colon. The first part is the first executed, it initializes the indexing variable for the loop to the starting value. The next statement is the condition on which the for-loop will break, if this condition is false. The final statement is how the indexing variable changes withy each iteration of the loop. The first statement is executed once, while the second and final statments are executed each iteration of the loop.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>When should the for-loop be used  and when should the while-loop be used?</strong></summary>
            <p>Essentially, whenever a loop can be defined with a simple initializer, condition, and increment operation.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>How do you print the numberic value of a char?</strong></summary>
            <p>By converting the character value to an integer.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>Describe what the line char foo(int x) means in a function definition.</strong></summary>
            <p>A function which returns a character type, named food, that takes an integer as a parameter that is named x.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>When should you define a separate function for part of a program? List reasons.</strong></summary>
            <p>
                When it:
                <ul>
                    <li>Makes computation logically separate.</li>
                    <li>Makes the program text clearer.</li>
                    <li>Makes it possible to use the function in more than one place in a program.</li>
                    <li>Eases testing.</li>
                </ul>
            </p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What can you do to an int that you cannot do to a string?</strong></summary>
            <p>Subtract a string from a string, divide by a string, mutliple by a string, etc.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What can you do to a string that you cannot do to an int?</strong></summary>
            <p>Can index a character of the string, can find a character in a string, can remove a character from a string, etc.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What is the index of the third element of a vector?</strong></summary>
            <p>The third element of a vector has an index of 2.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>How do you write a for-loop that prints every element of a vector?</strong></summary>
            <p>
                <pre><code>
                    vector<int> numbers{ 1, 2, 3, 4, 5 };
                    for (int number: numbers) {
                        cout << number << endl; 
                    }
                </code></pre>
            </p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What does vector&lt;char> alphabet(26); do?</strong></summary>
            <p>Initializes a vector of characters named alphabet to a size of 26 elements.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>Describe what push_back() does to a vector.</strong></summary>
            <p>push_back() add a new element to the end of a vector, increasing its size by one.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What did vector's member functions begin(), end(), and size() do?</strong></summary>
            <p>begin() creates an iterator that points to the first element of a vector. end() creates an iterator that points to the past-the-end element of the vector. size() returns the length/size of the vector.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>What makes vector so popular/useful?</strong></summary>
            <p>The vector is popular/useful because it can be dynamically sized, the container can be modified, and its size does not need to be known before runtime.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>How do you sort the elements of a vector?</strong></summary>
            <p>Using the standard library sort() algorithm.</p>
        </details>
    </li>
</ol>