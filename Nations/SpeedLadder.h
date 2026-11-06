#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SpeedLadder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SpeedLadder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SpeedLadder") {}
    public:
        float PaceAt(int index) const { void* __callArgs[] = { &index }; return CallStaticValue<float>("PaceAt", __callArgs, 1); }
        int FastFrom() const { return ReadStaticField<int>("FastFrom"); }
    };
}
