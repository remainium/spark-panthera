# spark-panthera
A 30 cm tall and 45 cm long robot quadruped powered by 60 kg · cm torque motors. Spark has 12000mAH of battery life to last it and its 12 motors and electronics for 30-60 minutes
. Spark weighs around 4 kilograms and should be around the capabilities of the dingo robot quadruped.

# assembly
Spark is split up into the chassis and the leg assembly

# chassis 
To assemble the chassis, print out each part in the assembly and part studio one
The blue connection joint must be printed out 4 times, and the smaller joint twice. The chassis is split into two parts; each must be printed twice, along with a hatch. The smaller section must be printed singularly, while the two larger sections must be printed twice
insert the large squares into the l shaped parts in the appropriate holes, after that insert one of the mid section parts into the squares, be carefdul as to position theservo cutouts towards the l shaped part, you can also glue the large cube connector into the compartment on the L, after this slide a smaller cube into the mid section, and mount the scond mid section otno that, be careful as to how it is oriented as the servo cutouts must face the l shaped parts on each side, after this slide on the next l shaped section with square connectors, and glue nuts into each of the nut cutouts, (m3 only), and bolt all the pieces on, after this press fit four bearings into the four cirecilar cutouts on the outside of the chassis on eaither end 
then, after confirming all parts fit, remove the L-shaped parts temporarily; they are designed to be removable for service
then insert four servos into the cutouts of the mid section of the chassis, insert from the outside in, and bolt all servos in place, be sure to glue the nuts on as this is the best method to fasten them and make sure that removal is easy keep in mind that the exposed gears of the servo must be dwonward, after this, take the four cup like holders and place 2 servos in each, make sure to look at the assembly to know the exact mounting method, bolt this part to the servo, and then attach the holster to the ball bearing on each end of the l shapes. Also, bolt the servos to the holster; the chassis assembly is now complete. You must also use the small rectangular notches to bolt the mid section of the chassis together; insert the notches into each cutout and bolt them together; be sure to glue the nuts into the chassis.
You can also use Loctite if available to help the bolts stay in place (blue thread locker).<img width="1366" height="768" alt="Screenshot (1182)" src="https://github.com/user-attachments/assets/1b987f2c-aa88-49ee-9401-116151fb2fff" />
<img width="1366" height="768" alt="Screenshot (1184)" src="https://github.com/user-attachments/assets/95720940-752c-4254-aaf2-d70c830be815" />
<img width="1366" height="768" alt="Screenshot (1185)" src="https://github.com/user-attachments/assets/22495f5d-8d1e-43ba-9fd1-0ff3e71d55dc" />
<img width="1366" height="768" alt="Screenshot (1186)" src="https://github.com/user-attachments/assets/43b1162c-e9b3-4fb1-87d9-65ebb5ded974" />
<img width="1366" height="768" alt="Screenshot (1187)" src="https://github.com/user-attachments/assets/aae663a6-6b98-4617-b54c-6a78c140eb57" />
<img width="1366" height="768" alt="Screenshot (1188)" src="https://github.com/user-attachments/assets/ace7b836-2b54-4e99-ab0f-690bf5e6d49a" />
<img width="1366" height="768" alt="Screenshot (1190)" src="https://github.com/user-attachments/assets/a6134867-a10d-4c3f-838b-cef02943bdb9" />


# leg assembly

as for trhe leg assembly, you must use the servo metal gear and horn and 2 m3 bolts to attach the horn to the leg, and the metal horn to the larger plastic lever arm for the knee joint, both the servos are placed in the abduction holster for rotation whose assembly has been defiuned before, anow after attaching the leg to the servo horn, insteall two bearings at the bottom of the leg, after that place the shin between those two sections and insert the shin pin, that holds the shin to the bearings and rotates it, you also have to attach the thighs togather, print them seperatly, assembly is straight forward, implant a bearing within the larger hole in the shins top, now for the linkage system, install a bearing in the large hol in the linkage and then attach it to the horn and lever arm of the second knee servo ( please infer from the cad assembly as w2ell) after attaching the plastic horn to the bearing, you must attach the second part of the linkage to the first part, which is straight forward, this is done with glue, after this connect the pin of the linkage to the bearing in the shin, this is the complete leg assembly<img width="1366" height="768" alt="Screenshot (1181)" src="https://github.com/user-attachments/assets/defd9c12-8309-411a-82d1-113821abe8f3" />
<img width="1366" height="768" alt="Screenshot (1189)" src="https://github.com/user-attachments/assets/b8d48ce9-45ff-4d5e-8adf-f91d6eb98aff" />


# wiring
<img width="1536" height="1024" alt="wiring" src="https://github.com/user-attachments/assets/133c0132-9111-4939-b8f0-45574828e276" />
The robot is powered by a 7.4 V (2S) LiPo battery. The battery output first passes through the main power switch, which allows the entire system to be turned on or off.

From the switch, power enters the first power distribution board (PDB1). This board acts as the main power hub. It supplies power to the first group of servos, feeds the second power distribution board (PDB2) for the remaining servos, and provides battery voltage to the 5 V buck regulator.( this is mainly because I need high gauge wire and I couldn't find a power distribution board that's big enough)


The power distribution boards are responsible only for distributing the high-current servo power. Each servo receives its red (+) and black (GND) wires directly from a PDB. This keeps the high current away from the control electronics.

The 5 V buck regulator converts the battery voltage to a stable 5 V supply. This regulated voltage powers the ESP32 and the servo driver.

The ESP32 runs the robot's control software and generates movement commands. These commands are sent to the servo driver, which outputs the PWM control signals for each servo.

Only the yellow signal wire from each servo connects to the servo driver. The servo driver controls the servos through these signal wires, while the servos receive their operating power directly from the power distribution boards.

All grounds are connected together to create a common ground. This includes the battery negative terminal, both power distribution boards, the buck regulator, the ESP32, the servo driver, and every servo. Sharing a common ground ensures that all control signals have the same voltage reference and allows the servos to respond correctly to the PWM commands.

# code
The code provided is a simple inverse kinematic solver. Enter the x, y, and z che end effect, along with the values of the leg lengths ( already put in) to get the angle for the servos to rotate. (this code only shows you the angles, it doesn't have offsets or actual command for arduino.ide, it's purely IK in C
use the texts in the code to help guide yourself as to what to put where)


| Name of Component | Cost of Component | Amount | Source |
| :--- | :--- | :--- | :--- |
| DS5160 high torque servo | $20.75 | 3 | [robu.in](https://robu.in) |
| 5010 360kv bldc | $18.67 | 1 | [robu.in]( https://www.google.com/aclk?sa=L&ai=DChsSEwiX7sfNiuyVAxWRwzwCHd68GxwYACICCAEQBhoCc2Y&co=1&ase=2&gclid=CjwKCAjwmozTBhAeEiwAkEGZzhNkuGv6U-7RcLXoTgDmkIY7M1sDAk6ColVKjd22z0USijEBi2fOThoCoY8QAvD_BwE&cid=CAAS9QHkaEnMHUENYZ_uDdq2Dhyj2C4-Ofyoz1gm7yGuvDTCDI8yMaKEvpOwmXQAmrewJEreOl6vblK_KbM4vKd9mE9LEdIxT-C73Fiis56Sic48A-Y4b4qLkmoaXWHCjme9HXiTuJJPG5Ti03z7kprzy_Iu814ps9UzSJowvoz05DuzBMNJX5xYrtZnn6Wni0ud6Se5IyWqQk8pOuW56G48NPwQ-io2AAOXc5u1UdExyqSe6zHdQgl90JiIqYMyQvniYsnYFc0Zxn6TD5AQgmgKDe9rPjVJoRQwbOl_s4z8usFwdU8X62pc8J26EOMBn5xuBP5tDF7dKw&cce=2&category=acrcp_v1_32&sig=AOD64_0-W-Cb4IQBT5QncbvjuvaEMhUJnQ&ctype=5&q=&nis=4&ved=2ahUKEwihucPNiuyVAxXWWHADHcAFC2cQ5bgDKAB6BAgHEAs&adurl=) |
| odesc foc controller | $30.23 | 3 | [made-in-china.com](https://made-in-china.com) |
| 6000mAh 7.4v battery | $38.38 | 1 | [robu.in](https://robu.in) |
