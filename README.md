# Hackathon Scheduler – GUI

This is a Windows Forms-based GUI application developed in C++/CLI for scheduling and managing a cybersecurity hackathon tournament. The project handles everything from team management to final matchups, providing a clean visual flow from group stages to the final round.

---

## 🚀 Features

- Add and manage teams
- Automatically generate and display group stage matchups
- Simulate quarter-finals, semi-finals, and final matches
- Track tournament progression visually
- User-friendly graphical interface using multiple forms

---

## 🖼️ GUI Preview


### Main Form  
![Main Form](/assets/MainMenu.png)

### Schedule Form  
![Schedule Form](/assets/TournamentSchedule.png)

### Team Management  
![Team Management](/assets/ManageTeams.png)

### Tournament Progress 
![Tournament Progress](/assets/TournamentProgress.png)

### About Form  
![About Form](/assets/AboutForm.png)

### Help Form  
![Help Form](/assets/HelpForm.png)

### Award Form  
![Award Form](/assets/AwardScreen.png)

---

## 🛠️ Technologies Used

- C++/CLI (Common Language Runtime)
- Windows Forms (.NET Framework)
- Visual Studio 2022
- Data Structures: Trees, Queues, Arrays

---

## 📁 Project Structure

<pre>
SchedulerProject/
│
├── <b>MyForm.*</b>                # Main window
├── <b>Schedule.*</b>             # Match schedule display (Group, Quarter, Semi, Final)
├── <b>ManageTeams.*</b>          # Team input and management
├── <b>GlobalData.*</b>           # Shared data and variables across forms
├── <b>TournamentProgress.*</b>   # Tracks tournament stage progression
├── <b>MatchTree.*</b>            # Tree structure for knockout match flow
├── <b>Matchup.*</b>              # Structs and logic for team matchups
├── <b>Congratulations.*</b>      # Final display for the winning team
├── <b>HelpForm.*</b>             # Help and instructions window
├── <b>AboutForm.*</b>            # About the project or authors
├── <b>Team.*, TeamsArray.*, TeamQueue.*</b>  # Data structures for storing and managing teams
├── <b>SchedulerProject.sln</b>   # Visual Studio solution file
└── <b>SchedulerProject.vcxproj</b> and others  # Visual Studio project configuration
</pre>

---

## 🔧 How to Run

1. Open the `.sln` file in Visual Studio.
2. Build the solution (choose `Debug` or `Release` configuration).
3. Press `F5` or click **Start Debugging** to run the app.

---

## 📝 Author

**Basim Mehdi**  
_Data Structures – Semester Project_  
_Spring 2025_

---
