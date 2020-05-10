# DigiFab2020
Course repository for Principles of Digital Fabrication in University of Oulu in 2020

### Links
Tinkercad https://www.tinkercad.com/things/7d9ER2Wwvhb

# Introductory Report

At the beginning we had plenty of ideas, like some sort of mechanical drummer, a drone, a sweeping robot, a laser guard, a drinking bottle, a spice box, a moving computer mouse, a car with voice commands, a fire alarm and an automated curtain opener. First we narrowed our options down to three: a drone, a sweeping robot and a laser guard. These we joggled with the teachers, and decided to do sketches to sweeping robot and laser guard. 

KUVIA EKOISTA SKETSEISTÄ

After these first sketches we voted, and decided to go with the sweeping robot because it would be more original, interesting and fun to do. At this point we also gave the project it’s name: Sweeper Keeper. The basic idea is to build a sweeping machine which cleans the table. So it will need at least a motor, some sensors to know the edges and wheels that turn, so it’ll be able to wipe the whole area. We have had many different presentantions of our Sweeper Keeper, and are still in the process of deciding the exact model we’ll try and build. So, that being said, we continued with sketching and figuring out the ways we can make it work.

LISÄÄ SKETSEJÄ

Bill of Materials:

    -  1 Arduino Uno
    -  1 L293D Motor Driver Shield
    -  2 Ultrasonic Sensor
    -  2 Continuous Rotation Servos
    -  ... moottori sienelle


# Week 1
First thing to do was obviously the formation of our group. We formed a group of four, with two it-students, one physichs student and one information sciences student. So our group has nice diversity, which we believe will help us through the course.

After getting to know each other a bit, we took a moment to think of the ideas for the project. First thing was, that we all wanted to do something else than basic running alarm clock. First two ideas that came up were some sort of sweeping machine and a mechanical drummer. Because those were all we came up with, we decide to think individually a few ideas and meet next week for more planning.

 
# Week 2
Weekend was over and we had quite a bucnh of more ideas for the project: a laser guard, a drone and some sort of spice box to mention a few. We narrowed our ideas to three: sweeping machine, laser guard and drone. These we discussed with Ivan, to consult if our ideas are doable and if they meet the expectations for passing the course. After our conversation we decided to draw sketches for the sweeping machine an the laser guard. The drone would have also been quite interesting a project, but we agreed that it would probably be too challenging for us. So sketching for two it is!


# Week 3
We came up with quite diverse sketches for both our ideas: for the laser guard there were for example a lighthouse and an orwellian watchmen. For the sweeping machine four different presentantions, so everyone had nice first sketches for the project. After these sketches we took a vote and by majority (3 against 1) we chose the sweeping machine to be our project. We all thought that it would be more original, interesting and fun to do. 

At this point we also gave the project it’s name: Sweeper Keeper. The basic idea is to build a sweeping machine which cleans the table. So it will need at least a motor, some sensors to know the edges and wheels that turn, so it’ll be able to wipe the whole area. We had quite good sketches already, but decided to sketch more. And of course we also started to think about how we will actually get our project working: what sensors we’ll need, what kind of wheels and so on.



# Week 4
One of the team members happened to have access to an old LEGO robotics set. The LEGO set proved to be practical asset when designing the physical characteristics of our final project. Initial proof of concept of the plan was done with the set.
Some notes from testing the Mindstorms table sweeper:

   - Good option for moving is to use tricycle arrangement of wheels, where front two are equipped with own motors for moving and steering, and the rear wheel is free rotating.

   - More than one ultrasonic sensor will be needed to ensure that robot doesn't fall off. Or then some really clever coding...
   
   -  Cleaning cloth hanging behind the robot is no a good idea if the robot has to reverse
   
   - Trash-plow should be non-arrow shaped to push objects off the table better


# Week 5
We had more sketches - especially Janne and Patrik have came up with excellent sketches with also some ideas to making it work. One of our main problems are how to make the Sweeper Keeper to realise the area it’ll sweep. As in will we first ”walk” it from corner to corner to know it’s boundaries and then start the actual sweeping, or will we just have sensors that detects the edges and turns away from it. 

# Week 6
One of our team members, Joonas, decided that he cannot no longer participate with the course. So it'll be the three of us, V-P, Janne and Patrik who will finish the project. Currently, we are thinking should we use continuous rotating servos or normal ones for wheels. Not sure if we can use a motor driver shield. -> We decided to use continuously rotating servos in the wheels so we don't have to worry about the motor driver shield. We also finished our 3D design for the sweeper, which is also doable with a laser cutter. First Tinkercad sketches with code are also ready. The next step is to decide the servos, choose if we want to add two rear-ping sensors for edge finding, decide power sources for electronics and servos, decide if we want to still add rotary sponge with dc motor and include everything we decide to 3D model.

# Week 7
This week we had the mid-term presentation. After the feedback from the teachers, we are considering if we would change our ultrasonic sensors to infrared. They might be cheaper and perhaps smaller. We did some some research, and it first seemed that they would actually be both larger and more expensive than the original sensors. But finally Janne discovered TCRT5000 IR sensor, which was cheap and small. So this is probably the one we will go with.

Patrik did some more specific 3d design, which is seen below. This is already pretty close to final one, and next week it should be finalised. We will also need to check out the Metal Sheet Workspace for our 3d design.

There are also a lot of final decisions for next week: the sensors, power sources and servos. We still haven’t decided whether we’ll have the rotating sponge under the Sweeper Keeper. This would be a nice touch, but it might bring us some worries with the movement. We also need to finalize the coding. 

# Week 8

Round and round and round we go!

After some hardcore long distance brainstorming, we decided to keep the ultrasonic sensors for a couple of reasons. First, we couldn't test IR sensors and Tinkercad didn't have the option to test them. Secondly, there is the issue of time. So all things considered, we decided to make the Sweeper Keeper work with the original sensors. On other things, we added an on/off button sketch to Tinkercad. Patrik also made a nice cardboard prototype, which is seen below.

PHOTOS OF THE CARTBOARD PROTO

If we had the components, we could try how our prototype is working and would start improving it (for example: measuring travel distances for more accurate turning and more advanced pathfinding on the table). We decided to keep our prototype simple for now, because of a lack of equipment and time for testing (as we all know, it's always easier to fix things when there is not a lot of problems and after that, it's easier to do improvements on the working platform.) We also had one Arduino laying around with one ultrasonic sensor, so we were able to test in reality how close the sensor can be towards the table.

PHOTO OF THE SENSOR

For our bill of materials, we have mainly tried to find parts that we can order from Finland due to the current situation. This would allow us to try and build the Sweeper Keeper after Fablab opens again. If we can order cheaper parts later from abroad, we might want to change servos to equivalent, but cheaper ones. Also, we think that our current option for power supplies (9 voltage for electronics and four AA batteries for servos) are fine for prototype purposes. Oh, and we are not going to include rotating sponge, because it would affect moving too much and it's something we would really need to test with parts if we wanted to include it. The sponge stays, but it won't be a rotating one.

We are currently almost finished with the requirements for the course completion (we need to get grades on the faster schedule). We have also talked if we would like to still make this robot later when the Fablab opens again. By then we would also like to include more features, like IR sensor for wheels and maybe change edge sensors to IR ones. We might also want to make some parts with the 3D printer, so we could also try that one out (for example wheels or some little parts for cosmetics purposes, like small cover for button).

We'll end the diary with a todo-list for week 9 and finalizing the project:

Parts (sensors, servos, powersupplies etc.)
    servos: SM-S4303R Continuous Rotation Servo x 2 (or a smaller one, if we can find one)
    sensors: HC-SR04 Ultrasonic sensor
    power: 9V battery for electronics and four AA batteries for servos
    powerswitch: button
    parts: mdf
    wheels: almost decided
    sponge: 1-2 normal kitchen sponges
    cloth: small microfiber cloth
    
Lasercutter files
    almost done
    
Tinkercad updates (sensors, code)
    almost done
    
Final documentation
    almost imagined


-------------------

We decided to keep ultrasonic sensors because we couldn't test IR sensors and Tinkercad didn't have the option to test them. We added an on/off button sketch to Tinkercad. Patrik also made a nice cardboard prototype. If we had components we could try how our prototype is working and we could start improving it. (for example, measuring travel distances for more accurate turning and more advanced pathfinding on the table). We decided to keep our prototype simple for now because of a lack of equipment for testing (It's easier to fix things when there is not a lot of problems and after that, it's easier to do improvements on the working platform.) We also had one Arduino laying around with one ultrasonic sensor, so we were able to test in reality how close the sensor can be towards the table. For our bill of materials, we are mainly tried to find parts that we can order from Finland due to the current situation if we can make our robot after Fablab opens again. If we can order cheaper parts later from abroad, we might want to change servos to equivalent, but cheaper ones. Also, we think that our current option for power supplies are fine for prototype purposes. Oh and we are not going to include rotating sponge, because it would affect moving too much and it's something we would really need to test with parts if we wanted to include it)

We are currently almost finished with the requirements for the course completion (we need to get grades on the faster schedule). We have also talked if we would like to still make this robot later when the Fablab opens again. By then we would also like to include more features, like IR sensor for wheels and maybe change edge sensors to IR ones also and make some parts with the 3D printer, so we could also try that one out (for example wheels or some little parts for cosmetics purposes, like small cover for button)


todo:

    - Parts (sensors, servos, powersupplies) 
        servos: SM-S4303R Continuous Rotation Servo x 2
        sensors: HC-SR04 Ultrasonic sensor x2 (OR TCRT5000 IR sensor x2 OR ???)
        power: 9V battery for electronis and four AA-batteries for servos (OR ???)
        powerswitch: button
        parts: mdf
       
        
        not sure if we need these, but:
        sponge: 1-2 normal kitchen sponges
        cloth: small microfiber cloth
       
    - lasercutter files
    
    - tinkercad updtates (sensors, code)
    
    - final documentation
    
what we need:

    a) CAD design and Arduino code. <- We have both, just need to clean the code
    
    b) Simulation of code (in Tinkercad). <- We have, working fine with our simple code sketch
    
    c) Complete BOM (Bill of Materials) <- We need to check this out.
    
    d) Quick prototype out of cardboard, paper or/and whatever available at home <- We have, a good looking one
    
    e) Rendering / animation of the 3D design <- We have (do we really need animation? I think pictures we have are already good enough)
    
    f) include slic3r or similar for CAD designs that are intended for 3D printing <- We have lasercutter files. (Do we have wheels?)
    
    "Please note that the documentation is required as described the course introduction on the first lecture. Certainly, the delay of the course will affect the time of the documentation." <- Our documentation is up to date with weekly reports.aa
    
    
   
    
    
# Summary Report


Bill of Materials:

    - Arduino Uno       
    - SM-S3317SR Continuous Rotation Servo x 2 
    - HC-SR04 Ultrasonic sensor 
    - 9V battery (for electronics)
    - AA batteries x4 (for servos) 
    - momentary button (http://robomaa.fi/index.php?route=product/product&product_id=1763&search=Panel+mount) 
    - mdf 
    - wheels: Sponge wheel 50mm air (https://www.hobbylinna.fi/product/sponge-wheel-50mm-air/8306105A/)
    - sponge: 1-2 normal kitchen sponges 
    - cloth: small microfiber cloth
    
  ### Wrap up of the project

It is time wrap up the project! We have had quite interesting weeks with some totally unexpected issues (yes, we are referring to covid-19), some hardcore long distance brainstorming (whatsapp was on fire!), playing with Legos (some mindstorming over here), twisting and turning cartboard and so on. What is most important: we did it! Of course we did it in the reality we are living in, so what we actually did is a nice cartboard proto of a cleaning robot called Sweeper Keeper. Of course we did also all the planning, coding, 3d modeling and so on, so after the situation gets normal, we are able to actually try and build the Sweeper Keeper. But as we need the grades right now, for the course this is the resolution.

PHOTOS

For the last week we had a few things left to do. We already had the cartboard proto, laser cutter files, 3d model, almost all the parts were decided, and the coding was almost there. The latest needed some finalizing, but not much. Also we were yet to make final decisions for wheels, sponges and cloths. Also, we needed some exact measurements, so we would be able to place everything nicely in the Sweeper Keeper. As noted last week, we decided to stick with the originals sensors, because the time was running and we had no ways for testing. But the servo we did change to a smaller one, because we realized that the one we had wouldn't fit in the model. So it was either adjustement to the model, or finding a new servo. Fortunately Janne found a smaller servo, and our problem was solved.

PHOTOS

So, everything should be done: we have a cartboard proto (which actually looks quite nice!), the coding is done and simulated in Tinkercad, we have a 3d model and laser cutter files, our Bill of Materials is complete and all the documentation is done properly. Of course, should there be a Sweeper Keeper 2.0, there would probably be some adjustement to it. But as it is, we are proud to announce that our project is done!

  ### Lesson learned
  
  For 2.0
   - IR sensors for better movement
   - power switch (so you don't need to take battery off)
   - what else?? 
   
Our group didn't have too much experience with electronics or Arduino before our project, so most important lesson for us would be that we should have finished our first bill of materials as soon as we decided to go with table cleaning robot and we should have ordered components so we could have tested them and made the improvements that we wanted to do. Of course, if we were able to do some testing in Fablab things would have been a little bit different, but this was something that we knew when Fablab was shut down and we didn't discuss if we wanted to get grades on a faster schedule.
   
  What else did we learn? 


  ### Feedback to course responsibles
  
  Feedback from midterm was really helpful. Blog platform might need some improvements?
  
