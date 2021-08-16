# Tam Skąd Lecą Tracery / Where The Tracers Are Coming From  
## Table of Contents:
1. [Project about](#project-about)
2. [Main menu](#main-menu)
   - [Multi player](#multi-player-menu)
     - [Create Game](#create-game)
     - [Find Game](#find-game)
   - [Settings](#settings)
     - [Screen Settings](#screen-settings)
     - [Graphic Settings](#graphic-settings)
3. [Gameplay](#gameplay)
   - [Choosing team](#choosing-team)
   - [Choosing loadout and spawnpoint](#choosing-loadout-and-spawnpoint)
   - [Movement](#movement)
   - [Shooting](#shooting)
     - [Crosshair behaviour](#crosshair-behaviour)
     - [Bullets behaviour](#bullets-behaviour)
   - [Killing](#killing)
   - [Dying](#dying)
   - [Ending game](#ending-game)
 4.[Epilogue])(#epilogue)
## Project about:

Simple multiplayer FPS game made in UE4 (bp/c++) that can be played over lan or internet(with hamachi like tools).
Players can join up one of two teams - Red or Green, choose their loadouts and score victory by killing as much enemy players as they can while trying not to die by themselves.
  
## Main menu

The Main menu is first what we can see when we launch this game, it gives us access to Multi Player menu, where we can create or join existing game, settings menu, where we can adjust graphic and screen settings, and the Quit Game option.
![image](https://user-images.githubusercontent.com/56792313/129456380-2f68c849-48f5-4942-81bc-c3aa3060d8fb.png)

## Multi Player menu
In MP menu we can choose our nickname and switch between two views - [Create Game](#create-game)(default) and [Find Game](#find-game). We can also click the back button to move back to Main menu.

### Create Game
Create Game view allows us to make a new game available for other players to join. We can choose map, server name and numbers of slots available to join, and after clicking "Host Game" button session will be started, we'll be moved [inside](#gameplay) and the game will appear to others in game browswer included within [Find Game](#find-game) view.
![image](https://user-images.githubusercontent.com/56792313/129457288-f97b5389-001e-4a2c-9758-722197ae892c.png)

### Find Game
After switching to Find Game view, the game searching will start.
![image](https://user-images.githubusercontent.com/56792313/129470724-7fab731d-686b-4454-900d-20bb5ea2d320.png)
When the game searching is over, we are able to from the found sessions, the session we want to join. We can also refresh list if we didn't found session we were looking for.
![image](https://user-images.githubusercontent.com/56792313/129470759-adf3d94b-e3fa-44d3-bf7c-2284312d5bb4.png)

## Settings
Settings menu gives us access to two another views - [Graphic Settings](#graphic-settings) and [Screen Settings](#screen-settings).

### Screen Settings
Withing this view we are able to choose game display mode and window resolution.
![image](https://user-images.githubusercontent.com/56792313/129472857-6e8c6405-6093-43f6-b182-cbcf4a2a3e26.png)
After changing and applying the settings, a confirmation window will appear in case something goes wrong.
![image](https://user-images.githubusercontent.com/56792313/129472966-83b044d0-0cff-4b62-bf38-19add52cb7f9.png)
After clicking "Apply" changes will remain saved, in other cases (clicking "Discard" or waiting for the countdown to end), 
the changes will be reverted to their previous state.

### Graphic Settings
In this view we can select one of predefined preset of settings or choose them on our own. After clicking "Apply Settings" setting will remained save.
![image](https://user-images.githubusercontent.com/56792313/129473590-68dc80f1-3a0f-4f8a-b1ff-91764bd395a7.png)

## Gameplay
![image](https://user-images.githubusercontent.com/56792313/129474951-70e2d04d-08eb-42d9-973f-46e57e481bf4.png)
Work about readme section in progress...
# Choosing team
The first thing that appears after joining the game is the team selection menu where we are able to see actual number of players and their stats in each of teams. 
![image](https://user-images.githubusercontent.com/56792313/129558107-f98a8b5f-aa5f-428d-a04c-7192ea876f0f.png)

# Choosing loadout and spawnpoint
Next thing that need to be done after selecting team we want to fight for, is selecting our loadout and spawnpoint.
![image](https://user-images.githubusercontent.com/56792313/129559108-4a29991c-1bd2-4bd2-8074-f652ba68ad79.png)

# Movement
Pressing "Respawn" button will place us in selected spawn point at map, The following buttons are used for moving around :

WSAD - move with defalut speed,

left shift + WSAD - walk,

left ctrl - crouch,

spacebar - jump,

R - Reload,

LMB - shoot, 

RMB - Aim down sights/ Stop aiming down sights,

Tab - Show stats.
![image](https://user-images.githubusercontent.com/56792313/129559535-06016da2-6167-4d60-8fac-e5ba4700b1e7.png)

# Shooting
Guns have different magazine size, rate of fire and recoil, after pressing LMB gun is going to fire automatically  till button will be released or ammunition in magazine ends.

## Crosshair behaviour
If we are firing or performing other actions while aiming from the hip, our accuracy will decrease, in this case crosshair outer circle will be sized up, to match worse accuracy.

Standing still:
![image](https://user-images.githubusercontent.com/56792313/129562928-61ac4f92-2545-4901-848f-a443f213e5d7.png)
Firing:
![image](https://user-images.githubusercontent.com/56792313/129563052-aeae89e2-275c-41d7-ab83-a539fb6f534c.png)

## Bullets behaviour
Bullets after being fired are autonomous actors. Their are able to ricochet in randomized direction with chance based on angle between bullet and hitted surface normal vector,
they are also able to penetrate certain surfaces if they have enough speed and penetration(if penetration succeed, the bullet with move further with decreased speed based on bullet penetration and surface armor). Its worth to mention here that the acctual bullet damage calculation is based on bullet damage * bullet actual speed / bullet initial speed, so for example when bullet hitting target with half of the initial speed will do half of the damage.

Bullets ricochet:

![image](https://user-images.githubusercontent.com/56792313/129606473-447aed83-28d4-4e7d-a791-027b98b7783b.png)


Bullets penetrating surface:

![image](https://user-images.githubusercontent.com/56792313/129608079-0abbecb5-8035-4e80-9ed5-8f17096f60a9.png)

## Killing

Each kill made on enemy team player will result adding score for your team, displaying your nickname with nickname player you have killed in the top right corner of every players screen and adding kill to your statistics shown by pressing Tab key. 
![image](https://user-images.githubusercontent.com/56792313/129610723-2d81c4e9-bff1-487e-9bfe-36c9d2f8d726.png)
![image](https://user-images.githubusercontent.com/56792313/129610782-7d59f95b-cce6-431f-a7f5-c19c0c08400d.png)

## Dying

After each death our deaths in statistics will grow and we will be taken by short animation to a top view of the map, where we can once again choose our loadout and spawn point.
![image](https://user-images.githubusercontent.com/56792313/129611718-77814932-23e6-400f-b4c3-37b088fcef5b.png)

## Ending game
Game ends when one team scores predifined amount of kills, after that message with winnig team name will be shown, and everyone will get kicked to lobby.
![image](https://user-images.githubusercontent.com/56792313/129613132-1c58c2ed-df55-4830-bbdd-168e7bcba8f4.png)

## Epilogue 
That's all about this project, I invite you to download and play it by yourself. I also invite you to see project that is currently being developed "BPP Project" -https://github.com/RetOpsStudio/BPP_Project - Project which is going to be an RTS and FPS hybrid.
