# Set up for the xkitchen tutorial

This library is written in NodeJS.  A familiarity with Javascript is needed to build this library. 
The library also deals with some [lexical analysis](https://en.wikipedia.org/wiki/Lexical_analysis) concepts, which may interest you. 

You'll also need a basic understanding of some terms involved in computer programming, and command line use.

To follow this tutorial, you'll also need to have [c++]([https://nodejs.org/en/](https://en.wikipedia.org/wiki/C%2B%2B)) installed on a computer.  
C++ is a low level programming language.

c++ has some [nice documentation](https://cplusplus.com/).  
<!--  style guide? -->

<br/><br/><br/><br/>


##  Initial Steps

☑️ **Step 1**: Find a text terminal app.  

The webserver will run in a text terminal.  Some text editors, like VSCode, have built in terminals.  Alternately, you can use any text terminal emulator that supports NodeJS. For Mac, I recommend Terminal.app.  For Windows, I recommend Powershell.exe.  

Open your text terminal app.

<br/><br/><br/><br/>



☑️ **Step 2**: Set up a directory.  

With your text terminal app open, create a new folder, and navigate into it. 

```shell
$ mkdir xkitchen    # Make the xkitchen folder.
$ cd xkitchen       # Go into the xkitchen folder.
```

We can check that we’re in our new directory 
by running the print working directory command. 

```shell
$ pwd           # Print Working Directory – expected output below.
/user/xkitchen/     
```

<br/><br/><br/><br/>


☑️ **Step 3**: Set up a directory for our server.

Inside our new rooftop-media.org directory, make a new directory called `/tests/`, and navigate into it.
```shell
$ mkdir tests    
$ cd tests       
$ pwd           
/user/xkitchen/tests/
```

<br/><br/><br/><br/>


☑️ **Step 4**: Create & edit basic_test.js with a code editor of choice.

With some code editor, like [emacs](https://www.gnu.org/software/emacs/) or [Visual Studio Code](https://code.visualstudio.com/), create a new file in your `/tests/` folder called `basic_test.js`.

We'll add one line to our file:

```js
console.log('Starting the basic xkitchen tests!');
```

<br/><br/><br/><br/>



☑️ **Step 5**: ☞ Test the code!

Back in our text terminal, we can test run our `basic_tests.js` file with NodeJS like so:

```shell
$ node ./basic_tests.js   #  If you’re in the right folder, this should run it!
Starting the basic xkitchen tests!
```

If you get an error on this step, make sure have [NodeJS](https://nodejs.org/en/) installed.  
Also, make sure you're in the /tests/ folder.


<br/><br/><br/><br/>



☑️ **Step 6**: Continue to version 1

You're now ready to get started on the tutorial for [version 1](https://github.com/rooftop-media/xkitchen-tutorial/blob/main/version1.0/tutorial.md).

<br/><br/><br/><br/>
<br/><br/><br/><br/>





