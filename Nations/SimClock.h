#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimClock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimClock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimClock") {}
    public:
        bool Running(float secondsSinceLastTick) const { void* args[] = { &secondsSinceLastTick }; return CallStaticValue<bool>("Running", args, 1); }
        void Publish(float secondsPerTick, bool paused) const { void* args[] = { &secondsPerTick, &paused }; CallStatic("Publish", args, 2); }
        float ReferenceTicksPerSecond() const { return ReadStaticField<float>("ReferenceTicksPerSecond"); }
    };
}
