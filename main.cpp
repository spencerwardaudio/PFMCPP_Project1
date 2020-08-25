#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Fork
//  action 1: the fork holds food
fork.holds();
//  action 2: the fork pushes food forwards
fork.pushes();
//  action 3: the fork pulls food backwards
fork.pulls();

//  2)
//  Noun: Monkey
//  action 1: the monkey climbs 
monkey.climbs();
//  action 2: the monkey sits
monkey.sits();
//  action 3:the monkey falls asleep
monkey.fallsAsleep();

//  3)
//  Noun: Cat 
//  action 1: the cat meows
cat.meow();
//  action 2: the cat chases mice
cat.chases();
//  action 3: the cat annoys owner
cat.annoys();

//  4)
//  Noun: Bear
//  action 1: the bear plays with sticks
bear.playWithSticks();
//  action 2: the bear destroys garbage cans
bear.destroyGarbageCan();
//  action 3: the bear looks for fish
bear.looksForFish();

//  5)
//  Noun: Stove
//  action 1: the stove heats up
stove.getHot();
//  action 2: the stove lays still
stove.layStill();
//  action 3: the stove catches fire
stove.catchFire();

//  6)
//  Noun: Bicycle 
//  action 1: the bicycle moves forward
bicycle.moveForward();
//  action 2: the bicycle moves backward
bicycle.moveBackward();
//  action 3: the bicycle stops moving
bicycle.stopMoving();

//  7)
//  Noun: SpeakerCone
//  action 1: the speakercone reacts to current
speakercone.reactsToCurrent();
//  action 2: the speakercone lays still
speakercone.layStill();
//  action 3: the speakercone catches fire
speakercone.catchFire();

//  8)
//  Noun: Mouse 
//  action 1: the mouse looks for cheese
mouse.lookForCheese();
//  action 2: the mouse walks 
mouse.walk();
//  action 3:the mouse runs
mouse.run();

//  9)
//  Noun: Boat
//  action 1: the boat floats
boat.floating();
//  action 2: the boat moves forward
boat.moveForward();
//  action 3: the boat sinks
boat.sink();

//  10)
//  Noun: Hammer
//  action 1: the hammer hits the nail
hammer.push();
//  action 2: the hammer pulls the nail out
hammer.pull();
//  action 3: the hammer drops to the ground
hammer.drop();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
