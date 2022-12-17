# Prospex

## Introduction

<img align="left" src="https://github.com/anke-hao/tech-challenge/blob/main/documentation/big%20phil.png" style="height: 300px; width:200px;"/>
Prospex is a gamified user experience aimed towards introducing potential tech career paths and resources to college students. Players can navigate as a character around a 2D platform game environment to answer questions about their interests and personality. Once all questions are answered, they will receive a profile of their suggested career interests and a brochure packed with resources about suggested readings, career preparation, and additional learning resources specific to that field.

## How to play
### Basic commands
- Navigate with WASD to the sparkles on the screen, and use the mouse/keypad cursor to answer the questions that pop up once you reach a sparkle.
- Click on a sparkle to teleport to it for faster exploration.
### What to expect
- Each time the player answers a question, the sparkle will change into an exclamation mark to indicate that it has been answered. After answering all the questions, a portal will pop up in the bottom left corner. 
- Navigating to the portal will teleport the player to a room with a “computer” with their results. Walking up to the computer will reveal the career field that the player has the most affinity for, as well as a link to career resources they can look into related to that field.
- The player can change their answers anytime before they enter the portal, and their results will update accordingly.

## Motivation
### Purpose and backstory
- Our team has experienced being interested in fields that are not that talked about in the UChicago Computer Science community, and as such, we ourselves had trouble trying to figure out where to start. We realized that this problem is not due to the lack of interest in certain fields, but simply because of the lack of exposure and resources available to us. 
- We identified that the community is hyper-focusing on software development and engineering. As a consequence, other potentially interesting fields, such as product management or UI/UX, are left on the wayside with limited resources available.
- Interestingly, when our team lead introduces other alternative roles in technology to mentees, there would often be a lot of interest in these non-software roles. This indicates that the problem fundamentally lies in the lack of knowledge of the existence of these areas to begin with, and in addition, the lack of resources and support.
- As such, our team believes that something should be done to introduce the variety of fields in technology to the students, and this is how we came up with Prospex. We start with some paths in tech beyond software engineering, including product management, UI/UX, computer science academia and research, quantitative finance, and tech startups. We also provide brochures of resources for people potentially interested in these fields. Moving forward, we would like to expand further to more paths in technology.

### Why a game?
So, why a game over a standard questionnaire? With this platform, we wanted to introduce a sense of embodied presence into taking career surveys, which can feel quite abstract and impersonal when you are just scrolling by question after question. In contrast, games have the ability to be visually evocative. They can call forth the player's associations with a certain setting, or they can generate a story around an unfamiliar space. So for instance, we can imply to the player that PMs will spend significant time engaging with people through the visual of a meeting room. In order to achieve this effect, we personally designed all of the assets in this game and tailored them to evoke the atmosphere of certain careers. By navigating through the questions in a tangible environment with a character you can begin to identify with, we hope that this experience is visually and interactively engaging, making it more memorable, more shareable, and more personal.
<p align="center">
  <img src="https://github.com/anke-hao/tech-challenge/blob/main/documentation/pm%20rm.gif"/>
</p>

## Tech stack
### The development of the game
The game was built in Unity2D, with the use of C# scripts to handle the following:
- managing the playable sprite’s movements (modeled after our college mascot).
- handling functionality related to the questions posed to the player, including usability features like the ability to teleport to each question and changing the appearance of the sparkle once the player answered the question.
- using the K-Nearest-Neighbors algorithm to calculate the best career path matches for the player based on our original dataset.
- miscellaneous handling of object animations and switching from the main scene to the final scene.
### The K-Nearest-Neighbors algorithm
In order to provide the player with their results, we find the [Manhattan distance](https://xlinux.nist.gov/dads/HTML/manhattanDistance.html) between the user’s inputs and each of the training samples we received from the survey. Then, we classify the user as whichever career choice was most common amongst the 11 closest neighbors from the training data. We decided upon k = 11 and the Manhattan distance for our parameters using cross validation with our training data. 

## Data collection
We created a survey that tested various aspects of the player’s academic interests and personality by taking inspiration from established career and personality questionnaires, including Myers Briggs, Holland Code (RIASEC), and sokanu’s CareerExplorer. We also interviewed friends and family to refine our questions and gain a better understanding of career fields and potential resources we could offer. We then surveyed over 80 career professionals in five career fields with our questionnaire in order to collect data points to build the algorithm. Moving forward, we would like to be constantly growing and getting more data, and continually refining our algorithm to make it as accurate as possible.

## Visual assets
- All of our visual assets, including the playable character and all the environmental assets, were personally designed in [Aseprite](https://www.aseprite.org/). In addition, some of the visual assets were animated to enhance the game experience.
- The playable character was designed as a phoenix because it was inspired by our university’s mascot, Phil the Phoenix. It was also chosen to represent all members of the university community.

## Team
- [Anke Hao](http://anke-hao.github.io/)
  - Team Lead, Developer
- Emily Cheng
  - Game Designer, Pixel Artist
- Max Chou
  - Developer
- [Catherine Charles](https://github.com/cathcharles108)
  - Content Researcher

## Navigating the Directory
- Our scripts and assets for the game are located in the `code` folder, and our presentation for our university’s Tech Challenge is located in the `documentation` folder.
