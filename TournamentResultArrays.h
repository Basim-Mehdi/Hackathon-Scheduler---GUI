#pragma once
using namespace System;
ref class TournamentResultArrays
{
public:
    // Static arrays to store winners
    static cli::array<String^>^ groupStageWinners = gcnew cli::array<String^>(8); // 8 for group stage matches
    static cli::array<String^>^ quarterFinalWinners = gcnew cli::array<String^>(4); // 4 for quarter-finals
    static cli::array<String^>^ semiFinalWinners = gcnew cli::array<String^>(2); // 2 for semi-finals
    static String^ FinalWinner = ""; // Store final winner

};

