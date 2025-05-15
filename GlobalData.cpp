#include "TeamsArray.h"

public ref class GlobalData
{
public:
    // Static field to hold the team collection (or any other global data)
    static TeamsArray^ teamCollection = gcnew TeamsArray();
    // Static method to initialize the GlobalData only once
    static void InitializeGlobalData()
    {
        // Ensure that the global data is initialized only once
        if (teamCollection == nullptr)
        {
            teamCollection = gcnew TeamsArray();  // Reinitialize if needed
        }
    }
};