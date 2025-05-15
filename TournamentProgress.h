#pragma once
#include "ManageTeams.h"
#include "Schedule.h"
#include "TournamentResultArrays.h"
#include "GlobalMatchups.cpp"
#include "Congratulations.h"

namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TournamentProgress
	/// </summary>
	public ref class TournamentProgress : public System::Windows::Forms::Form
	{
		ref class Match {
		public:
			System::String^ team1;
			System::String^ team2;
			System::String^ date;
			System::String^ status;  // "Scheduled" or "Completed"
			System::String^ winner;

			// Constructor to initialize match details
			Match(System::String^ t1, System::String^ t2, System::String^ matchDate) {
				team1 = t1;
				team2 = t2;
				date = matchDate;
				status = "Scheduled";  // Initially, match is scheduled
				winner = "";
			}
		};

		ref class Node {
		public:
			Match^ match;  // The match object stored in the node
			Node^ next;    // Pointer to the next node in the queue

			// Constructor to create a new node
			Node(Match^ m) {
				match = m;
				next = nullptr;
			}
		};

		ref class Queue {
		private:
			Node^ front;  // Points to the first match in the queue
			Node^ rear;   // Points to the last match in the queue

		public:
			// Constructor to initialize the queue
			Queue() {
				front = nullptr;
				rear = nullptr;
			}

			// Add a match to the queue (enqueue)
			void Enqueue(Match^ match) {
				Node^ newNode = gcnew Node(match);  // Create a new node with the match
				if (rear == nullptr) {
					front = newNode;
					rear = newNode;
				}
				else {
					rear->next = newNode;
					rear = newNode;
				}
			}

			// Remove a match from the queue (dequeue)
			Match^ Dequeue() {
				if (front == nullptr) {
					throw gcnew System::InvalidOperationException("Queue is empty!");
				}

				Match^ match = front->match;  // Get the match from the front node
				front = front->next;  // Move the front pointer to the next node

				if (front == nullptr) {
					rear = nullptr;  // If the queue is empty, reset rear
				}

				return match;
			}

			// Check if the queue is empty
			bool IsEmpty() {
				return front == nullptr;
			}
		};

		ref class Tournament {
		public:
			Queue^ groupStageQueue;
			Queue^ quarterFinalQueue;
			Queue^ semiFinalQueue;
			Queue^ finalQueue;
			int currentRound;

			// Constructor to initialize the tournament
			Tournament() {
				groupStageQueue = gcnew Queue();
				quarterFinalQueue = gcnew Queue();
				semiFinalQueue = gcnew Queue();
				finalQueue = gcnew Queue();
				currentRound = 0;  // Start at Group Stage
			}

			// Simulate a match and return the winner
			System::String^ SimulateMatch(Match^ match) {
				Random^ rand = gcnew Random();
				int winner = rand->Next(0, 2);  // Randomly select 0 or 1 for the winner
				match->status = "Completed";
				return winner == 0 ? match->team1 : match->team2;  // Return the winner
			}

			// Simulate the tournament round by round
			void SimulateRound() {
				if (currentRound == 0) {  // Group Stage Simulation
					for (int i = 0; i < 8; i++) {
						// Simulate a match and add the winner to the next round's queue
						Match^ match = gcnew Match("Team" + (i * 2 + 1), "Team" + (i * 2 + 2), "2024-12-14");
						System::String^ winner = SimulateMatch(match);
						MessageBox::Show("Group Stage Match " + (i + 1) + ": " + winner + " wins!");

						// Add the winner to the quarter-final queue
						quarterFinalQueue->Enqueue(gcnew Match(winner, "", ""));
					}
					currentRound = 1;  // Move to Quarter Finals
				}
				else if (currentRound == 1) {  // Quarter Finals
					for (int i = 0; i < 4; i++) {
						Match^ match = quarterFinalQueue->Dequeue();
						System::String^ winner = SimulateMatch(match);
						MessageBox::Show("Quarter Final " + (i + 1) + ": " + winner + " wins!");

						// Add the winner to the semi-final queue
						semiFinalQueue->Enqueue(gcnew Match(winner, "", ""));
					}
					currentRound = 2;  // Move to Semi Finals
				}
				else if (currentRound == 2) {  // Semi Finals
					for (int i = 0; i < 2; i++) {
						Match^ match = semiFinalQueue->Dequeue();
						System::String^ winner = SimulateMatch(match);
						MessageBox::Show("Semi Final " + (i + 1) + ": " + winner + " wins!");

						// Add the winner to the final queue
						finalQueue->Enqueue(gcnew Match(winner, "", ""));
					}
					currentRound = 3;  // Move to Final
				}
				else if (currentRound == 3) {  // Final
					Match^ match = finalQueue->Dequeue();
					System::String^ winner = SimulateMatch(match);
					MessageBox::Show("Final: " + winner + " wins the Tournament!");

					currentRound = -1;  // Tournament Completed
				}
			}
		};

		/*cli::array<String^>^ groupStageWinners;
		cli::array<String^>^ quarterFinalWinners;
		cli::array<String^>^ semiFinalWinners;
		String^ FinalWinner = "";*/
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
	   String^ results;  // For storing results summary


	public:
		TournamentProgress(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//groupStageWinners = gcnew cli::array<String^>(8);  // 8 teams for the group stage
			//quarterFinalWinners = gcnew cli::array<String^>(4); // 4 teams for the quarter-finals
			//semiFinalWinners = gcnew cli::array<String^>(2);   // 2 teams for the semi-finals
			//results = ""; // Initialize results string

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TournamentProgress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSimulateMatch;
	private: System::Windows::Forms::Button^ btnSimulateRound;

	private: System::Windows::Forms::Label^ lblTitle;







	private: System::Windows::Forms::Panel^ pnlSchedule;
	private: System::Windows::Forms::PictureBox^ SchedulePictureBox;


	private: System::Windows::Forms::Label^ lblSchedule;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBoxTeams;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblGroupStageT1M1;
	private: System::Windows::Forms::Label^ lblGroupStageT2M1;
































	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ pnlGroupStage1;
private: System::Windows::Forms::Panel^ pnlGroupStage2;


private: System::Windows::Forms::Label^ lblGroupStageT1M2;
private: System::Windows::Forms::Label^ lblGroupStageT2M2;
private: System::Windows::Forms::Panel^ pnlGroupStage3;



private: System::Windows::Forms::Label^ lblGroupStageT1M3;
private: System::Windows::Forms::Label^ lblGroupStageT2M3;
private: System::Windows::Forms::Panel^ pnlGroupStage4;



private: System::Windows::Forms::Label^ lblGroupStageT1M4;
private: System::Windows::Forms::Label^ lblGroupStageT2M4;
private: System::Windows::Forms::Panel^ pnlGroupStage5;



private: System::Windows::Forms::Label^ lblGroupStageT1M5;
private: System::Windows::Forms::Label^ lblGroupStageT2M5;
private: System::Windows::Forms::Panel^ pnlGroupStage6;



private: System::Windows::Forms::Label^ lblGroupStageT1M6;
private: System::Windows::Forms::Label^ lblGroupStageT2M6;
private: System::Windows::Forms::Panel^ pnlGroupStage7;



private: System::Windows::Forms::Label^ lblGroupStageT1M7;
private: System::Windows::Forms::Label^ lblGroupStageT2M7;
private: System::Windows::Forms::Panel^ pnlGroupStage8;



private: System::Windows::Forms::Label^ lblGroupStageT1M8;
private: System::Windows::Forms::Label^ lblGroupStageT2M8;
private: System::Windows::Forms::Panel^ pnlQuarter2;
private: System::Windows::Forms::Label^ lblQuarter2T1;
private: System::Windows::Forms::Label^ lblQuarter2T2;





private: System::Windows::Forms::Panel^ pnlQuarter1;
private: System::Windows::Forms::Label^ lblQuarter1T1;
private: System::Windows::Forms::Label^ lblQuarter1T2;




private: System::Windows::Forms::Panel^ pnlQuarter3;
private: System::Windows::Forms::Label^ lblQuarter3T1;
private: System::Windows::Forms::Label^ lblQuarter3T2;



private: System::Windows::Forms::Panel^ pnlQuarter4;
private: System::Windows::Forms::Label^ lblQuarter4T1;
private: System::Windows::Forms::Label^ lblQuarter4T2;



private: System::Windows::Forms::Panel^ pnlSemi1;
private: System::Windows::Forms::Label^ lblSemi1T1;
private: System::Windows::Forms::Label^ lblSemi1T2;



private: System::Windows::Forms::Panel^ pnlSemi2;
private: System::Windows::Forms::Label^ lblSemi2T1;
private: System::Windows::Forms::Label^ lblSemi2T2;



private: System::Windows::Forms::Panel^ pnlFinal1;
private: System::Windows::Forms::Label^ lblFinalT1;


private: System::Windows::Forms::Panel^ pnlFinal2;
private: System::Windows::Forms::Label^ lblFinalT2;


private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox18;





	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TournamentProgress::typeid));
			this->btnSimulateMatch = (gcnew System::Windows::Forms::Button());
			this->btnSimulateRound = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlSchedule = (gcnew System::Windows::Forms::Panel());
			this->lblSchedule = (gcnew System::Windows::Forms::Label());
			this->SchedulePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTeams = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT1M1 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlGroupStage2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M2 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M2 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M3 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M3 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M4 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M4 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M5 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M5 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M6 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M6 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M7 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M7 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->lblGroupStageT1M8 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStageT2M8 = (gcnew System::Windows::Forms::Label());
			this->pnlQuarter2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->lblQuarter2T1 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter2T2 = (gcnew System::Windows::Forms::Label());
			this->pnlQuarter1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lblQuarter1T1 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter1T2 = (gcnew System::Windows::Forms::Label());
			this->pnlQuarter3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->lblQuarter3T1 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter3T2 = (gcnew System::Windows::Forms::Label());
			this->pnlQuarter4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->lblQuarter4T1 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter4T2 = (gcnew System::Windows::Forms::Label());
			this->pnlSemi1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->lblSemi1T1 = (gcnew System::Windows::Forms::Label());
			this->lblSemi1T2 = (gcnew System::Windows::Forms::Label());
			this->pnlSemi2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->lblSemi2T1 = (gcnew System::Windows::Forms::Label());
			this->lblSemi2T2 = (gcnew System::Windows::Forms::Label());
			this->pnlFinal1 = (gcnew System::Windows::Forms::Panel());
			this->lblFinalT1 = (gcnew System::Windows::Forms::Label());
			this->pnlFinal2 = (gcnew System::Windows::Forms::Panel());
			this->lblFinalT2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlSchedule->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SchedulePictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTeams))->BeginInit();
			this->panel3->SuspendLayout();
			this->pnlGroupStage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->pnlGroupStage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pnlGroupStage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->pnlGroupStage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->pnlGroupStage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->pnlGroupStage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->pnlGroupStage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->pnlGroupStage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->pnlQuarter2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->pnlQuarter1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->pnlQuarter3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->pnlQuarter4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->pnlSemi1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->pnlSemi2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->pnlFinal1->SuspendLayout();
			this->pnlFinal2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSimulateMatch
			// 
			this->btnSimulateMatch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSimulateMatch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSimulateMatch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSimulateMatch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSimulateMatch->ForeColor = System::Drawing::Color::Snow;
			this->btnSimulateMatch->Location = System::Drawing::Point(902, 627);
			this->btnSimulateMatch->Name = L"btnSimulateMatch";
			this->btnSimulateMatch->Size = System::Drawing::Size(242, 75);
			this->btnSimulateMatch->TabIndex = 47;
			this->btnSimulateMatch->Text = L"Simulate Match";
			this->btnSimulateMatch->UseVisualStyleBackColor = false;
			this->btnSimulateMatch->Visible = false;
			this->btnSimulateMatch->Click += gcnew System::EventHandler(this, &TournamentProgress::btnSimulateMatch_Click);
			// 
			// btnSimulateRound
			// 
			this->btnSimulateRound->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSimulateRound->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSimulateRound->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSimulateRound->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSimulateRound->ForeColor = System::Drawing::Color::Snow;
			this->btnSimulateRound->Location = System::Drawing::Point(902, 627);
			this->btnSimulateRound->Name = L"btnSimulateRound";
			this->btnSimulateRound->Size = System::Drawing::Size(244, 75);
			this->btnSimulateRound->TabIndex = 48;
			this->btnSimulateRound->Text = L"Simulate Round";
			this->btnSimulateRound->UseVisualStyleBackColor = false;
			this->btnSimulateRound->Visible = false;
			this->btnSimulateRound->Click += gcnew System::EventHandler(this, &TournamentProgress::btnSimulateRound_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::Color::White;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Location = System::Drawing::Point(417, -2);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(509, 65);
			this->lblTitle->TabIndex = 51;
			this->lblTitle->Text = L"Tournament Progress";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlSchedule
			// 
			this->pnlSchedule->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlSchedule->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlSchedule->Controls->Add(this->lblSchedule);
			this->pnlSchedule->Controls->Add(this->SchedulePictureBox);
			this->pnlSchedule->ForeColor = System::Drawing::Color::White;
			this->pnlSchedule->Location = System::Drawing::Point(513, 558);
			this->pnlSchedule->Name = L"pnlSchedule";
			this->pnlSchedule->Size = System::Drawing::Size(264, 68);
			this->pnlSchedule->TabIndex = 57;
			// 
			// lblSchedule
			// 
			this->lblSchedule->AutoSize = true;
			this->lblSchedule->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSchedule->ForeColor = System::Drawing::Color::White;
			this->lblSchedule->Location = System::Drawing::Point(3, 3);
			this->lblSchedule->Name = L"lblSchedule";
			this->lblSchedule->Size = System::Drawing::Size(154, 45);
			this->lblSchedule->TabIndex = 1;
			this->lblSchedule->Text = L"Schedule";
			// 
			// SchedulePictureBox
			// 
			this->SchedulePictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SchedulePictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SchedulePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SchedulePictureBox.Image")));
			this->SchedulePictureBox->Location = System::Drawing::Point(187, 3);
			this->SchedulePictureBox->Name = L"SchedulePictureBox";
			this->SchedulePictureBox->Size = System::Drawing::Size(77, 62);
			this->SchedulePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SchedulePictureBox->TabIndex = 0;
			this->SchedulePictureBox->TabStop = false;
			this->SchedulePictureBox->Click += gcnew System::EventHandler(this, &TournamentProgress::SchedulePictureBox_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(812, 553);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(264, 68);
			this->panel1->TabIndex = 58;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Rewards";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(187, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBoxTeams);
			this->panel2->Location = System::Drawing::Point(201, 558);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(264, 68);
			this->panel2->TabIndex = 59;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 45);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Teams";
			// 
			// pictureBoxTeams
			// 
			this->pictureBoxTeams->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxTeams->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxTeams->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTeams.Image")));
			this->pictureBoxTeams->Location = System::Drawing::Point(187, 3);
			this->pictureBoxTeams->Name = L"pictureBoxTeams";
			this->pictureBoxTeams->Size = System::Drawing::Size(77, 62);
			this->pictureBoxTeams->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxTeams->TabIndex = 0;
			this->pictureBoxTeams->TabStop = false;
			this->pictureBoxTeams->Click += gcnew System::EventHandler(this, &TournamentProgress::pictureBoxTeams_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(176, 649);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(364, 60);
			this->panel3->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(165, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 45);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Easy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 45);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Difficulty: ";
			// 
			// lblGroupStageT1M1
			// 
			this->lblGroupStageT1M1->AutoSize = true;
			this->lblGroupStageT1M1->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M1->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M1->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M1->Name = L"lblGroupStageT1M1";
			this->lblGroupStageT1M1->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M1->TabIndex = 63;
			this->lblGroupStageT1M1->Text = L"-";
			// 
			// lblGroupStageT2M1
			// 
			this->lblGroupStageT2M1->AutoSize = true;
			this->lblGroupStageT2M1->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M1->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M1->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M1->Name = L"lblGroupStageT2M1";
			this->lblGroupStageT2M1->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M1->TabIndex = 64;
			this->lblGroupStageT2M1->Text = L"-";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Location = System::Drawing::Point(180, 129);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(41, 4);
			this->panel4->TabIndex = 93;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TournamentProgress::panel4_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(180, 248);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(41, 4);
			this->panel5->TabIndex = 94;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(216, 199);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(4, 50);
			this->panel6->TabIndex = 95;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TournamentProgress::panel6_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Location = System::Drawing::Point(216, 132);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(4, 48);
			this->panel7->TabIndex = 96;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TournamentProgress::panel7_Paint);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(216, 189);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(41, 4);
			this->panel8->TabIndex = 97;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TournamentProgress::panel8_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Location = System::Drawing::Point(216, 413);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(41, 4);
			this->panel9->TabIndex = 102;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Black;
			this->panel10->Location = System::Drawing::Point(216, 356);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(4, 48);
			this->panel10->TabIndex = 101;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Location = System::Drawing::Point(217, 426);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(4, 50);
			this->panel11->TabIndex = 100;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Black;
			this->panel12->Location = System::Drawing::Point(180, 472);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(41, 4);
			this->panel12->TabIndex = 99;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Black;
			this->panel13->Location = System::Drawing::Point(180, 353);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(41, 4);
			this->panel13->TabIndex = 98;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Black;
			this->panel14->Location = System::Drawing::Point(410, 302);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(41, 4);
			this->panel14->TabIndex = 107;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Black;
			this->panel15->Location = System::Drawing::Point(410, 196);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(4, 100);
			this->panel15->TabIndex = 106;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Black;
			this->panel16->Location = System::Drawing::Point(411, 313);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(4, 100);
			this->panel16->TabIndex = 105;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Black;
			this->panel17->Location = System::Drawing::Point(374, 412);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(41, 4);
			this->panel17->TabIndex = 104;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Black;
			this->panel18->Location = System::Drawing::Point(373, 193);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(41, 4);
			this->panel18->TabIndex = 103;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Black;
			this->panel19->Location = System::Drawing::Point(1044, 199);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(41, 4);
			this->panel19->TabIndex = 112;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Black;
			this->panel20->Location = System::Drawing::Point(1073, 145);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(4, 48);
			this->panel20->TabIndex = 111;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::Black;
			this->panel21->Location = System::Drawing::Point(1073, 210);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(4, 50);
			this->panel21->TabIndex = 110;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::Black;
			this->panel22->Location = System::Drawing::Point(1073, 259);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(41, 4);
			this->panel22->TabIndex = 109;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Black;
			this->panel23->Location = System::Drawing::Point(1076, 144);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(41, 4);
			this->panel23->TabIndex = 108;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Black;
			this->panel24->Location = System::Drawing::Point(1044, 428);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(41, 4);
			this->panel24->TabIndex = 117;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Black;
			this->panel25->Location = System::Drawing::Point(1073, 374);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(4, 48);
			this->panel25->TabIndex = 116;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::Black;
			this->panel26->Location = System::Drawing::Point(1073, 439);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(4, 50);
			this->panel26->TabIndex = 115;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::Black;
			this->panel27->Location = System::Drawing::Point(1073, 488);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(41, 4);
			this->panel27->TabIndex = 114;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::Black;
			this->panel28->Location = System::Drawing::Point(1076, 373);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(41, 4);
			this->panel28->TabIndex = 113;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::Black;
			this->panel29->Location = System::Drawing::Point(859, 316);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(41, 4);
			this->panel29->TabIndex = 122;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Black;
			this->panel30->Location = System::Drawing::Point(885, 210);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(4, 100);
			this->panel30->TabIndex = 121;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::Black;
			this->panel31->Location = System::Drawing::Point(885, 329);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(4, 100);
			this->panel31->TabIndex = 120;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::Black;
			this->panel32->Location = System::Drawing::Point(885, 428);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(41, 4);
			this->panel32->TabIndex = 119;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Black;
			this->panel33->Location = System::Drawing::Point(886, 210);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(41, 4);
			this->panel33->TabIndex = 118;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(606, 373);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(100, 48);
			this->label36->TabIndex = 123;
			this->label36->Text = L"Final";
			// 
			// pnlGroupStage1
			// 
			this->pnlGroupStage1->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage1->Controls->Add(this->pictureBox7);
			this->pnlGroupStage1->Controls->Add(this->lblGroupStageT1M1);
			this->pnlGroupStage1->Controls->Add(this->lblGroupStageT2M1);
			this->pnlGroupStage1->Location = System::Drawing::Point(6, 44);
			this->pnlGroupStage1->Name = L"pnlGroupStage1";
			this->pnlGroupStage1->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage1->TabIndex = 124;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(61, 39);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(47, 41);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 66;
			this->pictureBox7->TabStop = false;
			// 
			// pnlGroupStage2
			// 
			this->pnlGroupStage2->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage2->Controls->Add(this->pictureBox2);
			this->pnlGroupStage2->Controls->Add(this->lblGroupStageT1M2);
			this->pnlGroupStage2->Controls->Add(this->lblGroupStageT2M2);
			this->pnlGroupStage2->Location = System::Drawing::Point(6, 175);
			this->pnlGroupStage2->Name = L"pnlGroupStage2";
			this->pnlGroupStage2->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage2->TabIndex = 125;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(55, 36);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(47, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 65;
			this->pictureBox2->TabStop = false;
			// 
			// lblGroupStageT1M2
			// 
			this->lblGroupStageT1M2->AutoSize = true;
			this->lblGroupStageT1M2->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M2->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M2->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M2->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M2->Name = L"lblGroupStageT1M2";
			this->lblGroupStageT1M2->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M2->TabIndex = 63;
			this->lblGroupStageT1M2->Text = L"-";
			// 
			// lblGroupStageT2M2
			// 
			this->lblGroupStageT2M2->AutoSize = true;
			this->lblGroupStageT2M2->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M2->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M2->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M2->Name = L"lblGroupStageT2M2";
			this->lblGroupStageT2M2->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M2->TabIndex = 64;
			this->lblGroupStageT2M2->Text = L"-";
			// 
			// pnlGroupStage3
			// 
			this->pnlGroupStage3->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage3->Controls->Add(this->pictureBox5);
			this->pnlGroupStage3->Controls->Add(this->lblGroupStageT1M3);
			this->pnlGroupStage3->Controls->Add(this->lblGroupStageT2M3);
			this->pnlGroupStage3->Location = System::Drawing::Point(6, 311);
			this->pnlGroupStage3->Name = L"pnlGroupStage3";
			this->pnlGroupStage3->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage3->TabIndex = 126;
			this->pnlGroupStage3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TournamentProgress::pnlGroupStage3_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(61, 31);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(47, 41);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 66;
			this->pictureBox5->TabStop = false;
			// 
			// lblGroupStageT1M3
			// 
			this->lblGroupStageT1M3->AutoSize = true;
			this->lblGroupStageT1M3->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M3->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M3->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M3->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M3->Name = L"lblGroupStageT1M3";
			this->lblGroupStageT1M3->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M3->TabIndex = 63;
			this->lblGroupStageT1M3->Text = L"-";
			// 
			// lblGroupStageT2M3
			// 
			this->lblGroupStageT2M3->AutoSize = true;
			this->lblGroupStageT2M3->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M3->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M3->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M3->Name = L"lblGroupStageT2M3";
			this->lblGroupStageT2M3->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M3->TabIndex = 64;
			this->lblGroupStageT2M3->Text = L"-";
			// 
			// pnlGroupStage4
			// 
			this->pnlGroupStage4->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage4->Controls->Add(this->pictureBox6);
			this->pnlGroupStage4->Controls->Add(this->lblGroupStageT1M4);
			this->pnlGroupStage4->Controls->Add(this->lblGroupStageT2M4);
			this->pnlGroupStage4->Location = System::Drawing::Point(5, 438);
			this->pnlGroupStage4->Name = L"pnlGroupStage4";
			this->pnlGroupStage4->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage4->TabIndex = 127;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(61, 42);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(47, 41);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 66;
			this->pictureBox6->TabStop = false;
			// 
			// lblGroupStageT1M4
			// 
			this->lblGroupStageT1M4->AutoSize = true;
			this->lblGroupStageT1M4->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M4->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M4->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M4->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M4->Name = L"lblGroupStageT1M4";
			this->lblGroupStageT1M4->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M4->TabIndex = 63;
			this->lblGroupStageT1M4->Text = L"-";
			// 
			// lblGroupStageT2M4
			// 
			this->lblGroupStageT2M4->AutoSize = true;
			this->lblGroupStageT2M4->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M4->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M4->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M4->Name = L"lblGroupStageT2M4";
			this->lblGroupStageT2M4->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M4->TabIndex = 64;
			this->lblGroupStageT2M4->Text = L"-";
			// 
			// pnlGroupStage5
			// 
			this->pnlGroupStage5->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage5->Controls->Add(this->pictureBox13);
			this->pnlGroupStage5->Controls->Add(this->lblGroupStageT1M5);
			this->pnlGroupStage5->Controls->Add(this->lblGroupStageT2M5);
			this->pnlGroupStage5->Location = System::Drawing::Point(1123, 45);
			this->pnlGroupStage5->Name = L"pnlGroupStage5";
			this->pnlGroupStage5->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage5->TabIndex = 128;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(61, 40);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(47, 41);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 67;
			this->pictureBox13->TabStop = false;
			// 
			// lblGroupStageT1M5
			// 
			this->lblGroupStageT1M5->AutoSize = true;
			this->lblGroupStageT1M5->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M5->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M5->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M5->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M5->Name = L"lblGroupStageT1M5";
			this->lblGroupStageT1M5->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M5->TabIndex = 63;
			this->lblGroupStageT1M5->Text = L"-";
			// 
			// lblGroupStageT2M5
			// 
			this->lblGroupStageT2M5->AutoSize = true;
			this->lblGroupStageT2M5->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M5->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M5->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M5->Name = L"lblGroupStageT2M5";
			this->lblGroupStageT2M5->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M5->TabIndex = 64;
			this->lblGroupStageT2M5->Text = L"-";
			// 
			// pnlGroupStage6
			// 
			this->pnlGroupStage6->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage6->Controls->Add(this->pictureBox14);
			this->pnlGroupStage6->Controls->Add(this->lblGroupStageT1M6);
			this->pnlGroupStage6->Controls->Add(this->lblGroupStageT2M6);
			this->pnlGroupStage6->Location = System::Drawing::Point(1121, 176);
			this->pnlGroupStage6->Name = L"pnlGroupStage6";
			this->pnlGroupStage6->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage6->TabIndex = 129;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(61, 40);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(47, 41);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 67;
			this->pictureBox14->TabStop = false;
			// 
			// lblGroupStageT1M6
			// 
			this->lblGroupStageT1M6->AutoSize = true;
			this->lblGroupStageT1M6->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M6->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M6->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M6->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M6->Name = L"lblGroupStageT1M6";
			this->lblGroupStageT1M6->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M6->TabIndex = 63;
			this->lblGroupStageT1M6->Text = L"-";
			// 
			// lblGroupStageT2M6
			// 
			this->lblGroupStageT2M6->AutoSize = true;
			this->lblGroupStageT2M6->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M6->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M6->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M6->Name = L"lblGroupStageT2M6";
			this->lblGroupStageT2M6->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M6->TabIndex = 64;
			this->lblGroupStageT2M6->Text = L"-";
			// 
			// pnlGroupStage7
			// 
			this->pnlGroupStage7->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage7->Controls->Add(this->pictureBox15);
			this->pnlGroupStage7->Controls->Add(this->lblGroupStageT1M7);
			this->pnlGroupStage7->Controls->Add(this->lblGroupStageT2M7);
			this->pnlGroupStage7->Location = System::Drawing::Point(1123, 311);
			this->pnlGroupStage7->Name = L"pnlGroupStage7";
			this->pnlGroupStage7->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage7->TabIndex = 130;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(61, 40);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(47, 41);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 67;
			this->pictureBox15->TabStop = false;
			// 
			// lblGroupStageT1M7
			// 
			this->lblGroupStageT1M7->AutoSize = true;
			this->lblGroupStageT1M7->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M7->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M7->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M7->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M7->Name = L"lblGroupStageT1M7";
			this->lblGroupStageT1M7->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M7->TabIndex = 63;
			this->lblGroupStageT1M7->Text = L"-";
			// 
			// lblGroupStageT2M7
			// 
			this->lblGroupStageT2M7->AutoSize = true;
			this->lblGroupStageT2M7->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M7->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M7->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M7->Name = L"lblGroupStageT2M7";
			this->lblGroupStageT2M7->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M7->TabIndex = 64;
			this->lblGroupStageT2M7->Text = L"-";
			// 
			// pnlGroupStage8
			// 
			this->pnlGroupStage8->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlGroupStage8->Controls->Add(this->pictureBox16);
			this->pnlGroupStage8->Controls->Add(this->lblGroupStageT1M8);
			this->pnlGroupStage8->Controls->Add(this->lblGroupStageT2M8);
			this->pnlGroupStage8->Location = System::Drawing::Point(1120, 439);
			this->pnlGroupStage8->Name = L"pnlGroupStage8";
			this->pnlGroupStage8->Size = System::Drawing::Size(169, 121);
			this->pnlGroupStage8->TabIndex = 131;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(61, 40);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(47, 41);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 67;
			this->pictureBox16->TabStop = false;
			// 
			// lblGroupStageT1M8
			// 
			this->lblGroupStageT1M8->AutoSize = true;
			this->lblGroupStageT1M8->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT1M8->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGroupStageT1M8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT1M8->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT1M8->Location = System::Drawing::Point(0, 0);
			this->lblGroupStageT1M8->Name = L"lblGroupStageT1M8";
			this->lblGroupStageT1M8->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT1M8->TabIndex = 63;
			this->lblGroupStageT1M8->Text = L"-";
			// 
			// lblGroupStageT2M8
			// 
			this->lblGroupStageT2M8->AutoSize = true;
			this->lblGroupStageT2M8->BackColor = System::Drawing::Color::Transparent;
			this->lblGroupStageT2M8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblGroupStageT2M8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStageT2M8->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStageT2M8->Location = System::Drawing::Point(0, 91);
			this->lblGroupStageT2M8->Name = L"lblGroupStageT2M8";
			this->lblGroupStageT2M8->Size = System::Drawing::Size(20, 28);
			this->lblGroupStageT2M8->TabIndex = 64;
			this->lblGroupStageT2M8->Text = L"-";
			// 
			// pnlQuarter2
			// 
			this->pnlQuarter2->BackColor = System::Drawing::Color::White;
			this->pnlQuarter2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlQuarter2->Controls->Add(this->pictureBox9);
			this->pnlQuarter2->Controls->Add(this->lblQuarter2T1);
			this->pnlQuarter2->Controls->Add(this->lblQuarter2T2);
			this->pnlQuarter2->Location = System::Drawing::Point(251, 350);
			this->pnlQuarter2->Name = L"pnlQuarter2";
			this->pnlQuarter2->Size = System::Drawing::Size(154, 120);
			this->pnlQuarter2->TabIndex = 132;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(28, 42);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(47, 41);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 67;
			this->pictureBox9->TabStop = false;
			// 
			// lblQuarter2T1
			// 
			this->lblQuarter2T1->AutoSize = true;
			this->lblQuarter2T1->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter2T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblQuarter2T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter2T1->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter2T1->Location = System::Drawing::Point(0, 0);
			this->lblQuarter2T1->Name = L"lblQuarter2T1";
			this->lblQuarter2T1->Size = System::Drawing::Size(20, 28);
			this->lblQuarter2T1->TabIndex = 63;
			this->lblQuarter2T1->Text = L"-";
			this->lblQuarter2T1->Click += gcnew System::EventHandler(this, &TournamentProgress::lblQuarter2T1_Click);
			// 
			// lblQuarter2T2
			// 
			this->lblQuarter2T2->AutoSize = true;
			this->lblQuarter2T2->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter2T2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblQuarter2T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter2T2->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter2T2->Location = System::Drawing::Point(0, 90);
			this->lblQuarter2T2->Name = L"lblQuarter2T2";
			this->lblQuarter2T2->Size = System::Drawing::Size(20, 28);
			this->lblQuarter2T2->TabIndex = 64;
			this->lblQuarter2T2->Text = L"-";
			// 
			// pnlQuarter1
			// 
			this->pnlQuarter1->BackColor = System::Drawing::Color::White;
			this->pnlQuarter1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlQuarter1->Controls->Add(this->pictureBox8);
			this->pnlQuarter1->Controls->Add(this->lblQuarter1T1);
			this->pnlQuarter1->Controls->Add(this->lblQuarter1T2);
			this->pnlQuarter1->Location = System::Drawing::Point(250, 132);
			this->pnlQuarter1->Name = L"pnlQuarter1";
			this->pnlQuarter1->Size = System::Drawing::Size(155, 120);
			this->pnlQuarter1->TabIndex = 133;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(28, 40);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(47, 41);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 67;
			this->pictureBox8->TabStop = false;
			// 
			// lblQuarter1T1
			// 
			this->lblQuarter1T1->AutoSize = true;
			this->lblQuarter1T1->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter1T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblQuarter1T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter1T1->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter1T1->Location = System::Drawing::Point(0, 0);
			this->lblQuarter1T1->Name = L"lblQuarter1T1";
			this->lblQuarter1T1->Size = System::Drawing::Size(20, 28);
			this->lblQuarter1T1->TabIndex = 63;
			this->lblQuarter1T1->Text = L"-";
			// 
			// lblQuarter1T2
			// 
			this->lblQuarter1T2->AutoSize = true;
			this->lblQuarter1T2->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter1T2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblQuarter1T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter1T2->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter1T2->Location = System::Drawing::Point(0, 90);
			this->lblQuarter1T2->Name = L"lblQuarter1T2";
			this->lblQuarter1T2->Size = System::Drawing::Size(20, 28);
			this->lblQuarter1T2->TabIndex = 64;
			this->lblQuarter1T2->Text = L"-";
			// 
			// pnlQuarter3
			// 
			this->pnlQuarter3->BackColor = System::Drawing::Color::White;
			this->pnlQuarter3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlQuarter3->Controls->Add(this->pictureBox17);
			this->pnlQuarter3->Controls->Add(this->lblQuarter3T1);
			this->pnlQuarter3->Controls->Add(this->lblQuarter3T2);
			this->pnlQuarter3->Location = System::Drawing::Point(896, 133);
			this->pnlQuarter3->Name = L"pnlQuarter3";
			this->pnlQuarter3->Size = System::Drawing::Size(161, 120);
			this->pnlQuarter3->TabIndex = 134;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(45, 39);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(47, 41);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 69;
			this->pictureBox17->TabStop = false;
			// 
			// lblQuarter3T1
			// 
			this->lblQuarter3T1->AutoSize = true;
			this->lblQuarter3T1->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter3T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblQuarter3T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter3T1->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter3T1->Location = System::Drawing::Point(0, 0);
			this->lblQuarter3T1->Name = L"lblQuarter3T1";
			this->lblQuarter3T1->Size = System::Drawing::Size(20, 28);
			this->lblQuarter3T1->TabIndex = 63;
			this->lblQuarter3T1->Text = L"-";
			// 
			// lblQuarter3T2
			// 
			this->lblQuarter3T2->AutoSize = true;
			this->lblQuarter3T2->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter3T2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblQuarter3T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter3T2->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter3T2->Location = System::Drawing::Point(0, 90);
			this->lblQuarter3T2->Name = L"lblQuarter3T2";
			this->lblQuarter3T2->Size = System::Drawing::Size(20, 28);
			this->lblQuarter3T2->TabIndex = 64;
			this->lblQuarter3T2->Text = L"-";
			// 
			// pnlQuarter4
			// 
			this->pnlQuarter4->BackColor = System::Drawing::Color::White;
			this->pnlQuarter4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlQuarter4->Controls->Add(this->pictureBox18);
			this->pnlQuarter4->Controls->Add(this->lblQuarter4T1);
			this->pnlQuarter4->Controls->Add(this->lblQuarter4T2);
			this->pnlQuarter4->Location = System::Drawing::Point(896, 343);
			this->pnlQuarter4->Name = L"pnlQuarter4";
			this->pnlQuarter4->Size = System::Drawing::Size(161, 120);
			this->pnlQuarter4->TabIndex = 135;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(45, 39);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(47, 41);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 69;
			this->pictureBox18->TabStop = false;
			// 
			// lblQuarter4T1
			// 
			this->lblQuarter4T1->AutoSize = true;
			this->lblQuarter4T1->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter4T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblQuarter4T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter4T1->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter4T1->Location = System::Drawing::Point(0, 0);
			this->lblQuarter4T1->Name = L"lblQuarter4T1";
			this->lblQuarter4T1->Size = System::Drawing::Size(20, 28);
			this->lblQuarter4T1->TabIndex = 63;
			this->lblQuarter4T1->Text = L"-";
			// 
			// lblQuarter4T2
			// 
			this->lblQuarter4T2->AutoSize = true;
			this->lblQuarter4T2->BackColor = System::Drawing::Color::Transparent;
			this->lblQuarter4T2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblQuarter4T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter4T2->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter4T2->Location = System::Drawing::Point(0, 90);
			this->lblQuarter4T2->Name = L"lblQuarter4T2";
			this->lblQuarter4T2->Size = System::Drawing::Size(20, 28);
			this->lblQuarter4T2->TabIndex = 64;
			this->lblQuarter4T2->Text = L"-";
			// 
			// pnlSemi1
			// 
			this->pnlSemi1->BackColor = System::Drawing::Color::White;
			this->pnlSemi1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlSemi1->Controls->Add(this->pictureBox10);
			this->pnlSemi1->Controls->Add(this->lblSemi1T1);
			this->pnlSemi1->Controls->Add(this->lblSemi1T2);
			this->pnlSemi1->Location = System::Drawing::Point(462, 238);
			this->pnlSemi1->Name = L"pnlSemi1";
			this->pnlSemi1->Size = System::Drawing::Size(139, 120);
			this->pnlSemi1->TabIndex = 133;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(42, 39);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(47, 41);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 68;
			this->pictureBox10->TabStop = false;
			// 
			// lblSemi1T1
			// 
			this->lblSemi1T1->AutoSize = true;
			this->lblSemi1T1->BackColor = System::Drawing::Color::Transparent;
			this->lblSemi1T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblSemi1T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi1T1->ForeColor = System::Drawing::Color::Black;
			this->lblSemi1T1->Location = System::Drawing::Point(0, 0);
			this->lblSemi1T1->Name = L"lblSemi1T1";
			this->lblSemi1T1->Size = System::Drawing::Size(20, 28);
			this->lblSemi1T1->TabIndex = 63;
			this->lblSemi1T1->Text = L"-";
			// 
			// lblSemi1T2
			// 
			this->lblSemi1T2->AutoSize = true;
			this->lblSemi1T2->BackColor = System::Drawing::Color::Transparent;
			this->lblSemi1T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi1T2->ForeColor = System::Drawing::Color::Black;
			this->lblSemi1T2->Location = System::Drawing::Point(0, 90);
			this->lblSemi1T2->Name = L"lblSemi1T2";
			this->lblSemi1T2->Size = System::Drawing::Size(20, 28);
			this->lblSemi1T2->TabIndex = 64;
			this->lblSemi1T2->Text = L"-";
			// 
			// pnlSemi2
			// 
			this->pnlSemi2->BackColor = System::Drawing::Color::White;
			this->pnlSemi2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlSemi2->Controls->Add(this->pictureBox11);
			this->pnlSemi2->Controls->Add(this->lblSemi2T1);
			this->pnlSemi2->Controls->Add(this->lblSemi2T2);
			this->pnlSemi2->Location = System::Drawing::Point(710, 237);
			this->pnlSemi2->Name = L"pnlSemi2";
			this->pnlSemi2->Size = System::Drawing::Size(139, 120);
			this->pnlSemi2->TabIndex = 136;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(44, 40);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(47, 41);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 68;
			this->pictureBox11->TabStop = false;
			// 
			// lblSemi2T1
			// 
			this->lblSemi2T1->AutoSize = true;
			this->lblSemi2T1->BackColor = System::Drawing::Color::Transparent;
			this->lblSemi2T1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblSemi2T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi2T1->ForeColor = System::Drawing::Color::Black;
			this->lblSemi2T1->Location = System::Drawing::Point(0, 0);
			this->lblSemi2T1->Name = L"lblSemi2T1";
			this->lblSemi2T1->Size = System::Drawing::Size(20, 28);
			this->lblSemi2T1->TabIndex = 63;
			this->lblSemi2T1->Text = L"-";
			// 
			// lblSemi2T2
			// 
			this->lblSemi2T2->AutoSize = true;
			this->lblSemi2T2->BackColor = System::Drawing::Color::Transparent;
			this->lblSemi2T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi2T2->ForeColor = System::Drawing::Color::Black;
			this->lblSemi2T2->Location = System::Drawing::Point(0, 90);
			this->lblSemi2T2->Name = L"lblSemi2T2";
			this->lblSemi2T2->Size = System::Drawing::Size(20, 28);
			this->lblSemi2T2->TabIndex = 64;
			this->lblSemi2T2->Text = L"-";
			// 
			// pnlFinal1
			// 
			this->pnlFinal1->BackColor = System::Drawing::Color::White;
			this->pnlFinal1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlFinal1->Controls->Add(this->lblFinalT1);
			this->pnlFinal1->Location = System::Drawing::Point(456, 428);
			this->pnlFinal1->Name = L"pnlFinal1";
			this->pnlFinal1->Size = System::Drawing::Size(175, 49);
			this->pnlFinal1->TabIndex = 137;
			// 
			// lblFinalT1
			// 
			this->lblFinalT1->AutoSize = true;
			this->lblFinalT1->BackColor = System::Drawing::Color::Transparent;
			this->lblFinalT1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblFinalT1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinalT1->ForeColor = System::Drawing::Color::Black;
			this->lblFinalT1->Location = System::Drawing::Point(0, 19);
			this->lblFinalT1->Name = L"lblFinalT1";
			this->lblFinalT1->Size = System::Drawing::Size(20, 28);
			this->lblFinalT1->TabIndex = 63;
			this->lblFinalT1->Text = L"-";
			// 
			// pnlFinal2
			// 
			this->pnlFinal2->BackColor = System::Drawing::Color::White;
			this->pnlFinal2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlFinal2->Controls->Add(this->lblFinalT2);
			this->pnlFinal2->Location = System::Drawing::Point(704, 428);
			this->pnlFinal2->Name = L"pnlFinal2";
			this->pnlFinal2->Size = System::Drawing::Size(170, 44);
			this->pnlFinal2->TabIndex = 138;
			// 
			// lblFinalT2
			// 
			this->lblFinalT2->AutoSize = true;
			this->lblFinalT2->BackColor = System::Drawing::Color::Transparent;
			this->lblFinalT2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblFinalT2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinalT2->ForeColor = System::Drawing::Color::Black;
			this->lblFinalT2->Location = System::Drawing::Point(0, 14);
			this->lblFinalT2->Name = L"lblFinalT2";
			this->lblFinalT2->Size = System::Drawing::Size(20, 28);
			this->lblFinalT2->TabIndex = 63;
			this->lblFinalT2->Text = L"-";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(569, 66);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(192, 165);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 139;
			this->pictureBox4->TabStop = false;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::Black;
			this->panel34->Location = System::Drawing::Point(514, 374);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(4, 50);
			this->panel34->TabIndex = 140;
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::Black;
			this->panel35->Location = System::Drawing::Point(774, 371);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(4, 50);
			this->panel35->TabIndex = 141;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(644, 436);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(47, 41);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 142;
			this->pictureBox12->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(902, 627);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 75);
			this->button1->TabIndex = 143;
			this->button1->Text = L"Let\'s Start ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TournamentProgress::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(29, 634);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(131, 75);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 61;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &TournamentProgress::pictureBox3_Click);
			// 
			// TournamentProgress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1349, 760);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->panel35);
			this->Controls->Add(this->panel34);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pnlFinal2);
			this->Controls->Add(this->pnlFinal1);
			this->Controls->Add(this->pnlSemi2);
			this->Controls->Add(this->pnlSemi1);
			this->Controls->Add(this->pnlQuarter4);
			this->Controls->Add(this->pnlQuarter3);
			this->Controls->Add(this->pnlQuarter1);
			this->Controls->Add(this->pnlQuarter2);
			this->Controls->Add(this->pnlGroupStage8);
			this->Controls->Add(this->pnlGroupStage7);
			this->Controls->Add(this->pnlGroupStage6);
			this->Controls->Add(this->pnlGroupStage5);
			this->Controls->Add(this->pnlGroupStage4);
			this->Controls->Add(this->pnlGroupStage3);
			this->Controls->Add(this->pnlGroupStage2);
			this->Controls->Add(this->pnlGroupStage1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel31);
			this->Controls->Add(this->panel32);
			this->Controls->Add(this->panel33);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->panel26);
			this->Controls->Add(this->panel27);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlSchedule);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->btnSimulateRound);
			this->Controls->Add(this->btnSimulateMatch);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1349, 760);
			this->MinimumSize = System::Drawing::Size(1349, 760);
			this->Name = L"TournamentProgress";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TournamentProgress";
			this->Load += gcnew System::EventHandler(this, &TournamentProgress::TournamentProgress_Load);
			this->pnlSchedule->ResumeLayout(false);
			this->pnlSchedule->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SchedulePictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTeams))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->pnlGroupStage1->ResumeLayout(false);
			this->pnlGroupStage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->pnlGroupStage2->ResumeLayout(false);
			this->pnlGroupStage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pnlGroupStage3->ResumeLayout(false);
			this->pnlGroupStage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->pnlGroupStage4->ResumeLayout(false);
			this->pnlGroupStage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->pnlGroupStage5->ResumeLayout(false);
			this->pnlGroupStage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->pnlGroupStage6->ResumeLayout(false);
			this->pnlGroupStage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->pnlGroupStage7->ResumeLayout(false);
			this->pnlGroupStage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->pnlGroupStage8->ResumeLayout(false);
			this->pnlGroupStage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->pnlQuarter2->ResumeLayout(false);
			this->pnlQuarter2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->pnlQuarter1->ResumeLayout(false);
			this->pnlQuarter1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->pnlQuarter3->ResumeLayout(false);
			this->pnlQuarter3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->pnlQuarter4->ResumeLayout(false);
			this->pnlQuarter4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->pnlSemi1->ResumeLayout(false);
			this->pnlSemi1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->pnlSemi2->ResumeLayout(false);
			this->pnlSemi2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->pnlFinal1->ResumeLayout(false);
			this->pnlFinal1->PerformLayout();
			this->pnlFinal2->ResumeLayout(false);
			this->pnlFinal2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void TournamentProgress_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBoxTeams_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Check whether Manage Teams form is already open or not 
	for each (Form ^ openForm in Application::OpenForms)
	{
		if (dynamic_cast<ManageTeams^>(openForm)) {
			// If ManageTeamsForm is already open, show a message and return
			MessageBox::Show("Manage Teams form is already open.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return; // Exit the method, don't open a new instance
		}
	}
	
	// Open Manage Teams Form and close this form
	ManageTeams^ manageTeams = gcnew ManageTeams();
	manageTeams->Show();
	this->Close();

	
}

private: System::Void SchedulePictureBox_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Create the Schedule form
	Schedule^ Obj = gcnew Schedule();

	// Access the team collection from GlobalData
	TeamsArray^ teamCollection = GlobalData::teamCollection;

	// Get the current number of teams
	int teamCount = teamCollection->TeamCount;

	// Check if the correct number of teams is loaded
	if (teamCount != 16) {
		MessageBox::Show("There must be exactly 16 teams.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Create a new cli::array to hold the teams
	cli::array<Team^>^ teams = gcnew cli::array<Team^>(teamCount);

	// Copy teams into the new array
	for (int i = 0; i < teamCount; i++) {
		teams[i] = teamCollection->GetTeam(i); // Access each team by index
	}

	// Access the pnlMain panel using Find
	cli::array<Control^>^ pnlMainArray = Obj->Controls->Find("pnlMain", true);

	// Ensure pnlMain is found
	if (pnlMainArray->Length > 0) {
		Panel^ pnlMain = safe_cast<Panel^>(pnlMainArray[0]);

		// Access the pnlGroupStage panel inside pnlMain
		cli::array<Control^>^ pnlGroupStageArray = pnlMain->Controls->Find("pnlGroupStage", true);

		if (pnlGroupStageArray->Length > 0) {
			Panel^ pnlGroupStage = safe_cast<Panel^>(pnlGroupStageArray[0]);

			// Use the matchups array created in button4_Click
			// (Assuming matchups is already filled in button4_Click)

			// Logic to populate panels in the GroupStage of the Schedule form
			DateTime matchDateTime = DateTime::Now; // Start with the current date and time

			for (int i = 0; i < 8; i++) {
				// Access the label for the current match (lblGroupStage1, lblGroupStage2, etc.)
				Label^ matchLabel = dynamic_cast<Label^>(pnlGroupStage->Controls["lblGroupStage" + (i + 1).ToString()]);

				if (matchLabel != nullptr) {
					// Get the teams for this match from the matchups array
					Team^ team1 = MatchupList::matchups[i][0]; // Top team
					Team^ team2 = MatchupList::matchups[i][1]; // Bottom team (shuffled)

					// Get the team names
					String^ team1Name = team1->Name;
					String^ team2Name = team2->Name;

					// Check if there's a winner in the groupStageWinners array
					String^ winnerName = TournamentResultArrays::groupStageWinners[i];

					// Add 1 day for each new match
					matchDateTime = matchDateTime.AddDays(1);

					// Format the date and time to include day name, date, and time
					String^ dateTimeString = matchDateTime.ToString("dd-MM-yyyy dddd HH:mm");

					if (String::IsNullOrEmpty(winnerName)) {
						// If no winner yet, display the scheduled match
						matchLabel->Text = String::Format("Match-{0}: {1} vs {2} | {3} | Status: Scheduled",
							(i + 1),
							team1Name,
							team2Name,
							dateTimeString);
					}
					else {
						// If there's a winner, display the completed match
						matchLabel->Text = String::Format("Match-{0}: {1} vs {2} | {3} | Status: Completed | Winner: {4}",
							(i + 1),
							team1Name,
							team2Name,
							dateTimeString,
							winnerName);
					}
				}
			}


			// Now simulate the Quarter Finals using the winners from the group stage
			cli::array<Control^>^ pnlQuarterArray = pnlMain->Controls->Find("pnlQuarter", true);

			if (pnlQuarterArray->Length > 0) {
				Panel^ pnlQuarter = safe_cast<Panel^>(pnlQuarterArray[0]);

				// Quarter-Final matches (4 matches)
				for (int i = 0; i < 4; i++) {
					// Access the label for the current quarter-final match
					Label^ matchLabel = dynamic_cast<Label^>(pnlQuarter->Controls["lblQuarter" + (i + 1).ToString()]);

					if (matchLabel != nullptr) {
						// Get the winners from the group stage
						String^ team1Name = TournamentResultArrays::groupStageWinners[i * 2];       // Winner of match 1 and 2
						String^ team2Name = TournamentResultArrays::groupStageWinners[i * 2 + 1];   // Winner of match 3 and 4

						// Check if there's a winner in the QuarterWinners array
						String^ winnerName = TournamentResultArrays::quarterFinalWinners[i];

						// Add 1 day for each new match
						matchDateTime = matchDateTime.AddDays(1);

						// Format the date and time to include day name, date, and time
						String^ dateTimeString = matchDateTime.ToString("dd-MM-yyyy dddd HH:mm");

						if (String::IsNullOrEmpty(winnerName)) {
							// If no winner yet, display the scheduled match
							matchLabel->Text = String::Format("Quarter-{0}: Group Stage {1} Winner vs Group Stage {2} Winner | {3} | Status: Scheduled",
								(i + 1),                       // Quarter-final match number
								(i * 2 + 1),                   // The first team in the group stage match (Group Stage 1, 3, 5, ...)
								(i * 2 + 2),                   // The second team in the group stage match (Group Stage 2, 4, 6, ...)
								dateTimeString);               // Scheduled date and time
						}
						else {
							// If there's a winner, display the completed match
							matchLabel->Text = String::Format("Quarter-{0}: {1} vs {2} | {3} | Status: Completed | Winner: {4}",
								(i + 1),
								team1Name,
								team2Name,
								dateTimeString,
								winnerName);
						}
					}
				}
			}

			// Now simulate the Semi Finals using the winners from the quarter-finals
			cli::array<Control^>^ pnlSemiArray = pnlMain->Controls->Find("pnlSemi", true);

			if (pnlSemiArray->Length > 0) {
				Panel^ pnlSemi = safe_cast<Panel^>(pnlSemiArray[0]);

				// Semi-Final matches (2 matches)
				for (int i = 0; i < 2; i++) {
					// Access the label for the current semi-final match
					Label^ matchLabel = dynamic_cast<Label^>(pnlSemi->Controls["lblSemi" + (i + 1).ToString()]);

					if (matchLabel != nullptr) {
						// Get the winners from the quarter-finals
						String^ team1Name = TournamentResultArrays::quarterFinalWinners[i * 2];       // Winner of match 1 and 2
						String^ team2Name = TournamentResultArrays::quarterFinalWinners[i * 2 + 1];   // Winner of match 3 and 4

						// Check if there's a winner in the SemiWinners array
						String^ winnerName = TournamentResultArrays::semiFinalWinners[i];

						// Add 1 day for each new match
						matchDateTime = matchDateTime.AddDays(1);

						// Format the date and time to include day name, date, and time
						String^ dateTimeString = matchDateTime.ToString("dd-MM-yyyy dddd HH:mm");

						if (String::IsNullOrEmpty(winnerName)) {
							// If no winner yet, display the scheduled match
							matchLabel->Text = String::Format("Semi-{0}: Quarter Final {1} Winner vs Quarter Final {2} Winner | {3} | Status: Scheduled",
								(i + 1),
								(i * 2 + 1),                      // Quarterfinal team 1 number
								(i * 2 + 2),                      // Quarterfinal team 2 number
								dateTimeString);
						}
						else {
							// If there's a winner, display the completed match
							matchLabel->Text = String::Format("Semi-{0}: {1} vs {2} | {3} | Status: Completed | Winner: {4}",
								(i + 1),
								team1Name,
								team2Name,
								dateTimeString,
								winnerName);
						}
					}
				}
			}

			// Now simulate the Finals using the winners from the Semi Finals
			cli::array<Control^>^ pnlFinalArray = pnlMain->Controls->Find("pnlFinal", true);

			if (pnlFinalArray->Length > 0) {
				Panel^ pnlFinal = safe_cast<Panel^>(pnlFinalArray[0]);

				// Access the label for the final match
				Label^ matchLabel = dynamic_cast<Label^>(pnlFinal->Controls["lblFinal"]);

				if (matchLabel != nullptr) {
					// Get the winners from the semi-finals
					String^ team1Name = TournamentResultArrays::semiFinalWinners[0];       // Winner of match 1 and 2
					String^ team2Name = TournamentResultArrays::semiFinalWinners[1];   // Winner of match 3 and 4

					// Check if there's a winner in the FinalWinner array
					String^ winnerName = TournamentResultArrays::FinalWinner; // Assume only one winner for the final

					// Add 1 day for each new match
					matchDateTime = matchDateTime.AddDays(1);

					// Format the date and time to include day name, date, and time
					String^ dateTimeString = matchDateTime.ToString("dd-MM-yyyy dddd HH:mm");

					if (String::IsNullOrEmpty(winnerName)) {
						// If no winner yet, display the scheduled match
						matchLabel->Text = String::Format("Final: SemiFinal 1 Winner vs SemiFinal 2 Winner | {0} | Status: Scheduled",
							dateTimeString);
					}
					else {
						// If there's a winner, display the completed match
						matchLabel->Text = String::Format("Final: {0} vs {1} | {2} | Status: Completed | Winner: {3}",
							team1Name,
							team2Name,
							dateTimeString,
							winnerName);
					}
				}
			}
		}

		// Access the pnlGroups panel to update Group A and Group B labels
		cli::array<Control^>^ pnlGroupsArray = Obj->Controls->Find("pnlGroups", true);

		if (pnlGroupsArray->Length > 0) {
			Panel^ pnlGroups = safe_cast<Panel^>(pnlGroupsArray[0]);

			// Loop for Group A (Teams 1 to 8)
			for (int i = 0; i < 8; i++) {
				// Access the Group A labels (lblTeam1GroupA, lblTeam2GroupA, ..., lblTeam8GroupA)
				Label^ groupALabel = dynamic_cast<Label^>(pnlGroups->Controls["lblTeam" + (i + 1).ToString() + "GroupA"]);
				if (groupALabel != nullptr) {
					// Set the team names for Group A
					groupALabel->Text = teams[i]->Name;
				}
			}

			// Loop for Group B (Teams 9 to 16)
			for (int i = 0; i < 8; i++) {
				// Access the Group B labels (lblTeam1GroupB, lblTeam2GroupB, ..., lblTeam8GroupB)
				Label^ groupBLabel = dynamic_cast<Label^>(pnlGroups->Controls["lblTeam" + (i + 1).ToString() + "GroupB"]);
				if (groupBLabel != nullptr) {
					// Set the team names for Group B
					groupBLabel->Text = teams[i + 8]->Name; // Teams 9 to 16 go to Group B
				}
			}
		}

		// Show the Schedule form
		Obj->Show();
	}
}

private: System::Void ClosePictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void Minimize_PictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
}
private: System::Void pnlGroupStage3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void lblQuarter2T1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

int currentMatch = 0; // Keeps track of the current match to simulate

private: System::Void btnSimulateMatch_Click(System::Object^ sender, System::EventArgs^ e) {

	if (currentMatch == -1) {
		btnSimulateMatch->Enabled = false;
	}

	Random^ rand = gcnew Random();  // Randomly seed based on system clock

	// Group Stage Matches Simulation
	cli::array<Panel^>^ groupStagePanels = {
		pnlGroupStage1, pnlGroupStage2, pnlGroupStage3, pnlGroupStage4,
		pnlGroupStage5, pnlGroupStage6, pnlGroupStage7, pnlGroupStage8
	};

	// Check if current match and round are valid
	if (currentMatch == -1) {
		MessageBox::Show("Tournament Completed!");
		return;
	}

	// Simulate Group Stage Matches
	if (currentMatch < 8) {
		int matchIndex = currentMatch;
		int winner = rand->Next(0, 2); // Randomly decide the winner (0 or 1)

		Label^ lblT1 = (Label^)groupStagePanels[matchIndex]->Controls["lblGroupStageT1M" + (matchIndex + 1)];
		Label^ lblT2 = (Label^)groupStagePanels[matchIndex]->Controls["lblGroupStageT2M" + (matchIndex + 1)];

		// Ensure the labels exist
		if (lblT1 == nullptr || lblT2 == nullptr) {
			MessageBox::Show("Error accessing labels.");
			return;
		}

		// Determine the winner and store it
		String^ winnerTeam = winner == 0 ? lblT1->Text : lblT2->Text;
		TournamentResultArrays::groupStageWinners[matchIndex] = winnerTeam; // Store the winner

		// Append result to the results string
		results += "Group Stage Match: " + lblT1->Text + " vs " + lblT2->Text + " => " + winnerTeam + " wins!\n";

		// Move the winner to the quarter-finals
		int quarterPanelIndex = matchIndex / 2;
		Panel^ pnlQuarter = (Panel^)this->Controls["pnlQuarter" + (quarterPanelIndex + 1)];

		Label^ lblQuarterT1 = (Label^)pnlQuarter->Controls["lblQuarter" + (quarterPanelIndex + 1) + "T1"];
		Label^ lblQuarterT2 = (Label^)pnlQuarter->Controls["lblQuarter" + (quarterPanelIndex + 1) + "T2"];

		if (matchIndex % 2 == 0) {
			lblQuarterT1->Text = winnerTeam;
		}
		else {
			lblQuarterT2->Text = winnerTeam;
		}

		// Increment the match counter
		currentMatch++;
	}

	// Simulate Quarter-finals Matches
	else if (currentMatch >= 8 && currentMatch < 12) {
		int matchIndex = currentMatch - 8;
		int winner = rand->Next(0, 2); // Randomly decide the winner (0 or 1)

		// Get the quarter-final panel and labels
		Panel^ pnlQuarter = (Panel^)this->Controls["pnlQuarter" + (matchIndex + 1)];
		Label^ lblT1 = (Label^)pnlQuarter->Controls["lblQuarter" + (matchIndex + 1) + "T1"];
		Label^ lblT2 = (Label^)pnlQuarter->Controls["lblQuarter" + (matchIndex + 1) + "T2"];

		// Ensure the labels exist
		if (lblT1 == nullptr || lblT2 == nullptr) {
			MessageBox::Show("Error accessing labels.");
			return;
		}

		// Determine the winner
		String^ winnerTeam = winner == 0 ? lblT1->Text : lblT2->Text;
		TournamentResultArrays::quarterFinalWinners[matchIndex] = winnerTeam; // Store the winner

		results += "Quarter Final: " + lblT1->Text + " vs " + lblT2->Text + " => " + winnerTeam + " wins!\n";

		// Move the winner to the appropriate semi-final labels
		if (matchIndex == 0) {  // Match 9: Quarter 1 winner goes to lblSemi1T1
			Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi1"];
			Label^ lblSemiT1 = (Label^)pnlSemi->Controls["lblSemi1T1"];
			lblSemiT1->Text = winnerTeam;
		}
		else if (matchIndex == 1) {  // Match 10: Quarter 2 winner goes to lblSemi1T2
			Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi1"];
			Label^ lblSemiT2 = (Label^)pnlSemi->Controls["lblSemi1T2"];
			lblSemiT2->Text = winnerTeam;
		}
		else if (matchIndex == 2) {  // Match 11: Quarter 3 winner goes to lblSemi2T1
			Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi2"];
			Label^ lblSemiT1 = (Label^)pnlSemi->Controls["lblSemi2T1"];
			lblSemiT1->Text = winnerTeam;
		}
		else if (matchIndex == 3) {  // Match 12: Quarter 4 winner goes to lblSemi2T2
			Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi2"];
			Label^ lblSemiT2 = (Label^)pnlSemi->Controls["lblSemi2T2"];
			lblSemiT2->Text = winnerTeam;
		}

		// Increment the match counter
		currentMatch++;
	}

	// Simulate Semi-finals Matches
	else if (currentMatch >= 12 && currentMatch < 14) {
		int matchIndex = currentMatch - 12;
		int winner = rand->Next(0, 2); // Randomly decide the winner (0 or 1)

		Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi" + (matchIndex + 1)];
		Label^ lblT1 = (Label^)pnlSemi->Controls["lblSemi" + (matchIndex + 1) + "T1"];
		Label^ lblT2 = (Label^)pnlSemi->Controls["lblSemi" + (matchIndex + 1) + "T2"];

		// Ensure the labels exist
		if (lblT1 == nullptr || lblT2 == nullptr) {
			MessageBox::Show("Error accessing labels.");
			return;
		}

		String^ winnerTeam = winner == 0 ? lblT1->Text : lblT2->Text;
		TournamentResultArrays::semiFinalWinners[matchIndex] = winnerTeam; // Store the winner

		results += "Semi Final: " + lblT1->Text + " vs " + lblT2->Text + " => " + winnerTeam + " wins!\n";

		// Move the winner to the final
		Label^ lblFinalT1 = (Label^)pnlFinal1->Controls["lblFinalT1"];
		Label^ lblFinalT2 = (Label^)pnlFinal2->Controls["lblFinalT2"];

		if (matchIndex == 0) {
			lblFinalT1->Text = winnerTeam;
		}
		else {
			lblFinalT2->Text = winnerTeam;
		}

		currentMatch++;
	}

	// Simulate the Final Match
	else if (currentMatch == 14) {
		int winner = rand->Next(0, 2); // Randomly decide the winner (0 or 1)

		Label^ lblFinalT1 = (Label^)pnlFinal1->Controls["lblFinalT1"];
		Label^ lblFinalT2 = (Label^)pnlFinal2->Controls["lblFinalT2"];

		// Ensure the labels exist
		if (lblFinalT1 == nullptr || lblFinalT2 == nullptr) {
			MessageBox::Show("Error accessing labels.");
			return;
		}

		String^ winnerTeam = winner == 0 ? lblFinalT1->Text : lblFinalT2->Text;
		TournamentResultArrays::FinalWinner = winnerTeam; // Store the winner
		results += "Final Match: " + lblFinalT1->Text + " vs " + lblFinalT2->Text + " => " + winnerTeam;

		results += "\n\t\tWinner of the tournament is: " + winnerTeam + "\n";
		results += "\t\tCongratulations to the winning team!\n";
		results += "\t\tTournament Completed!\n";

		MessageBox::Show(results, "Results of the Tournament");

		// Open the Congratulations Form and update the label with the winning team

		Congratulations^ congrats = gcnew Congratulations();
		congrats->label->Text = "Congratulations to Team " + winnerTeam + " for winning!";
		congrats->Show();  // Show the form

		currentMatch = -1; // Reset after tournament completion
	}
	btnSimulateMatch->Enabled = true;
}


	   int currentRound = 0; // Keeps track of the current round to simulate

private: System::Void btnSimulateRound_Click(System::Object^ sender, System::EventArgs^ e) {

	if (currentRound == -1) {
		btnSimulateRound->Enabled = false;
	}

	Random^ rand = gcnew Random(); 

	// Group Stage Matches Simulation
	cli::array<Panel^>^ groupStagePanels = {
		pnlGroupStage1, pnlGroupStage2, pnlGroupStage3, pnlGroupStage4,
		pnlGroupStage5, pnlGroupStage6, pnlGroupStage7, pnlGroupStage8
	};

	if (currentRound == -1) {
		// Show a message that the tournament is completed
		MessageBox::Show("Tournament Completed!");
		return;
	}

	// Simulate the rounds based on the current round
	if (currentRound == 0) {
		// Simulate Group Stage
		for (int i = 0; i < 8; i++) {
			int winner = rand->Next(0, 2);  // Randomly choose a winner (0 or 1)
			Label^ lblT1 = (Label^)groupStagePanels[i]->Controls["lblGroupStageT1M" + (i + 1)];
			Label^ lblT2 = (Label^)groupStagePanels[i]->Controls["lblGroupStageT2M" + (i + 1)];
			String^ winnerTeam = winner == 0 ? lblT1->Text : lblT2->Text;


			// Store the winner in the group stage winners array
			TournamentResultArrays::groupStageWinners[i] = winnerTeam;

			// Append result to the results string
			results += "Group Stage Match: " + lblT1->Text + " vs " + lblT2->Text + " => " + winnerTeam + " wins!\n";

			// Update the corresponding quarter-final panel with the winner
			int quarterPanelIndex = i / 2;
			Panel^ pnlQuarter = (Panel^)this->Controls["pnlQuarter" + (quarterPanelIndex + 1)];
			if (i % 2 == 0) {
				pnlQuarter->Controls["lblQuarter" + (quarterPanelIndex + 1) + "T1"]->Text = winnerTeam;
			}
			else {
				pnlQuarter->Controls["lblQuarter" + (quarterPanelIndex + 1) + "T2"]->Text = winnerTeam;
			}

		}
		currentRound = 1;  // Move to Quarter Finals
	}
	else if (currentRound == 1) {
		// Simulate Quarter-Finals
		for (int i = 0; i < 4; i++) {
			int winner = rand->Next(0, 2);  // Randomly choose a winner (0 or 1)
			Panel^ pnlQuarter = (Panel^)this->Controls["pnlQuarter" + (i + 1)];
			Label^ lblQuarterT1 = (Label^)pnlQuarter->Controls["lblQuarter" + (i + 1) + "T1"];
			Label^ lblQuarterT2 = (Label^)pnlQuarter->Controls["lblQuarter" + (i + 1) + "T2"];
			String^ winnerTeam = winner == 0 ? lblQuarterT1->Text : lblQuarterT2->Text;

			// Store the winner in the quarter-final winners array
			TournamentResultArrays::quarterFinalWinners[i] = winnerTeam;


			// Append the quarter-final result to the results string
			results += "Quarter Final Match: " + lblQuarterT1->Text + " vs " + lblQuarterT2->Text + " => " + winnerTeam + " wins!\n";

			// Update the corresponding semi-final panel with the winner
			int semiPanelIndex = i / 2;  // Determine which semi-final panel (1 or 2) should be updated
			Panel^ pnlSemi = (semiPanelIndex == 0) ? pnlSemi1 : pnlSemi2;

			if (i % 2 == 0) {
				// Update first team (T1) of the current semi-final panel
				pnlSemi->Controls["lblSemi" + (semiPanelIndex + 1) + "T1"]->Text = winnerTeam;
			}
			else {
				// Update second team (T2) of the current semi-final panel
				pnlSemi->Controls["lblSemi" + (semiPanelIndex + 1) + "T2"]->Text = winnerTeam;
			}

		}
		currentRound = 2;  // Move to Semi Finals
	}
	else if (currentRound == 2) {
		// Simulate Semi-Finals
		for (int i = 0; i < 2; i++) {
			int winner = rand->Next(0, 2);  // Randomly choose a winner (0 or 1)
			Panel^ pnlSemi = (Panel^)this->Controls["pnlSemi" + (i + 1)];
			Label^ lblSemiT1 = (Label^)pnlSemi->Controls["lblSemi" + (i + 1) + "T1"];
			Label^ lblSemiT2 = (Label^)pnlSemi->Controls["lblSemi" + (i + 1) + "T2"];
			String^ winnerTeam = winner == 0 ? lblSemiT1->Text : lblSemiT2->Text;

			// Store the winner in the semi-final winners array
			TournamentResultArrays::semiFinalWinners[i] = winnerTeam;


			// Append the semi-final result to the results string
			results += "Semi Final Match: " + lblSemiT1->Text + " vs " + lblSemiT2->Text + " => " + winnerTeam + " wins!\n";


			// Update the final panel with the winner
			Panel^ pnlFinal = (i == 0) ? pnlFinal1 : pnlFinal2;
			pnlFinal->Controls["lblFinalT" + (i + 1)]->Text = winnerTeam;

			
		}
		currentRound = 3;  // Move to Final
	}
	else if (currentRound == 3) {
		// Simulate Final
		int winner = rand->Next(0, 2);  // Randomly choose a winner (0 or 1)
		Label^ lblFinalT1 = (Label^)pnlFinal1->Controls["lblFinalT1"];
		Label^ lblFinalT2 = (Label^)pnlFinal2->Controls["lblFinalT2"];
		String^ winnerTeam = winner == 0 ? lblFinalT1->Text : lblFinalT2->Text;

		// Store the winner in FinalWinner
		TournamentResultArrays::FinalWinner = winnerTeam;

		// Append the final result to the results string
		results += "Final Match: " + lblFinalT1->Text + " vs " + lblFinalT2->Text + " => " + winnerTeam + " wins!\n";

		// Show the final winner and tournament completion message
		results += "\n\t\tWinner of the Final is: " + winnerTeam + "\n";
		results += "\t\tTournament Completed!\n";

		// Display all results at once in a message box
		MessageBox::Show(results, "Results of the Tournament");

		Congratulations^ congrats = gcnew Congratulations();
		congrats->label->Text = "Congratulations to Team " + winnerTeam + " for winning!";
		congrats->Show();  // Show the form
	
		currentRound = -1;  // Reset after the final, so the tournament can be restarted if needed.
	}

	// Re-enable the Simulate Round button after the round is completed
	btnSimulateRound->Enabled = true;
}



private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
	// Show a MessageBox asking if the user wants to simulate the tournament by rounds or by match
	System::Windows::Forms::DialogResult result = MessageBox::Show("Would you like to simulate the tournament by rounds or by match ...  For Rounds click Yes else select No!!",
		"Select Simulation Type",
		MessageBoxButtons::YesNoCancel,
		MessageBoxIcon::Question);

	// If the user selects 'Yes' (Simulate by Rounds)
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// Hide the button1 (original simulate button)
		button1->Visible = false;

		// Make the Simulate Round button visible
		btnSimulateRound->Visible = true;

		// Disable the Simulate Match button (if needed)
		btnSimulateMatch->Enabled = false;
	}
	// If the user selects 'No' (Simulate by Match)
	else if (result == System::Windows::Forms::DialogResult::No) {
		// Hide the button1 (original simulate button)
		button1->Visible = false;

		// Make the Simulate Match button visible
		btnSimulateMatch->Visible = true;

		// Disable the Simulate Round button (if needed)
		btnSimulateRound->Enabled = false;
	}
	// If the user cancels, do nothing
	else if (result == System::Windows::Forms::DialogResult::Cancel) {
		// No action is needed, the buttons remain as they were
	}
}
};
}

