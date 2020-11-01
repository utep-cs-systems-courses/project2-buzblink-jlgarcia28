## Description
This game was created ideally to be played by two players at the same time. This is about a click race of 30 secs in total, meaning that the one who make the most clicks in 30 secs wins. Led flashes means the winner. 

## Step 1:
First you need to clone the project, and choose a directory where its going to be save. Once in that directory the command it used: 
```shell
> git clone https://github.com/utep-cs-systems-courses/project-buzblink-jlgarcia28
```
And accesss the file downloaded
## How to compile the game:
To compile the game its neccessary connecting the MSP430 device to the computer and use the next command 

```shell
> make  load
```

Once done this the program will run and the whole game will start:

```shell
> Player1 VS Player2 
```

Music will begin the game at 6 secs prior to the string game:

```shell
> tic 
> tic
> ticccc
```

Game starts, and the player with most clicks wins the game:

```shell
> if Player 1 wins Green Led reamins on 
>  if Player 2 wins RED Led reamins on 
```

And finally sound turn on prior to end game.
