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
//  Noun:       tree
//  action 1:   the tree grows
tree.grow();
//  action 2:   the tree moves
tree.move();
//  action 3:   the tree creaks
tree.creak();
//  2)
//  Noun:       dog
//  action 1:   the dog digs
dog.dig();
//  action 2:   the dog barks
dog.bark();
//  action 3:   the dog rollsOver
dog.rollOver();
//  3)
//  Noun:       phone
//  action 1:   the phone rings
phone.ring();
//  action 2:   the phone vibrates
phone.vibrate();
//  action 3:   the phone notifiesUser
phone.notifyUser();
//  4)
//  Noun:       water
//  action 1:   the water flows out 
water.flowOut();
//  action 2:   the water flows in
water.flowIn();
//  action 3:   the water trickles
water.trickle();
//  5)
//  Noun:       bird
//  action 1:   the bird chirps
bird.chirp();
//  action 2:   the bird sings
bird.sing();
//  action 3:   the bird flys 
bird.fly();
//  6)
//  Noun:       dirtbike
//  action 1:   the dirtbike runs
dirtbike.run();
//  action 2:   the dirtbike engages the brakes
dirtbike.engageBrakes();
//  action 3:   the dirtbike speeds up
dirtbike.speedUp();
//  7)
//  Noun:       chop saw
//  action 1:   the chop saw spins the blade
chopSaw.spinBlade();
//  action 2:   the chop saw lowers
chopSaw.lower();
//  action 3:   the chop saw stops the blade
chopSaw.stopBlade();
//  8)
//  Noun:       german sheppard
//  action 1:   the german sheppard lays down
germanSheppard.layDown();
//  action 2:   the german sheppard chases tennis ball
germanSheppard.chaseTennisBall();
//  action 3:   the german sheppard shakes its paw 
germanSheppard.shakePaw();
//  9)
//  Noun:       bird feeder
//  action 1:   the bird feeder dispenses food
birdFeeder.dispenseFood();
//  action 2:   the bird feeder swings
birdFeeder.swings();
//  action 3:   the bird feeder deters squirrels
birdFeeder.deterSquirrel(); 
//  10)
//  Noun:       skater
//  action 1:   the skater performs an Ollie
skater.performOllie();
//  action 2:   the skater pushes forward
skater.pushForward();
//  action 3:   the skater leans
skater.lean();


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
