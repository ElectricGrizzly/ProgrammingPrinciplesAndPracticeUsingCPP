# Chapter 3 Review
<ol>
    <li>
        <details>
            <summary><strong>What is meant by the term prompt?</strong></summary>
            <p>A message that prompts a user to take a particular action.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>Which operator do you use to read into a variable?</strong>cin, an abbreviation for character input stream.</summary>
            <p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>If you want the user to input an integer value into your program for a variable named number, what are two lines of code you could write to ask the user to do it and to input the value into your program?</strong></summary>
            <pre><code>
                std::cout << "Please enter an integer value (followed by 'enter'):\n";
                std::cin >> number;
            </code></pre>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is \n called and what purpose does it serve?</strong></summary>
            <p>\n is a newline character and it signifies the start of a new for a string.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What terminates input into a string?</strong></summary>
            <p>Whitespace such as space ('\s'), newline ('\n'), and tab ('\t') characters.
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What terminates input into an integer?</strong></summary>
            <p>Any non-numeric input.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>How could you write the following as a single line of code?:
                <pre><code>
                    cout << "Hello, ";
                    cout << first_name;
                    cout << "!\n";
                </code></pre>
            as a single line of code?</strong></summary>
            <pre><code>
            cout << "Hello, " << first_name << "!\n";
            </code></pre>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is an object?</strong></summary>
            <p>An object is a region of memory with a type that specifies what kind of information (data) can be placed into it.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a literal?</strong></summary>
            <p>A notation that directly specifies a value, such as 12 specifying the integer value "twelve"</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What kinds of literals are there?</strong></summary>
            <p>There are integer, floating-point (further specified as double, float, and long double literals), boolean, character, string, and pointer.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a variable?</strong></summary>
            <p>A named object of a given type. Contains a value unless uninitialized.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are typical sizes for a char, an int, and a double?</strong></summary>
            <p>char is 1 byte (8 bits), int is 4 bytes (32 bits), and double is 8 bytes (64 bits).</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What measures do we use for the size of small entities in memory, such as ints and strings?</strong></summary>
            <p>We measure these entities in bytes, in which each byte containes 8 bits. An int is made up for 4 bytes (32 bits), while a string store 1 byte (8 bits) per character of the string.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is the difference between = and ==?</strong></summary>
            <p>= is the assignment operator, it assigns a value to a variable (a named object of a specified type). == is the equality operator, it compares values for equality and returns a boolean value.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is a definition?</strong></summary>
            <p>A declaration that specifies the entity to which the declared name refers.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is an initialization and how does it differ from an assignment?</strong></summary>
            <p>Initialization is giving an object an initial value. This is different from assignment in that there is no previous value involved (gives a variable a new value).</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is string concatenation and how do you make it work in C++?</strong></summary>
            <p>Strign concatenation is creating a resultant string from two other strings, where the string on the left side of the + operator will be first, and the string on the right side of the + operator will be second. Such as s1=Hey, s2=Hellow, s1+s2=HeyHello. Concatenation is invoked with the + operator.
        </details>
    </li>
    <li>
        <details>
            <summary><strong>Which of the following are legal names in C++? If a name is not legal, why not?
                <pre><code>
                This_little_pig    This_1_is_fine    2_For_1_special
                latest thing       the_$12_method    _this_is_ok
                MiniMineMine       number            correct?
                </code></pre>
            </strong></summary>
            <pre><code>
                This_little_pig    ==    legal
                This_1_is_fine     ==    legal
                2_For_1_special    ==    illegal, must start with a letter
                latest thing       ==    illegal, space is not a letter, digit, or underscore
                the_$12_method     ==    illegal, $ is not a letter, digit, or underscore
                _this_is_ok        ==    illegal, allowed but should not be used
                MiniMineMine       ==    legal
                number             ==    legal
                correct?           ==    illegal, ? is not a letter, digit, or underscore
            </code></pre>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>Give five examples of legal names that you shouldn't use because they are likely to cause confusion.</strong></summary>
            <ol>
                <li>ABV</li>
                <li>the_final_price_after_taxes_added</li>
                <li>seven</li>
                <li>unknown_TLETP</li>
                <li>blah</li>
            </ol>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What are some good rules for choosing names?</strong></summary>
            <p>Separate words with an underscore, do not use camel case or pascal case, don't use all capital letters as they signifiy a macro. Use an initial capital letter for types we define.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>What is type safety and why is it important?</strong></summary>
            <p>Type safety is the property that an object can be accessed on according to its definition. Type safety is important because it reduces the chance of unexpected results, as everything type safe is allowed within the context of the compiler.</p>
        </details>
    </li>
    <li>
        <details>
            <summary><strong>Why can conversion from double to int be a bad thing?</strong></summary>
            <p>Because a double is stored with 8 bytes (64 bits), conversion to an integer of 4 bytes (32 bits) can result in a loss of data. Converting the value back to a double after its conversion to an int may not produce the same initial input and overall produce unexpected results, as the value s assigned may differ from the value stored.</p>
        </details>
    </li>
        <li>
        <details>
            <summary><strong>Define a rule to help decide if a conversion from one type to another is safe or unsafe.</strong></summary>
            <p>If the conversion is narrowing, meaning that the type of object being converted has a larger size than that of the type it is being converted to, it is unsafe. Otherwise, if the type of the object to be converted is the same size or smaller than the type it is being converted to, the conversion is safe.</p>
        </details>
    </li>
</ol>