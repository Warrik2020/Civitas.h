#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerGrievance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerGrievance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerGrievance") {}
    public:
        int owner() const { return ReadField<int>("owner"); }
        void owner(int value) const { WriteField<int>("owner", value); }
        int origin() const { return ReadField<int>("origin"); }
        void origin(int value) const { WriteField<int>("origin", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
    };
}
