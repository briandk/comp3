Brian: Where to start?

Andy: Start with what you know.

[00:14:48.03] Rebecca: And this is why my code, I feel like, is not uh, concise enough, or, I don't really, I forget the word they use, but uh /{inaudible}/ it's very long because I couldn't figure out if I should do a while loop or whatever /Uh-huh/[00:15:02.27] Rebecca: But, so I was just like, I know this way should work if I get everything else right, that uh, just go through, if input's 1, if input's 2 and just do the same thing in each of 'em just /Mmmhmm/ check for, "oh, if days is 2, if days is 1" instead of, like--[00:15:18.12] Rebecca: Cuz I probably could have done, like, maybe a giant while loop, um, to try and, and if, while, inputs something, uh, then you check to see whatever i is. But, I could, I didn't--couldn't figure out how that would work, so I just did the same thing six times.[00:15:43.15] Interviewer: So, in, in each one of these it's like, looks, and I'm not sure about this, but it looks like the way you wrote it--so this {highlights line 79} is pretty much the same in all of them, right? /Yes/[00:15:52.12] Interviewer: So's this one {highlights line 81} /Yes/ this one {highlights line 83} Here's where it's different {highlights line 85}[00:15:55.04] Rebecca: Yes, because it just checks if it's a 2 instead of a 1. [00:15:57.22] Interviewer: OK. Um. /And then everything else is still the same/ Layover's still the same. OK.[00:16:01.03] Rebecca: Yeah. So that's why it's prob--it's not, uh, the neatest code or whatever, because it's the same thing six times. /OK/ So. But.

---

In the spring of 2012, I followed electrical students taking an introductory programming class at a major public research university on the East coast. My work straddled a boundary between ecological interaction and observation at a distance. For the duration of the semester, I worked with a cohort of four students, all of whom had volunteered to be part of my research study, which was purportedly about unerstanding the ways students make use of modularization in their programming code. I observed their lectures, as well as their TA-led discussion sections. I saw what they say in terms of course material, assignment directives, and stated policies from the instructor.

Most generally, I was interested in the large-scale question of how these students approached programming. Did they treat it as a design activity? Did they perhaps see it as a venue for building a complicated machine to produce the right answer? Did they treat their code as an idea to be understood---as one might with a persuasive essay or an impassioned speech---or did they treat it more as a mechanical means to an end, as one might with duct tape on a broken fixture.

I tried, in my work, not to presuppose endpoints. The diametric scale of idea vs. tool/hack, for instance, is a grossly reductionist simplification of what artifacts can mean to us, particularly artifacts we make. 

---

10/4/12

As I detail the features of Rebecca's solution, I'd like readers to keep something in mind. To build a workable theory of how students learn to program (and, by extension, to do things like design software), we have to be mindful of how aspects of history and emotion in the evolution of Rebecca's design mesh with what "cold-cognitive" accounts of programming would say about her activity. Put another way, the now-longstanding historical accounts of cognitive schemata, dating back to Soloway's Rainfall Problem and even farther back, face several challenges now.

First, the languages and programming environments under which those theories were fashioned look far different today. Syntax highlighting, code-folding, auto-completion, and multiple-line selection are just a few of the now commonly-found features of modern development environments. To take just auto-completion as an example, it's now possible to type the word `main` into a text editor--in my case Sublime Text 2--press the Tab key, and be given this:

```C
int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
```

Not only does Sublime Text automatically fill in the entire skeleton of a main method in C, but it places my cursor by default in the `/* code */` section. Sublime Text has dispatched with the boiler-plate overhead of a main method and is allowing me, with my next keystroke, to get down to the important business of deciding what my program *does*.

The same is true for a `for` loop:

```C
for (int i = 0; i < count; ++i)
{
  /* code */
}
```

Successively pressing the Tab key spirits my cursor automatically across the variables I might want to specify or modify (`count`, for instance, and `i`), before landing me in the `/*code */` section. Again, Sublime Text gracefully handles the language-specific boiler-plate. It goes further: the tab-successions draw my focus to the elements that matter, allowing me to sculpt the basic template of a for-loop to meet my needs rapidly, while enforcing both in display and in function the parts of the loop I must attend to (counter variables) and backgrounding things I shouldn't concern myself with (proper bracket marching, style, semicolon termination of for-loop arguments).

Text editors like Sublime Text aren't an outright indictment of Soloway et al.; not by a longshot. Nevertheless, I think features like tab-completion invite a re-evaluation of the core of Soloway's theory. If the syntactical drudgework of a language can be partially abstracted away, what does that mean for the "symbol template" content of a modern programmer? 

In truth, Soloway et al's theory remains, if in modified form. That is, Sublime Text handles the specifics for programmers in much the same way a contractor handles the specifics for home-owners: you ask for a shower, the contractor makes sure the fixture is structurally appropriate and up to the building code for your particular room. Letting the contractor handle the specifics of matching user desire ("I want a shower") with up-to-code fixtures ("must have a maximum throughput of 2.5 gallons per minute") changes the burden on the home-owner, but at the heart of things it's still the homeowner desiring a shower. Modern IDEs make sure the plans we wish to instantiate match the specifics (building codes) of a language, but that only underscores the point that programming is crucially about planning.

In sum, then, I point out modern software engineering features to establish how they can optimistically refine our understanding of theory while strengthening its importance: when the specifics of a for-loop are removed from the user's load, all that's left *is* the plan for desiring a for-loop, which is precisely the level at which Soloway's core idea operates.

But, I should return to my original question: "what are the unusual features of Rebecca's code for one-stop flights?"

First, what strikes me as unusual is her use of `fscanf()`. The purpose of that function is to scan through a file, essentially one line at a time. The programmer can specify patterns, for example, "in each line, look for a word, followed by a space, followed by two digits." `fscanf()` also gives the programmer the flexibility to store matched patterns. "Once you find a word followed by two digits, store that in the following data object." What's interesting isn't that Rebecca used `fscanf()` to read through files like the list of airports. No, what's interesting is that she uses it in such a way that her program never persistently stores the information. For those who have seen the film *Memento*, and even for those who haven't, the analogy is akin to the protagonist Leonard: Rebecca's program reads through files as if they were stacks of polaroids. It can't remember anything not currently visible in the picture; all it can do is start reading through the stack of polaroids again.

The only thing wrong--in anything close to an absolutist sense of the word--with Rebecca's approach is that it seemingly disregards something in the assignment. In the design brief students were given, the instructor clearly writes:

> To parse the 3 airline ﬂight database ﬁles, you will need to declare arrays that will receive all the data. For the purposes of determining array sizes, you may assume there will never be more than 100 airports in the “airports.txt” ﬁle, 500 route IDs in the “routes.txt” ﬁle, and 3000 ﬂights in the “ﬂights.txt” ﬁle

As written, it's actually unclear whether the instructor is offering a suggestion or a requirement. Moreover, that ambiguity is consequential. If the assignment was *demanding* students adopt a particular approach, then Rebecca's code demonstrably fails to to meet that requirement. If the assignment is *suggesting* a helpful way to manage the files, Rebecca seems to have ignored--or at least, not followed--the advice. If, however, the assignment is *observing* that arrays are the only means by which a program can accomplish the task, Rebecca's code proves it wrong.

10/8/12

The second feature that strikes one as unusual about Rebecca's code is how she handles processing different input cases for different days of the week. Because a user can specify any given day of the week to fly (Sunday--Saturday, inclusive), Rebecca's recognized that her code would need to be able to handle each of the seven possible cases for when a user would want to fly. Again, in principle, Rebecca's code achieves just that: she's written conditional code to execute uniquely for each of the seven possible input days of the week. What stands out is how much word-for-word duplication occurs in Rebecca's code.

Here, for instance, are two such conditional sections of Rebecca's code:

{Rebecca's code from commit 0fb6b3d434ab890b0b93b3c12d67aa82f27c0600, https://github.com/TLPLEngineeringEdResearch/Rebecca/blob/0fb6b3d434ab890b0b93b3c12d67aa82f27c0600/Project/Project2/one_stop_flight.c#L75-128}

What you're viewing are actually two adjacent blocks of code, each about 23 lines long. In each block, identical functionality is being repeated, and in each case the functionality is repeated 27 lines apart

1. The code checks whether the input matches a specified value (lines 77 and 104)
2. The code scans through the file, matching on flight number, route id, and time down to the minute (lines 79 and 106)
3. The program checks whether the values of two id variables are equal (lines 81 and 108)
4. The program ensures the user hasn't specified a day above the upper bound of possible days in the week (lines 83 and 110). This step is often thought of as a check against "junk" input; it's a system design that tries to enforce rules for input. Analogically, you can think of the way a bank only lets users choose a PIN consisting of numbers, while that same bank's ATM keypad only has buttons to input the digits 0-9. The ATM keypad is designed to restrict the kinds of acceptable input, helping designer pre-empt the kinds of errors possible if the user could type letters for a PIN number that should only ever contain digits. The physical design of the ATM keypad (and its lack of keyboard) serves as an engineering barrier against junky input. In Rebecca's code, she doesn't stop the user from specifying "27" as a day of the week, but she has designed her code against particular kinds of breakage by checking first whether the number passed in is less than 7.
5. The program determines whether a particular value in an array equals the option (day of the week) passed in by the user (lines 85 and 112)
6. The program checks whether the layover time is between 60 and 120 minutes, inclusive (lines 90 and 117)
7. If all of the above conditional checks are met, the program prints information for both legs of the one-stop flight that it's found for the user (lines 92-93 and 119-120)

The two code blocks above demonstrate just how much code is duplicated for checking user input based on days of the week. All told, the only functionality that differs from block to block occurs in points 1 and 5. Every other bit of code is character-for-character identical. Moreover, the changes from block to block are patternistic and predictable: the first line of each block just determines whether the rest of the block should run, while the ninth line of each block uses a numerical value that's always the same as the day being called. Everything else becomes repeated boilerplate.

Put another way, Rebecca could have replaced 150 lines of almost entirely repeated code with single simple function:

{functionalized version of check_on_day}

It's worthwhile to ask why Rebecca's code reflects a design that both ignores assignment directives (using scan loops instead of declaring and using an array) and violates what's putatively a core tenet of the class: using functional abstraction as a way to manage intellectual complexity. In the next section, I draw from 5 clinical interviews with Rebecca (totalling over 5 hours) to make the case that particular factors--personal, historical, and emotional--drove the design decisions that resulted in her unusual file-scanning logic and repeated-code computations.

10/9/12



